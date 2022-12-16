#include <iostream>
using namespace std ;

#include "ItemToPurchase.h"

ItemToPurchase::ItemToPurchase(){
    name = "none" ;
    price = 0 ;
    quantity = 0 ;
    description = "none" ;
}

void ItemToPurchase::setName( string& n ) {
    name = name ;
}

string name() ;
        void setPrice ( int price ) ;
        int price() ;
        void setQuantity ( int quantity) ;
        int quantity ;
        void setDescription( string description ) ;
        void description() ;
        void printItemCost() ;
        void printItemDescription() ;