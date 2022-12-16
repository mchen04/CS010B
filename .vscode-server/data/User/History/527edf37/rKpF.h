#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H

#include <vector>
#include 
#include "ItemToPurchase.h"

class ShoppingCart {
    public:
        ShoppingCart() ;
        ShoppingCart( string n, int d) ;

    private:
        string _customerName ;
        string _currentDate ;
        vector < ItemToPurchase > _cartItems ; 

} ;

#endif