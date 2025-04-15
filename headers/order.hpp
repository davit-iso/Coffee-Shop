#ifndef ORDER
#define ORDER

#include <string>
#include "beverage.hpp"
#include <vector>

class Beverage;

class Order
{
    protected:
    std::string name;
    std::vector<std::unique_ptr<Beverage>> beverages;
    //double sum;
    public:
    Order() = default;
    Order(std::string name): name(name){};
    void display_beverages() const;
    virtual void ad_beverage(int);
    void display_decorators() const;
    void display_beverage_types() const;
    std::string get_name();
    double get_sum();
    virtual ~Order() = 0;
};


class Order_kiosk : public Order
{
    public:
    //void ad_beverage() override;
    Order_kiosk(std::string name): Order(name){};
    virtual ~Order_kiosk() = default;
};

class Cachier : public Order
{
    public:
    //void ad_beverage() override;
    Cachier(std::string name): Order(name){};
    virtual ~Cachier() = default;
};

class MobileApp : public Order
{
    public:
    //void ad_beverage() override;
    MobileApp(std::string name): Order(name){};
    virtual ~MobileApp() = default;
};

class createOrder
{
    public:
    virtual std::unique_ptr<Order> factoryMethod(std::string) = 0;
    virtual ~createOrder() = default;
};

class createKiosk : public createOrder
{
    public:
    createKiosk() = default;
    std::unique_ptr<Order> factoryMethod(std::string) override;
    ~createKiosk() = default;
};

class createCachier : public createOrder
{
    public:
    createCachier() = default;
    std::unique_ptr<Order> factoryMethod(std::string) override;
    ~createCachier() = default;
};

class createMobileApp : public createOrder
{
    public:
    createMobileApp() = default;
    std::unique_ptr<Order> factoryMethod(std::string) override;
    ~createMobileApp() = default;
};

#endif