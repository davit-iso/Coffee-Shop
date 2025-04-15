#include "header.hpp"

std::string Decorator::getDescription()
{
    return beverage -> getDescription();
}
double Decorator::cost()
{
    return beverage -> cost();
}

std::string Milk::getDescription()
{
    return beverage -> getDescription() + " , Milk";
}

double Milk::cost()
{
    return beverage -> cost() + 20;
}

std::string Sugar::getDescription()
{
    return beverage -> getDescription() + " , Sugar";
}

double Sugar::cost()
{
    return beverage -> cost() + 10;
}

std::string Whipped_Cream::getDescription()
{
    return beverage -> getDescription() + " , Whipped Cream";
}

double Whipped_Cream::cost()
{
    return beverage -> cost() + 30;
}

std::string Caramel::getDescription()
{
    return beverage -> getDescription() + " , Caramel";
}

double Caramel::cost()
{
    return beverage -> cost() + 25;
}

void Beverage::display_name() const
{
    std::cout<<name<<std::endl;
}


double Espresso::cost()
{
    return price;
}

std::string Espresso::getDescription()
{
    return name;
}

double Latte::cost()
{
    return price;
}

std::string Latte::getDescription()
{
    return name;
}

double Green_Tea::cost()
{
    return price;
}

std::string Green_Tea::getDescription()
{
    return name;
}