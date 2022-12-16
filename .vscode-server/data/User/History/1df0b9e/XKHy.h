#ifndef ITEMTOPURCHASE_H
#define ITEMTOPURCHASE_H

class ItemToPurchase {
    public:
        ItemToPurchase() ;
        void setName( string n ) ;
        string name() const;
        void setPrice ( int p ) ;
        int price() const;
        void setQuantity ( int q) ;
        int quantity() const;
        void setDescription( string d ) ;
        string description() const ;
        void printItemCost() const ;
        void printItemDescription() const ;
    private:
        string name ;
        int price ;
        int quantity ;
        string description ;
} ;

#endif