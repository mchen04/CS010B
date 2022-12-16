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

int ItemToPurchase::quantity() {
    return quantity ;
}

void ItemToPurchase::setDescription( string d ) {
    description = d ;
}

void ItemToPurchase::description() {
    return description ;
}
        
void ItemToPurchase::printItemCost() {
    cout << name << " " << quantity << " @ $" << price << " = $" << (quantity * price) << endl ;
}

void ItemToDescription::printItemDescription() {
    cout << name << " " << quantity << " @ $" << price << " = $" << (quantity * price) << endl ;
}