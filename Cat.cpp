#include"Cat.h"

Cat::Cat(std::string name, std::string gender)
    :name(name), gender(gender)
{
    this->stamina = 3;  
    this->hungry = 0;
    this->happy = 0;
    this->bite = 0;
}


std::string Cat::info()
{
    return  "Their name is " + this->name + " and they are " + this->gender + "\n";
}

 std::string Cat::feed()
{
    if (this->hungry < 3) 
    {
        this->hungry++;
        this->happy++;
        return "You almost left without your hand BUT\nYou did it and now " + this->name + " isn't hungry anymore" + "\n";
    }
    else
        return "Oh no... You feed them to much and they pucked on your carpet\n";
}

std::string Cat::play()
{
    if (this->hungry == 0) 
    {
        return  this->name + " bite you cuz they were hungry" + "\n";

        if (this->bite >= 2)
            this->bite++;
            return "What are you doing? You're alredy bleeding. Just feed" + this->name + "\n";
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

std::string Cat::pat()
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
        return "You pated " + this->name + "  and i think they like you" + "\n";
    }

    if (this->happy >= 3)
        return "You hear that " + this->name + "  purr" + "\n";

}

std::string Cat::reletionship()
{
    if (this->happy >= 3)
        return this->name + " loves you. You're a great owner" + "\n";
    else
        return "Well you did a great job but " + this->name + " don't like you so much" + "\n";
}