/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Inventory.cpp
 * Author: vmw_ubuntu
 * 
 * Created on February 14, 2018, 11:41 AM
 */

#include "Inventory.h"

Inventory::Inventory()
{
    this -> totalCategoryNo = 0;
}

Inventory::Inventory(const Inventory& orig)
{
    for (int i = 0; i < orig.totalCategoryNo; i++)
    {
        this -> category[i] = orig.category[i];
    }
    
    this -> totalCategoryNo = orig.totalCategoryNo;
}

Inventory::~Inventory()
{
}

// accessor functions
Category Inventory::getCategory(int index) const
{
    return this -> category[index];
}
int Inventory::getTotalCategoryNo() const
{
    return this -> totalCategoryNo;
}

// mutator functions
void Inventory::setCategory(int index, Category c)
{
    this -> category[index] = c;
}

void Inventory::setTotalCategory()
{
    // definition to be added
}

// utility functions


// get index of existing category
void Inventory::findCatIndex(int& catIndex, string searchCatName) const
{
    bool found = false;
    
    // check all existing categories for a matching category name until found
    for (int i = 0; i < totalCategoryNo && !found; i++)
    {
        // return matching index (by reference)
        if (category[i].getCatName() == searchCatName)
        {
            catIndex = i;
            found = true;
        }
    }
    
    // if no matching index, return -1 (by reference)
    catIndex = -1;
}

void Inventory::findSCatIndex(int& catIndex, int& scatIndex,
                                    string searchScatName) const
{
    bool found = false;
    SubCategory scat;
    
    // check all existing categories and subcategories
    // for a matching subcategory name until found
    for (int i = 0; i < totalCategoryNo && !found; i++)
    {
        for (int j = 0; j < category[i].getTotalSubCatNo() && !found; j++)
        {
            scat = category[i].getSubCat(j);
            
            // return matching index (by reference)
            if (scat.getSubCatName() == searchScatName)
            {
                catIndex = i;
                scatIndex = j;
                found = true;
            }
        }
    }
    
    // if no matching index, return -1 (by reference)
    catIndex = -1;
    scatIndex = -1;
}

void Inventory::findStockIndex(int& catIndex, int& scatIndex,
                            int& stockIndex, string searchID) const
{
    bool found = false;
    SubCategory scat;
    Stock s;
    
    // check all existing categories, subcategories and stocks
    // for a matching stock ID until found
    for (int i = 0; i < totalCategoryNo && !found; i++)
    {
        for (int j = 0; j < category[i].getTotalSubCatNo() && !found; j++)
        {
            scat = category[i].getSubCat(j);
            
            for (int k = 0; k < scat.getTotalStockNo() && !found; k++)
            {
                s = scat.getStock(k);
                
                // return matching index (by reference)
                if (s.getStockID() == searchID)
                {
                    catIndex = i;
                    scatIndex = j;
                    stockIndex = k;
                    found = true;
                }
            }
        }
    }
    
    // if no matching index, return -1 (by reference)
    catIndex = -1;
    scatIndex = -1;
    stockIndex = -1;
}