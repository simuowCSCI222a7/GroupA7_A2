/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Login.cpp
 * Author: vmw_ubuntu
 * 
 * Created on February 14, 2018, 11:46 AM
 */

#include "Login.h"
#include <iostream>
#include <cstring>

using namespace std;

// default constructor
Login::Login()
{
    // default constructor for all staff
}

// copy constructor
Login::Login(const Login& orig)
{
    for (int i = 0; i < orig.totalStaffNo; i++)
        this -> staff[i] = orig.staff[i];
}

// deconstructor
Login::~Login()
{
}

// accessor functions
Staff Login::getStaff(int index) const
{
    return this -> staff[index];
}

int Login::getTotalStaffNo() const
{
    return this -> totalStaffNo;
}

// mutator functions
void Login::setStaff(int index, Staff s)
{
    this -> staff[index] = s;
}

void Login::setTotalStaffNo()
{
    // definition to be added
}