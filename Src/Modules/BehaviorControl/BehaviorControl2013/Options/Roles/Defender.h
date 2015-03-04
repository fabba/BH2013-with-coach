
option(Defender)
{
    initial_state(start)
    {
        transition
        {
            //ball on own field
            if((theRobotInfo.number == 2|| theRobotInfo.number == 3) && (theBallModel.estimate.position.x + theRobotPose.translation.x < 0) && (theRobotPose.translation.x > -3900.f || theRobotPose.translation.x < -4500.f || theRobotPose.translation.y < -1100.f || theRobotPose.translation.y > 1100.f))
                goto defendingOwnSide;
            //ball on oppo field
            else if((theRobotInfo.number == 2 || theRobotInfo.number == 3) && (theBallModel.estimate.position.x + theRobotPose.translation.x >= 0) && (theRobotPose.translation.x > -3900.f || theRobotPose.translation.x < -4500.f || theRobotPose.translation.y < -1100.f || theRobotPose.translation.y > 1100.f))
                goto defendingOpponentSide;
        }

        action
        {
            theHeadControlMode = HeadControl::scan;
            Stand();
        }
    }

    state(defendingOwnSide)//try to allign self perpendicular to ball, facing opponent goal
    {
        transition
        {
            if(theBallModel.estimate.position.x + theRobotPose.translation.x >= 0) //ball is oppo side of field
                goto defendingOpponentSide;
            else if(theBallModel.estimate.position.x + theRobotPose.translation.x < 0) //ball is on own side of field
                goto turnToBall;
        }

        action
        {
            theHeadControlMode = HeadControl::lookForward;
            // try to maintain a distance of 1 m from the ball and allign to the y coordinate of the ball
            WalkToTarget(Pose2D(80.f, 80.f, 80.f), Pose2D(theBallModel.estimate.position.x - 1000.f, theBallModel.estimate.position.y));
            //WalkToTarget(Pose2D(80.f, 80.f, 80.f), Pose2D(libCodeRelease.angleToGoal, theBallModel.estimate.position.x - 150.f, theBallModel.estimate.position.y - 30.f));
        }
    }

    state(defendingOpponentSide)//try to allign self perpendicular to ball, facing opponent goal
    {
        transition
        {
            if(theBallModel.estimate.position.x + theRobotPose.translation.x < 0) //ball on own field
                goto defendingOwnSide;
            else if(theBallModel.estimate.position.x + theRobotPose.translation.x >= 0) // ball on oppo side
                goto turnToBall;
        }

        action
        {
            theHeadControlMode = HeadControl::lookForward;
            //try to maintain a distance of 3 m from the ball and allign to the y coordinate of the ball
            WalkToTarget(Pose2D(80.f, 80.f, 80.f), Pose2D(theBallModel.estimate.position.x - 4000.f, theBallModel.estimate.position.y));
            //WalkToTarget(Pose2D(80.f, 80.f, 80.f), Pose2D(libCodeRelease.angleToGoal, theBallModel.estimate.position.x - 150.f, theBallModel.estimate.position.y - 30.f));
        }
    }

    state(turnToBall) //
    {
      transition
      {
        if(libCodeRelease.timeSinceBallWasSeen() > 7000)
          goto searchForBall;
        if(std::abs(theBallModel.estimate.position.angle()) < fromDegrees(5.f))
          goto walkToBall;
      }
      action
      {
        theHeadControlMode = HeadControl::lookForward;
        WalkToTarget(Pose2D(50.f, 50.f, 50.f), Pose2D(theBallModel.estimate.position.angle(), 0.f, 0.f));
      }
    }


    state(alignBehindBall)
    {
      transition
      {
        if(libCodeRelease.timeSinceBallWasSeen() > 7000)
          goto searchForBall;
        if(libCodeRelease.between(theBallModel.estimate.position.y, 20.f, 50.f)
          && libCodeRelease.between(theBallModel.estimate.position.x, 140.f, 170.f)
          && std::abs(libCodeRelease.angleToGoal) < fromDegrees(2.f))
          goto kick;
      }
      action
      {
        theHeadControlMode = HeadControl::lookForward;
        WalkToTarget(Pose2D(80.f, 80.f, 80.f), Pose2D(libCodeRelease.angleToGoal, theBallModel.estimate.position.x - 150.f, theBallModel.estimate.position.y - 30.f));
      }
    }

    state(kick)
    {
      transition
      {
        if(state_time > 3000 || (state_time > 10 && action_done))
          goto start;
      }
      action
      {
        theHeadControlMode = HeadControl::lookForward;
        InWalkKick(WalkRequest::left, Pose2D(libCodeRelease.angleToGoal, theBallModel.estimate.position.x - 160.f, theBallModel.estimate.position.y - 55.f));
      }
    }

    state(walkToBall)
    {
      transition
      {
        if(libCodeRelease.timeSinceBallWasSeen() > 7000)
          goto searchForBall;
      }
      action
      {
        theHeadControlMode = HeadControl::lookForward;
        WalkToTarget(Pose2D(50.f, 50.f, 50.f), Pose2D(libCodeRelease.angleToGoal,theFieldDimensions.xPosOwnGroundline - theRobotPose.translation.x + 1500.f, theBallModel.estimate.position.y + 10.f));
      }
    }

    state(searchForBall)
    {
      transition
      {
        if(libCodeRelease.timeSinceBallWasSeen() < 300)
          goto turnToBall;
      }
      action
      {
        theHeadControlMode = HeadControl::lookForward;
        WalkAtSpeedPercentage(Pose2D(1.f, 0.f, 0.f));
      }
    }

//    state(dueling)
//    {

//    }

}
