#include <iostream>
using namespace std ;

#include "ShoppingCart.h">

ShoppingCart::ShoppingCart() {
    string _customerName = "none" ;
    string _currentDate = "January 1, 2016" ;
}

ShoppingCart::ShoppingCart( string n, string d) {
    string _customerName = n ;
    string _currentDate = d ;
}

string ShoppingCart::customerName(){
    return _customerName ;
}

string ShoppingCart::date(){
    return _currentDate ;
}

void addItem(ItemToPurchase i){
    _cartItems.push_back(i) ;
}

void removeItem( string n ) {

    bool InCart = false ;

    for (unsigned i = 0 ; i < _cartItems.size(); i++ ){
        if ( _cartItems.at(i) == n ){
            _cartItems.erase( _cartItems.begin() + i )
            inCart = true ;
        }
    }

    if ( !InCart ){
        cout << "Item not found in cart. Nothing removed." << endl ;
    } 
}

void modifyItem(ItemToPurchase item) {

    bool InCart = false ;

    for (unsigned i = 0 ; i < _cartItems.size(); i++ ){
        if ( _cartItems.at(i).name() == items.name() ){
            if (item.price() != 0 ) {
                _cartItems.at(i).setPrice(item.price()) ;
            }
            if (item.description() != "none" ) {
                _cartItems.at(i).setDecription(item.description()) ;
            }
            if (item.quantity() != 0 ) {
                _cartItems.at(i).setQuantity(item.quantity()) ;
            }
            inCart = true ;
        }
    }

    if ( !InCart ){
        cout << "Item not found in cart. Nothing modified." << endl ;
    } 
}

int ShoppingCart::numItemsInCart(){
    return _cartItems.size() ;
}

int ShoppingCart::costOfCart() {
    int sum = 0 ;
    for ( unsigned i = 0; i < _cartItems.size(); i++ ){
        sum += _cartItems.at(i).price() ;
    }
    return sum ;
}

void ShoppingCart::printTotal(){

    cout << customerName() << "'s Shopping Cart - " << date() << endl ;
    cout << "Number of Items: " << numItemsInCart << endl << endl ;

    for ( unsigned i = 0; i < numItemsInCart; i++ ){
        cout << ItemToPurchase.name() << " " << ItemToPurchase.quantity() << " @ $" << ItemToPurchase.price() << " = $" << (ItemToPurchase.quantity() * ItemToPurchase.price()) << endl ;
    }
    
    if ( numItemsInCart == 0 ){
        cout << "SHOPPING CART IS EMPTY" << endl ;
    }

    cout << endl << "Total: $" << costOfCart << endl ;

}
