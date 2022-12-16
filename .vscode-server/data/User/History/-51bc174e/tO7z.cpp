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

string ShoppingCart::customerName() const{
    return _customerName ;
}

string ShoppingCart::date() const{
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
            InCart = true ;
        }
    }

    if ( !InCart ){
        cout << "Item not found in cart. Nothing removed." << endl ;
    } 
}

void modifyItem(ItemToPurchase item) {

    bool InCart = false ;

    for (unsigned i = 0 ; i < _cartItems.size(); i++ ){
        if ( _cartItems.at(i).name() == item.name() ){
            if (item.price() != 0 ) {
                _cartItems.at(i).setPrice(item.price()) ;
            }
            if (item.description() != "none" ) {
                _cartItems.at(i).setDecription(item.description()) ;
            }
            if (item.quantity() != 0 ) {
                _cartItems.at(i).setQuantity(item.quantity()) ;
            }
            InCart = true ;
        }
    }

    if ( !InCart ){
        cout << "Item not found in cart. Nothing modified." << endl ;
    } 
}

int ShoppingCart::numItemsInCart() const {
    return _cartItems.size() ;
}

int ShoppingCart::costOfCart() const {
    int sum = 0 ;
    for ( unsigned i = 0; i < _cartItems.size(); i++ ){
        sum += _cartItems.at(i).price() ;
    }
    return sum ;
}

void ShoppingCart::printTotal() const {

    cout << customerName() << "'s Shopping Cart - " << date() << endl ;
    cout << "Number of Items: " << numItemsInCart() << endl << endl ;

    if ( numItemsInCart == 0 ){
        cout << "SHOPPING CART IS EMPTY" << endl ;
    }

    else {
        for ( unsigned i = 0; i < numItemsInCart(); i++ ){
            cout << _cartItems.at(i).name() << " " << cout << _cartItems.at(i).quantity() << " @ $" << cout << _cartItems.at(i).price() << " = $" << (cout << _cartItems.at(i).quantity() * ItemToPurchase.price()) << endl ;
        }
    }

    cout << endl << "Total: $" << ShoppingCart.costOfCart() << endl ;

}

void ShoppingCart::printDescription() const {
    cout << customerName() << "'s Shopping Cart - " << date() << endl << endl ; 
    cout << "Item Descriptions" << endl ;

    for ( unsigned i = 0; i < numItemsInCart(); i++ ){
        cout << ShoppingCart.at(i).name() << ": " << ShoppingCart.at(i).description() << endl ;
    }
}
