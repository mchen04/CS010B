#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H

#include "ItemToPurchase.h"

#include <iostream>
#include <vector>

class ShoppingCart {
    public:
        ShoppingCart() ;
        ShoppingCart( string n, string d) ;

    private:
        string _customerName ;
        string _currentDate ; 
        vector < ItemToPurchase > _cartItems ; 

} ;

#endif