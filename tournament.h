class Tournament 
{
    TournamentType type = TournamentType.UPCOMING;
    set<Match> matches;
    string title;
    string host;
    string year;
    map<Date,Match> schedule;
    map<string, int> teamPoints;

    public :
    Tournament(string title,string host,string year) 
    {
        this->title = title;
        this->host = host;
        this->year = year;
    }
    void addMatch(Match match,Date ScheduledTime)
    {
        matches.insert(match);
        schedule.insert(ScheduledTime,match);
    }

    void updateTeamPoints(String teamName, int newPoints)
    {
        teamPoints[teamname]+=newPoints;
    }

    map<Date,Match> getTeamSchedule(String teamName)
    {
        Map<Date,Match> result;
        for(auto itr:schedule)
        {
            if(itr.second.getTeam1()==teamName||itr.second.getTeam2()==teamName)
            {
                result.insert(itr);
            }
        }
        return result;
    }
    int getTeamPoints(String teamName)
    {
        return this->teamPoints[teamName];
    }

};


