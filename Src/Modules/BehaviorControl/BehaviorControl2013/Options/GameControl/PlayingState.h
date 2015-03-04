
option(PlayingState)
{

  initial_state(play)
  {
    transition
    {   
		/*if(state_time % 2000 == 0){
			if( theOwnTeamInfo.score > theOpponentTeamInfo.score){
				theOwnTeamInfo.coachMessage = DEFENSIVE_PLAY;
				goto defensive;
			}
			else if( theOwnTeamInfo.score == theOpponentTeamInfo.score ){
				theOwnTeamInfo.coachMessage = NORMAL_PLAY;
				goto normal;
			}
			else if( theOwnTeamInfo.score < theOpponentTeamInfo.score ){
				theOwnTeamInfo.coachMessage = OFFENSIVE_PLAY;
				goto offensive;

			}			
		}*/
		
    }
    action
    {
		theOwnTeamInfo.coachMessage = OFFENSIVE_PLAY; // Play offensive
		if(theRobotInfo.number == 1 )
		{
			Goalie();
		}
		else if(((theRobotInfo.number == 2 || theRobotInfo.number == 3 ) && theOwnTeamInfo.teamColor == TEAM_RED && theOwnTeamInfo.coachMessage == NORMAL_PLAY))
		{
			Defender();
		}
		else if(((theRobotInfo.number == 2 || theRobotInfo.number == 3 || theRobotInfo.number == 4 || theRobotInfo.number == 5) && theOwnTeamInfo.teamColor == TEAM_RED && theOwnTeamInfo.coachMessage == DEFENSIVE_PLAY))
		{
			Defender();
		}
		else
		{
			Striker();
		}
    }
  }
  state(defensive)
  {
    transition
    {   
		if(state_time % 2000 == 0){
		
			if( theOwnTeamInfo.score > theOpponentTeamInfo.score){
				theOwnTeamInfo.coachMessage = DEFENSIVE_PLAY;
				goto defensive;
			}
			else if( theOwnTeamInfo.score == theOpponentTeamInfo.score ){
				theOwnTeamInfo.coachMessage = NORMAL_PLAY;
				goto normal;
			}
			else if( theOwnTeamInfo.score < theOpponentTeamInfo.score ){
				theOwnTeamInfo.coachMessage = OFFENSIVE_PLAY;
				goto offensive;
			}	
		}
	}
	action
	{
		if(theRobotInfo.number == 1 )
		{
			Goalie();
		}
	
		else if(((theRobotInfo.number == 2 || theRobotInfo.number == 3 || theRobotInfo.number == 4 || theRobotInfo.number == 5) && theOwnTeamInfo.teamColor == TEAM_BLUE))
		{
			Defender();
		}
		else
		{
			Striker();
		}
	}
  }
  state(normal)
  {
    transition
    {   
		if(state_time % 2000 == 0){
		
			if( theOwnTeamInfo.score > theOpponentTeamInfo.score){
				theOwnTeamInfo.coachMessage = DEFENSIVE_PLAY;
				goto defensive;
			}
			else if( theOwnTeamInfo.score == theOpponentTeamInfo.score ){
				theOwnTeamInfo.coachMessage = NORMAL_PLAY;
				goto normal;
			}
			else if( theOwnTeamInfo.score < theOpponentTeamInfo.score ){
				theOwnTeamInfo.coachMessage = OFFENSIVE_PLAY;
				goto offensive;
			}	
		}
	}
	action
	{
		if(theRobotInfo.number == 1 )
		{
			Goalie();
		}
		else if(((theRobotInfo.number == 2 || theRobotInfo.number == 3 ) && theOwnTeamInfo.teamColor == TEAM_BLUE))
		{
			Defender();
		}
		else
		{
			Striker();
		}
		
	}
  }
  state(offensive)
  {
    transition
    {   
		if(state_time % 2000 == 0){
		
			if( theOwnTeamInfo.score > theOpponentTeamInfo.score){
				theOwnTeamInfo.coachMessage = DEFENSIVE_PLAY;
				goto defensive;
			}
			else if( theOwnTeamInfo.score == theOpponentTeamInfo.score ){
				theOwnTeamInfo.coachMessage = NORMAL_PLAY;
				goto normal;
			}
			else if( theOwnTeamInfo.score < theOpponentTeamInfo.score ){
				theOwnTeamInfo.coachMessage = OFFENSIVE_PLAY;
				goto offensive;
			}	
		}
	}
	action
	{
		if(theRobotInfo.number == 1 )
		{
			Goalie();
		}
		else
		{
			Striker();
		}
	}
  }



