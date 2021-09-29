/**
 * Project OOP3200-F2020-ICE3
 * @author Devanshi Patel
 * @version 1.0
 */


#ifndef _PROFESSOR_H
#define _PROFESSOR_H

#include "Person.h"


class Professor: public Person {
public: 
    
/**
 * @param first_name
 * @param last_name
 * @param age
 * @param employee_ID
 */
void Professor(string first_name, string last_name, float age, string employee_ID);
    
string getEmployeeID();
    
/**
 * @param value
 */
void setEmployeeID(string value);
    
void Teaches();
    
void ToString();
    
string ToString();
private: 
    string m_employeeID;
};

#endif //_PROFESSOR_H