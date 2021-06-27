class Cricket_App 
{
    set<Tournament> tournaments;
    Admin admin;
    set<Commentator> commentators;

    public: 
    Cricket_App(Admin admin) 
    {
        this->admin = admin;
    }

    void addTournament(Tournament tournament)
    {
        this->tournaments.insert(tournament);
    }

    void addCommentator(Commentator commentator){
        this->commentators.insert(commentator);
    }

    set<Tournament> getTournaments()
    {
        return tournaments;
    }

    void setTournaments(set<Tournament> tournaments) 
    {
        this->tournaments = tournaments;
    }

    Admin getAdmin() 
    {

        return admin;
    }
    void setAdmin(Admin admin) {
        this->admin = admin;
    }

    set<Commentator> getCommentators() 
    {
        return commentators;
    }

    void setCommentators(set<Commentator> commentators) 
    {
        this->commentators = commentators;
    }
};

