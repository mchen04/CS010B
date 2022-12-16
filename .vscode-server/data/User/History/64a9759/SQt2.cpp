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
    name = n ;
}

string ItemToPurchase::name() {
    return name ;
}
        
void ItemToPurcahse::setPrice ( int& p ) {
    price = p ;
}

int ItemToPurchase::price() {
    return price ;
}

void ItemToPurchase::setQuantity ( int& q const) const {

}

        int quantity ;
        void setDescription( string description ) ;
        void description() ;
        void printItemCost() ;
        void printItemDescription() ;