/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Category.cpp
 * Author: vmw_ubuntu
 * 
 * Created on February 14, 2018, 11:46 AM
 */

#include "Category.h"

// default constructor
Category::Category()
{
    this -> categoryName = "";
    this -> totalSubCatNo = 0;
}

// copy constructor
Category::Category(const Category& orig)
{
    this -> categoryName = orig.categoryName;
    
    for (int i = 0; i < orig.totalSubCatNo; i++)
        this -> subCategory[i] = orig.subCategory[i];
    
    this -> totalSubCatNo = orig.totalSubCatNo;
}

// deconstructor
Category::~Category()
{
}

// accessor functions
string Category::getCatName() const
{
    return this -> categoryName;
}

SubCategory Category::getSubCat(int index) const
{
    return this -> subCategory[index];
}

int Category::getTotalSubCatNo() const
{
    return this -> totalSubCatNo;
}

// mutator functions
void Category::setCatName(string catName)
{
    this -> categoryName = catName;
}

void Category::setSubCategory(int index, SubCategory sc)
{
    this -> subCategory[index] = sc;
}

/* definitions to be added */
void Category::setTotalSubCatNo()
{
    
}