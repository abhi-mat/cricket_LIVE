
#ifndef PLAYER
#define PLAYER

using namespace std;

class Player 
{
    std::string name;
    Date dob;
    Team team;
    PlayerRecord record;

    public :
    
    Player(std::string name, Date dob, Team team) 
    {
        this->name = name;
        this->dob = dob;
        this->team = team;
        this->record = new PlayerRecord();
    }

    std::string getName() 
    {
        return name;
    }

    void setName(std::string name) 
    {
        this->name = name;
    }

    Date getDob() 
    {
        return dob;
    }

    void setDob(Date dob) {
        this->dob = dob;
    }

    Team getTeam() 
    {
        return team;
    }

    void setTeam(Team team) 
    {
        this->team = team;
    }
    
    PlayerRecord getRecord() 
    {
        return record;
    }

    void setRecord(PlayerRecord record) 
    {
        this->record = record;
    }
};

#endif