/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Category.h
 * Author: vmw_ubuntu
 *
 * Created on February 14, 2018, 11:46 AM
 */

#ifndef CATEGORY_H
#define CATEGORY_H

#include "SubCategory.h"
#include <iostream>
#include <cstring>

using namespace std;

const int MAX_SUBCATEGORY = 100;

class Category
{
    public:
        // constructors
        Category();
        Category(const Category& orig);
        virtual ~Category();
        
        // accessor functions
        string getCatName() const;
        SubCategory getSubCat(int) const;
        int getTotalSubCatNo() const;
        
        // mutator functions
        void setCatName(string);
        void setSubCategory(int, SubCategory);
        /* definitions to be added */
        void setTotalSubCatNo();
        
        // utility functions
        void printCat() const;
        void printSCatList() const;
        
        void addSCat();
        void removeSCat();
        void editSCat();
        /* end definitions to be added */
        
    private:
        string categoryName;
        SubCategory subCategory[MAX_SUBCATEGORY];
        int totalSubCatNo;
};

#endif /* CATEGORY_H */

