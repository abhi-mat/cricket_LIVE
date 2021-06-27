
#ifndef PLAYERRECORD
#define PLAYERRECORD


class PlayerRecord
{
    int matchesplayed;
    int totalruns;
    double battingaverage;
    int totalwickets;
    double economy;

    public:
    PlayerRecord()
    {
        matchesplayed=0;
        totalruns=0;
        battingaverage=0;
        totalwickets=0;
        economy=0;
    }

    int getmatchesplayed()
    {
        return matchesplayed;
    }
    void setmatchesplayed(int matchesplayed)
    {
        this->matchesplayed=matchesplayed;
    }
    int gettotalruns()
    {
        return totalruns;
    }
    void settotalruns(int totalruns)
    {
        this->totalruns=totalruns;
    }
    double getbattingaverage()
    {
        return battingaverage;
    }
    void setbattingaverage(double battingaverage)
    {
        this->battingaverage=battingaverage;
    }
    int gettotalwicket()
    {
        return totalwickets;
    }
    void settotalwicket(int totalwickets)
    {
        this->totalwickets=totalwickets;
    }
    
    double geteconomy()
    {
        return economy;
    }
    void seteconomy(double economy)
    {
        this->economy=economy;
    }


};

#endif