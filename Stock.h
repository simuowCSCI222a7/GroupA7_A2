/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Stock.h
 * Author: vmw_ubuntu
 *
 * Created on February 14, 2018, 11:46 AM
 */

#ifndef STOCK_H
#define STOCK_H

#include "Transaction.h"
#include <iostream>
#include <cstring>

using namespace std;

const int MAX_TRANSACTION = 100;

class Stock
{
    public:
        // constructors
        Stock();
        Stock(const Stock& orig);
        virtual ~Stock();
        
        // accessor functions
        string getStockID() const;
        string getStockDescription() const;
        float getAmountPerUnit() const;
        Transaction getTransaction(int) const;
        int getTotalTransactionNo() const;
        int getTotalQty() const;
        int getTotalIn() const;
        int getTotalOut() const;
        int getTotalAmount() const;
        
        // mutator functions
        void setStockID(string);
        void setStockDescription(string);
        void setAmountPerUnit(float);
        void setTransaction(int, Transaction);
        /* definitions to be added */
        void setTotalTransactionNo();
        void setTotalQty();
        void setTotalIn();
        void setTotalOut();
        void setTotalAmount();
        
        // utility functions
        void printStock() const;
        bool checkLowStock() const;
        void alertLowStock() const;
        
        void addTransaction();
        void removeTransaction();
        void editTransaction_qty();
        void editTransaction_date();
        
    private:
        // private functions
        float calculateTotalQty();
        float calculateTotalAmt();
        /* end definitions to be added */
        
        // attributes
        string stockID;
        string stockDescription;
        float amountPerUnit;
        Transaction transaction[MAX_TRANSACTION];
        int totalTransactionNo;
        int totalQty;
        int totalIn;
        int totalOut;
        int totalAmount;
};

#endif /* STOCK_H */

