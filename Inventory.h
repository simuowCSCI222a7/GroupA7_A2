/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Inventory.h
 * Author: vmw_ubuntu
 *
 * Created on February 14, 2018, 11:41 AM
 */

#ifndef INVENTORY_H
#define INVENTORY_H

#include "Category.h"
#include <iostream>
#include <cstring>

using namespace std;

const int MAX_CATEGORY = 100;

class Inventory
{
    public:
        // constructors
        Inventory();
        Inventory(const Inventory& orig);
        virtual ~Inventory();
        
        // accessor functions
        Category getCategory(int) const;
        int getTotalCategoryNo() const;
        
        // mutator functions
        void setCategory(int, Category);
        /* definitions to be added */
        void setTotalCategory();
        
        // display menu functions
        void displayMainMenu();
        
        void displayStockMenu();
        
        void displayManageCategoriesMenu();
        void displayAddCatOption();
        void displayAddSCatOption();
        void displayRemoveCatOption();
        void displayRemoveSCatOption();
        void displayEditCatOption();
        void displayEditSCatOption();
        void displayCatListOption();
        
        void displayAddStockOption();
        void displayRemoveStockOption();
        
        void displayEditStockMenu();
        void displayEditDescOption();
        void displayEditAPUOption();
        
        void displaySearchStockMenu();
        void displaySearchIDOption();
        void displaySearchCatOption();
        void displaySearchSCatOption();
        void displaySearchAPUOption();
        void displaySearchQtyOption();
        
        void displayStockListOption();
        
        void displayTransactionMenu();
        
        void displayAddTransOption();
        void displayRemoveTransOption();
        
        void displayEditTransMenu();
        void displayEditTransQtyOption();
        void displayEditTransDateOption();
        
        void displaySummaryReportMenu();
        void displayDailyReportOption();
        void displayWeeklyReportOption();
        void displayMonthlyReportOption();
        void displayYearlyReportOption();
        
        // utility functions
        void findCatIndex(int&, string) const;
        void findSCatIndex(int&, int&, string) const;
        void findStockIndex(int&, int&, int&, string) const;
        
        void addCat();
        void removeCat();
        void editCat();
        void printCatList();
        
        void searchStock_ID();
        void searchStock_desc();
        void searchStock_cat();
        void searchStock_scat();
        void searchStock_apu();
        void searchStock_qty();
        void printSearchResults();
        
        void printDailyReport();
        void printWeeklyReport();
        void printMonthlyReport();
        void printYearlyReport();
        
        void importDatabase();
        void exportDatabase();
        void encryptData();
        void decryptData();
        
    private:
        // attributes
        Category category[MAX_CATEGORY];
        int totalCategoryNo;
};

#endif /* INVENTORY_H */

