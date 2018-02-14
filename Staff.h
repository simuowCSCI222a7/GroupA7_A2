/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Staff.h
 * Author: vmw_ubuntu
 *
 * Created on February 14, 2018, 11:46 AM
 */

#ifndef STAFF_H
#define STAFF_H

#include <iostream>
#include <cstring>

using namespace std;

class Staff
{
    public:
        enum status {Open, Locked};
        
        // constructors
        Staff();
        Staff(const Staff& orig);
        virtual ~Staff();
        
        // accessor functions
        string getStaffID() const;
        string getStaffPassword() const;
        status getStaffStatus() const;
        
        // mutator functions
        void setStaffID(string);
        void setStaffPassword(string);
        void setStaffStatus(status);
        
    private:
        string staffID;
        string staffPassword;
        status staffStatus;
};

#endif /* STAFF_H */

