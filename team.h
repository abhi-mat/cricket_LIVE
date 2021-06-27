#ifndef TEAM
#define TEAM

class Team 
{
    string name;
    set<Player> players;

    public:
    
    Team(string name)
     {
        this->name = name;
    }

    void addPlayer(Player player)
    {
        this->players.insert(player);
    }

    void removePlayer(Player player){
        this->players.erase(player);
    }

    string getName() 
    {
        return name;
    }

    void setName(string name) 
    {
        this->name = name;
    }

    set<player> getPlayers() 
    {
        return players;
    }

    void setPlayers(set<Player> players) 
    {
        this->players = players;
    }
}

#endif