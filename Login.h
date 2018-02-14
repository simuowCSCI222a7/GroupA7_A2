/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Login.h
 * Author: vmw_ubuntu
 *
 * Created on February 14, 2018, 11:46 AM
 */

#ifndef LOGIN_H
#define LOGIN_H

#include "Staff.h"
#include <iostream>
#include <cstring>

using namespace std;

const int MAX_STAFF = 100;

class Login
{
    public:
        // constructors
        Login();
        Login(const Login& orig);
        virtual ~Login();
        
        // accessor functions
        Staff getStaff(int) const;
        int getTotalStaffNo() const;
        
        // mutator functions
        void setStaff(int, Staff);
        /* definitions to be added */
        void setTotalStaffNo();
        
        void displayLoginMenu();
        bool authenticateID();
        bool authenticatePassword();
        void lockStaff();
        string encryptLogin();
        string decryptLogin();
        
        void importStaff();
        /* end definitions to be added */
        
    private:
        Staff staff[MAX_STAFF];
        int totalStaffNo;
};

#endif /* LOGIN_H */

