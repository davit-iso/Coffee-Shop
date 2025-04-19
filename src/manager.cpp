#include "header.hpp"

void Manager::display_order_types() const
{
    std::cout<<"1 - Kiosk\n2 - Cachier\n3 - MobileApp"<<std::endl;
}

void Manager::createOrder()
{
    int tmp{};
    std::cout<<"What kind of order would you like to place?"<<std::endl;
    this -> display_order_types();
    std::cin>>tmp;
    if(tmp == 1)
    {
        std::string n;
        std::cout<<"Enter your name"<<std::endl;
        std::cin.ignore();
        std::getline(std::cin , n);
        orders.emplace_back(std::make_unique<createKiosk>() -> factoryMethod(n));
        while(true)
        {
            int tb;
            std::cout<<"What kind of beverage do you want?"<<std::endl;
            orders[orders.size() - 1] -> display_beverage_types();
            std::cin>>tb;
            if(tb >= 1 && tb <= 3)
            {
                orders[orders.size() - 1] -> ad_beverage(tb);
            }
            else if(tb == 4)
            {
                orders[orders.size() - 1] -> display_beverages();
                return;
            }
            else
            {
                std::cout<<"Wrong input!!"<<std::endl;
            }
        }
    }
    else if(tmp == 2)
    {
        std::string n;
        std::cout<<"Enter your name"<<std::endl;
        std::cin.ignore();
        std::getline(std::cin , n);
        orders.emplace_back(std::make_unique<createCachier>() -> factoryMethod(n));
        while(true)
        {
            int tb;
            std::cout<<"What kind of beverage do you want?"<<std::endl;
            orders[orders.size() - 1] -> display_beverage_types();
            std::cin>>tb;
            if(tb >= 1 && tb <= 3)
            {
                orders[orders.size() - 1] -> ad_beverage(tb);
            }
            else if(tb == 4)
            {
                orders[orders.size() - 1] -> display_beverages();
                return;
            }
            else
            {
                std::cout<<"Wrong input!!"<<std::endl;
            }
        }
    }
    else if(tmp == 3)
    {
        std::string n;
        std::cout<<"Enter your name"<<std::endl;
        std::cin.ignore();
        std::getline(std::cin , n);
        orders.emplace_back(std::make_unique<createMobileApp>() -> factoryMethod(n));
        while(true)
        {
            int tb;
            std::cout<<"What kind of beverage do you want?"<<std::endl;
            orders[orders.size() - 1] -> display_beverage_types();
            std::cin>>tb;
            if(tb >= 1 && tb <= 3)
            {
                orders[orders.size() - 1] -> ad_beverage(tb);
            }
            else if(tb == 4)
            {
                orders[orders.size() - 1] -> display_beverages();
                return;
            }
            else
            {
                std::cout<<"Wrong input!!"<<std::endl;
            }
        }
    }
    else
    {
        std::cout<<"Wrong input!!"<<std::endl;
    }
}

void Manager::display_orders() const
{
    for(int i = 0; i < orders.size(); ++i)
    {
        std::cout<<"Order - "<<i+1<<"\nClient name - "<<orders[i] -> get_name()<<"\nSum of beverages - "<<orders[i] -> get_sum()<<std::endl;
        orders[i] -> display_beverages();
    }
}