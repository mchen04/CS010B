#ifndef ITEMTOPURCHASE_H
#define ITEMTOPURCHASE_H

class ItemToPurchase {
    public:
        ItemToPurchase() ;
        void setName( string name ) ;
        string name() ;
        void setPrice ( int price ) ;
        int price() ;
        void setQuantity ( int quantity) ;
        int quantity() ;
        void setDescription( string description ) ;
        string description() ;
        void printItemCost() ;
        void printItemDescription() ;
    private:
        string name ;
        int price ;
        int quantity ;
        string description ;
} ;

#endif