#include <iostream>
using namespace std ;

#include "ItemToPurchase.h"

ItemToPurchase::ItemToPurchase(){
    name = "none" ;
    price = 0 ;
    quantity = 0 ;
    description = "none" ;
}

void ItemToPurchase::setName( const string& n ) const {
    name = n ;
}

string ItemToPurchase::name() {
    return name ;
}
        
void ItemToPurcahse::setPrice ( const int& p ) const {
    price = p ;
}

int ItemToPurchase::price() {
    return price ;
}

void ItemToPurchase::setQuantity ( const int& q ) const {
    quantity = q ;
}


        void setDescription( string description ) ;
        void description() ;
        void printItemCost() ;
        void printItemDescription() ;