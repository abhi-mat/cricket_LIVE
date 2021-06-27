
class Match 
{
    Team team1;
    Team team2;
    string venue;
    Date dateTime;
    string resultSummary;
    MatchType type;

    public:
    Match(Team team1, Team team2, String venue, Date dateTime, MatchType type) 
    {
        this->team1 = team1;
        this->team2 = team2;
        this->venue = venue;
        this->dateTime = dateTime;
        this->type = type;
        
    }

    Team getTeam1() 
    {
        return team1;
    }

    void setTeam1(Team team1) 
    {
        this->team1 = team1;
    }

    Team getTeam2() 
    {
        return team2;
    }

    void setTeam2(Team team2) 
    {
        this->team2 = team2;
    }

    String getVenue() 
    {
        return venue;
    }

    void setVenue(String venue) 
    {
        this->venue = venue;
    }

    Date getDateTime() 
    {
        return dateTime;
    }

    void setDateTime(Date dateTime) 
    {
        this->dateTime = dateTime;
    }

    String getResultSummary() 
    {
        return resultSummary;
    }

    void setResultSummary(String resultSummary) 
    {
        this->resultSummary = resultSummary;
    }

    MatchType getType() 
    {
        return type;
    }

    void setType(MatchType type) 
    {
        this->type = type;
    }
};

