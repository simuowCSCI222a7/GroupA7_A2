/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Transaction.cpp
 * Author: vmw_ubuntu
 * 
 * Created on February 14, 2018, 11:46 AM
 */

#include "Transaction.h"

// default constructor
Transaction::Transaction()
{
    this -> transactionQty = 0;
    this -> transactionDate = "";
}

// copy constructor
Transaction::Transaction(const Transaction& orig)
{
    this -> transactionQty = orig.transactionQty;
    this -> transactionDate = orig.transactionDate;
}

// deconstructor
Transaction::~Transaction()
{
}

// accessor functions
int Transaction::getTransactionQty() const
{
    return this -> transactionQty;
}
string Transaction::getTransactionDate() const
{
    return this -> transactionDate;
}

// mutator functions
void Transaction::setTransactionQty(int tQty)
{
    this -> transactionQty = tQty;
}

void Transaction::setTransactionDate(string tDate)
{
    this -> transactionDate = tDate;
}