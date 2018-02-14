/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SubCategory.cpp
 * Author: vmw_ubuntu
 * 
 * Created on February 14, 2018, 11:46 AM
 */

#include "SubCategory.h"

// default constructor
SubCategory::SubCategory()
{
    this -> subCatName = "";
    this -> totalStockNo = 0;
}

// copy constructor
SubCategory::SubCategory(const SubCategory& orig)
{
    this -> subCatName = orig.subCatName;
    
    for (int i = 0; i < orig.totalStockNo; i++)
    {
        this -> stock[i] = orig.stock[i];
    }
    
    this -> totalStockNo = orig.totalStockNo;
}

// deconstructor
SubCategory::~SubCategory()
{
}

// accessor functions
string SubCategory::getSubCatName() const
{
    return this -> subCatName;
}


Stock SubCategory::getStock(int index) const
{
    return this -> stock[index];
}

int SubCategory::getTotalStockNo() const
{
    return this -> totalStockNo;
}

// mutator functions
void SubCategory::setSubCatName(string scatName)
{
    this -> subCatName = scatName;
}

void SubCategory::setStock(int index, Stock s)
{
    this -> stock[index] = s;
}

void setTotalStockNo()
{
    // definition to be added
}