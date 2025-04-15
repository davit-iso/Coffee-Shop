#ifndef MANAGER
#define MANAGER

#include "header.hpp"

class Order;
class Manager
{
    std::vector<std::shared_ptr<Order>> orders;
    public:
    void display_orders() const;
    void display_order_types() const;
    void createOrder();

};

#endif