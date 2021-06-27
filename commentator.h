
class Commentator 
{
    string name;
    Commentary commentary;

    public:
    Commentator(String name) 
    {
        this->name = name;
    }

    String getName() 
    {
        return name;
    }

    void setName(String name) 
    {
        this->name = name;
    }

    Commentary getCommentary() 
    {
        return commentary;
    }

    void setCommentary(Commentary commentary) 
    {
        this->commentary = commentary;
    }
};

