#ifndef ITEMTOPURCHASE_H
#define ITEMTOPURCHASE_H

class ItemToPurchase {
    public:
        ItemToPurchase() ;
        void setName() ;
        string name() ;
        void setPrice () ;
        int price() ;
        void setQuantity () ;
        int quantity ;
        void setDescription() ;
    private:
        string name ;
        int price ;
        int quantity ;
} ;

#endif