/**
 * Project OOP3200-F2020-ICE3
 * @author Devanshi Patel
 * @version 1.0
 */

#pragma once


#ifndef _PROFESSOR_H
#define _PROFESSOR_H
#include <string>
#include "Person.h"


class Professor: public Person {
public: 
    
/**
 * @param first_name
 * @param last_name
 * @param age
 * @param employee_ID
 */
Professor(const std::string& first_name, const std::string& last_name, float age, std::string employee_ID);

std::string getEmployeeID() const;
    
/**
 * @param value
 */
void setEmployeeID(const std::string& value);
    
void Teaches();

std::string ToString() override;

private:
	std::string m_employeeID;
const std::string first_name_;
};

#endif //_PROFESSOR_H