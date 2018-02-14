/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Stock.cpp
 * Author: vmw_ubuntu
 * 
 * Created on February 14, 2018, 11:46 AM
 */

#include "Stock.h"

// default constructor
Stock::Stock()
{
    this -> stockID = "";
    this -> stockDescription = "";
    this -> amountPerUnit = 0;
    
    this -> totalTransactionNo = 0;
    this -> totalQty = 0;
    this -> totalIn = 0;
    this -> totalOut = 0;
    this -> totalAmount = 0;
}

// copy constructor
Stock::Stock(const Stock& orig)
{
    this -> stockID = orig.stockID;
    this -> stockDescription = orig.stockDescription;
    this -> amountPerUnit = orig.amountPerUnit;
    
    for (int i = 0; i < orig.totalTransactionNo; i++)
    {
        this -> transaction[i] = orig.transaction[i];
    }
    
    this -> totalTransactionNo = orig.totalTransactionNo;
    this -> totalQty = orig.totalQty;
    this -> totalIn = orig.totalIn;
    this -> totalOut = orig.totalOut;
    this -> totalAmount = orig.totalAmount;
}

// deconstructor
Stock::~Stock()
{
}

// assessor functions
string Stock::getStockID() const
{
    return this -> stockID;
}

string Stock::getStockDescription() const
{
    return stockDescription;
}

float Stock::getAmountPerUnit() const
{
    return this -> amountPerUnit;
}

Transaction Stock::getTransaction(int index) const
{
    return this -> transaction[index];
}

int Stock::getTotalTransactionNo() const
{
    return this -> totalTransactionNo;
}

int Stock::getTotalQty() const
{
    return this -> totalQty;
}

int Stock::getTotalIn() const
{
    return this -> totalIn;
}
int Stock::getTotalOut() const
{
    return this -> totalOut;
}

int Stock::getTotalAmount() const
{
    return this -> totalAmount;
}

// mutator functions
void Stock::setStockID(string sID)
{
    this -> stockID = sID;
}

void Stock::setStockDescription(string sDesc)
{
    this -> stockDescription = sDesc;
}

void Stock::setAmountPerUnit(float apu)
{
    this -> amountPerUnit = apu;
}

void Stock::setTransaction(int index, Transaction t)
{
    this -> transaction[index] = t;
}

void Stock::setTotalTransactionNo()
{
    // edit if needed
}

void Stock::setTotalQty()
{
    // edit to calculate qty
}

void Stock::setTotalIn()
{
    // edit to calculate total in
}

void Stock::setTotalOut()
{
    // edit to calculate total out
}

void Stock::setTotalAmount()
{
    // edit to calculate total amount
}