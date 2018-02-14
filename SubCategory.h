/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SubCategory.h
 * Author: vmw_ubuntu
 *
 * Created on February 14, 2018, 11:46 AM
 */

#ifndef SUBCATEGORY_H
#define SUBCATEGORY_H

#include "Stock.h"
#include <iostream>
#include <cstring>

using namespace std;

const int MAX_STOCK = 100;

class SubCategory
{
    public:
        // constructors
        SubCategory();
        SubCategory(const SubCategory& orig);
        virtual ~SubCategory();
        
        // accessor functions
        string getSubCatName() const;
        Stock getStock(int) const;
        int getTotalStockNo() const;
        
        // mutator functions
        void setSubCatName(string);
        void setStock(int, Stock);
        /* definitions to be added */
        void setTotalStockNo();
        
        void printSCat() const;
        
        void addStock();
        void removeStock();
        void editStock_desc();
        void editStock_apu();
        /* end definitions to be added*/
        
    private:
        string subCatName;
        Stock stock[MAX_STOCK];
        int totalStockNo;
};

#endif /* SUBCATEGORY_H */

