/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Staff.cpp
 * Author: vmw_ubuntu
 * 
 * Created on February 14, 2018, 11:46 AM
 */

#include "Staff.h"
#include <iostream>
#include <cstring>

using namespace std;

// default constructor
Staff::Staff()
{
    this -> staffID = "";
    this -> staffPassword = "";
    this -> staffStatus = Open;
}

// copy constructor
Staff::Staff(const Staff& orig)
{
    this -> staffID = orig.staffID;
    this -> staffPassword = orig.staffPassword;
    this -> staffStatus = orig.staffStatus;
}

// deconstructor
Staff::~Staff()
{
}

// accessor functions
string Staff::getStaffID() const
{
    return this -> staffID;
}

string Staff::getStaffPassword() const
{
    return this -> staffPassword;
}

Staff::status Staff::getStaffStatus() const
{
    return this -> staffStatus;
}

// mutator functions
void Staff::setStaffID(string ID)
{
    this -> staffID = ID;
}

void Staff::setStaffPassword(string password)
{
    this -> staffPassword = password;
}

void Staff::setStaffStatus(status s)
{
    this -> staffStatus = s;
}