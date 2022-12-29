#include"Cat.h"

Cat::Cat(string name, string gender)
    :name(name), gender(gender)
{
    this->hungry = 0;
    this->stamina = 3;
    this->happy = 0;
    this->bite = 0;
}


string Cat::info()
{
    return  "Their name is " + this->name + " and they are " + this->gender + "\n";
}

 string Cat::feed()
{
    if (this->hungry < 3) 
    {
        this->hungry++;
        this->happy++;
        return "You almost left without your hand BUT You did it and now " + this->name + " isn't hungry anymore" + "\n";
    }
    else
        return "Oh no... You feed them to much and they pucked on your carpet\n";
}

string Cat::play()
{
    if (this->hungry == 0) 
    {
        this->bite++;
        if (this->bite >= 2)
        {
            this->bite++;
            return "What are you doing? You're alredy bleeding. Just feed" + this->name + "\n";
        }

        return  this->name + " bite you cuz they were hungry" + "\n";
    }
    else if (this->stamina >= 0)
    {
        this->happy++;
        this->stamina--;
        return "You played with " + this->name + " and i think they like you" + "\n"; 
    }
    else
    {
        this->happy--;
        return this->name + " are tired please don't disturb then" + "\n";
    }
}

string Cat::pat()
{
    if (this->hungry == 0)
    {
        this->bite++;
        this->happy--;
        return this->name + " bite you cuz they were hungry" + "\n";
}
    else
    {
        this->happy++;
        if (this->happy >= 3)
            return "You hear that " + this->name + "  purr" + "\n";
        return "You pated " + this->name + "  and i think they like you" + "\n";
    }
}

string Cat::reletionship()
{
    if (this->happy >= 2)
        return this->name + " loves you. You're a great owner" + "\n";
    else
        return "Well you did a great job but " + this->name + " don't like you so much" + "\n";
}
