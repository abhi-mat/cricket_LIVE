class Admin 
{
    string username;
    string password;

    Admin(string username, string password) 
    {
        this->username = username;
        this->password = password;
    }

    string getUsername() 
    {
        return username;
    }

    void setUsername(String username) 
    {
        this->username = username;
    }

    string getPassword()
    {
        return password;
    }

    void setPassword(String password) 
    {
        this->password = password;
    }
};
