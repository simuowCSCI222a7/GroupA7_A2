/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Transaction.h
 * Author: vmw_ubuntu
 *
 * Created on February 14, 2018, 11:46 AM
 */

#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <iostream>
#include <cstring>

using namespace std;

class Transaction
{
    public:
        // constructors
        Transaction();
        Transaction(const Transaction& orig);
        virtual ~Transaction();
        
        // accessor functions
        int getTransactionQty() const;
        string getTransactionDate() const;
        
        // mutator functions
        void setTransactionQty(int);
        void setTransactionDate(string);
        
        // utility functions
        /* definitions to be added */
        void printTransaction() const;
        /* end definitions to be added */
        
    private:
        int transactionQty;
        string transactionDate;
};

#endif /* TRANSACTION_H */

