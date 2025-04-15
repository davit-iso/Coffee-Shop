#ifndef BEVERAGE
#define BEVERAGE

#include "header.hpp"

class Beverage
{
    protected:
    int price;
    std::string name;
    public:
    Beverage() = default;
    virtual double cost() = 0;
    void display_name() const;
    virtual std::string getDescription() = 0;
    Beverage(std::string name, int price):name(name),price(price){};
    virtual ~Beverage() = default;
};

class Espresso : public Beverage
{
    public:
    Espresso():Beverage("Espresso",100){};
    ~Espresso(){};
    double cost() override;
    std::string getDescription() override;
};

class Latte : public Beverage
{
    public:
    Latte():Beverage("Late",120){};
    ~Latte(){};
    double cost() override;
    std::string getDescription() override;
};

class Green_Tea : public Beverage
{
    public:
    Green_Tea():Beverage("Grren_Tea",150){};
    ~Green_Tea(){};
    double cost() override;
    std::string getDescription() override;
};

class Decorator : public Beverage
{
    protected:
    std::unique_ptr<Beverage> beverage;
    public:
    Decorator(std::unique_ptr<Beverage> b): beverage(std::move(b)){};
    std::string getDescription() override;
    double cost() override;
};

class Milk : public Decorator
{
    public:
    Milk(std::unique_ptr<Beverage> b): Decorator(std::move(b)){};
    std::string getDescription() override;
    double cost() override;
};

class Sugar : public Decorator
{
    public:
    Sugar(std::unique_ptr<Beverage> b): Decorator(std::move(b)){};
    std::string getDescription() override;
    double cost() override;
};

class Whipped_Cream : public Decorator
{
    public:
    Whipped_Cream(std::unique_ptr<Beverage> b): Decorator(std::move(b)){};
    std::string getDescription() override;
    double cost() override;
};

class Caramel : public Decorator
{
    public:
    Caramel(std::unique_ptr<Beverage> b): Decorator(std::move(b)){};
    std::string getDescription() override;
    double cost() override;
};
      
#endif