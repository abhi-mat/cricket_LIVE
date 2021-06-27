class Umpire 
{
    String name;
    public:
    Umpire(String name) 
    {
        this->name = name;
    }

    String getName() {
        return name;
    }

    void setName(String name) 
    {
        this->name = name;
    }
}

