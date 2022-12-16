#include <iostream>
using namespace std ;

#include "ItemToPurchase.h"

ItemToPurchase::ItemToPurchase(){
    name = "none" ;
    price = 0 ;
    quantity = 0 ;
    description = "none" ;
}

void ItemToPurchase::setName( string n ) {
    name = n ;
}

string ItemToPurchase::name() const {
    return name ;
}
        
void ItemToPurchase::setPrice ( int p ) {
    price = p ;
}

int ItemToPurchase::price() const {
    return price ;
}

void ItemToPurchase::setQuantity ( int q ) {
    quantity = q ;
}

int ItemToPurchase::quantity() const {
    return quantity ;
}

void ItemToPurchase::setDescription( string d ) {
    description = d ;
}

void ItemToPurchase::description() const {
    
}
        
void ItemToPurchase::printItemCost() {
    cout << name << " " << quantity << " @ $" << price << " = $" << (quantity * price) << endl ;
}

void ItemToDescription::printItemDescription() {
    cout << name << ": " << description << "." << endl ;
}