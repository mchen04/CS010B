#include <iostream>
using namespace std ;

#include "ItemToPurchase.h"

ItemToPurchase::ItemToPurchase(){
    _name = "none" ;
    _price = 0 ;
    _quantity = 0 ;
    _description = "none" ;
}

ItemToPurchase::ItemToPurchase( string n, int p, int q, string d){
    _name = n ;
    _price = p ;
    _quantity = q ;
    _description = d ;
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