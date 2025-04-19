#include "header.hpp"

Order::~Order() = default;

void Order::ad_beverage(int n)
{
    if(n == 1)
    {
        std::unique_ptr<Beverage> es = std::make_unique<Espresso>();
        while(true)
        {
            int d{};
            std::cout<<"What would you like to add?\n";
            this -> display_decorators();
            std::cin>>d;
            if(d == 1)
            {
                es = std::make_unique<Milk>(std::move(es));
                std::cout<<"Milk was added!"<<std::endl;
            }
            else if(d == 2)
            {
                es = std::make_unique<Sugar>(std::move(es));
                std::cout<<"Sugar was added!"<<std::endl;
            }
            else if(d == 3)
            {
                es = std::make_unique<Whipped_Cream>(std::move(es));
                std::cout<<"Whipped Cream was added!"<<std::endl;
            }
            else if(d == 4)
            {
                es = std::make_unique<Caramel>(std::move(es));
                std::cout<<"Caramel was added!"<<std::endl;
            }
            else if(d == 5)
            {
                return;
            }
            else
            {
                std::cout<<"Wrong input!!"<<std::endl;
            }
        }
        beverages.push_back(std::move(es));
    }
    if(n == 2)
    {
        std::unique_ptr<Beverage> es = std::make_unique<Latte>();
        while(true)
        {
            int d{};
            std::cout<<"What would you like to add?\n";
            this -> display_decorators();
            std::cin>>d;
            if(d == 1)
            {
                es = std::make_unique<Milk>(std::move(es));
                std::cout<<"Milk was added!"<<std::endl;
            }
            else if(d == 2)
            {
                es = std::make_unique<Sugar>(std::move(es));
                std::cout<<"Sugar was added!"<<std::endl;
            }
            else if(d == 3)
            {
                es = std::make_unique<Whipped_Cream>(std::move(es));
                std::cout<<"Whipped Cream was added!"<<std::endl;
            }
            else if(d == 4)
            {
                es = std::make_unique<Caramel>(std::move(es));
                std::cout<<"Caramel was added!"<<std::endl;
            }
            else if(d == 5)
            {
                return;
            }
            else
            {
                std::cout<<"Wrong input!!"<<std::endl;
            }
        }
        beverages.push_back(std::move(es));
    }
    if(n == 3)
    {
        std::unique_ptr<Beverage> es = std::make_unique<Green_Tea>();
        while(true)
        {
            int d{};
            std::cout<<"What would you like to add?\n";
            this -> display_decorators();
            std::cin>>d;
            if(d == 1)
            {
                es = std::make_unique<Milk>(std::move(es));
                std::cout<<"Milk was added!"<<std::endl;
            }
            else if(d == 2)
            {
                es = std::make_unique<Sugar>(std::move(es));
                std::cout<<"Sugar was added!"<<std::endl;
            }
            else if(d == 3)
            {
                es = std::make_unique<Whipped_Cream>(std::move(es));
                std::cout<<"Whipped Cream was added!"<<std::endl;
            }
            else if(d == 4)
            {
                es = std::make_unique<Caramel>(std::move(es));
                std::cout<<"Caramel was added!"<<std::endl;
            }
            else if(d == 5)
            {
                return;
            }
            else
            {
                std::cout<<"Wrong input!!"<<std::endl;
            }
        }
        beverages.push_back(std::move(es));
    }
    else
    {
        std::cout<<"Wrong input!!"<<std::endl;
    }
}

std::unique_ptr<Order> createKiosk::factoryMethod(std::string nm)
{
    return std::make_unique<Order_kiosk>(nm);
}

std::unique_ptr<Order> createCachier::factoryMethod(std::string nm)
{
    return std::make_unique<Cachier>(nm);
}

std::unique_ptr<Order> createMobileApp::factoryMethod(std::string nm)
{
    
    return std::make_unique<MobileApp>(nm);
}

void Order::display_decorators() const
{
    std::cout<<"1 - Milk\n2 - Sugar\n3 - Whipped Cream\n4 - Caramel\n5 - Achieve"<<std::endl;
}

void Order::display_beverage_types() const
{
    std::cout<<"1 - Espresso\n2 - Latte\n3 - Green Tea\n4 - Summarize"<<std::endl;
}

void Order::display_beverages() const
{
    for(auto i = 0; i < beverages.size(); ++i)
    {
        beverages[i] -> display_name();
    }
    std::cout<<"Beverages count - "<<beverages.size()<<std::endl;
}

std::string Order::get_name()
{
    return name;
}

double Order::get_sum()
{
    double sum = 0;
    for(auto i = 0; i < beverages.size(); ++i) 
    {
        sum += beverages[i] -> cost();
    }
    return sum;
}