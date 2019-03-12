/*
 * Date.cpp
 *
 *  Created on: 22 févr. 2019
 *      Author: faris
 */


#include <iostream>
#include "Date.h"
using namespace std;

Date::Date(){
	day= 00;
	month= 00;
	year=00;
}

Date::Date(int d, int m, int y){
	day = d;
	month = m;
	year = y;
}
void Date::afficher(){
	cout << day << "/" << month << "/" << year;
}
int Date::getDay(){
	return day;
}
int Date::getMonth(){
	return month;
}
int Date::getYear(){
	return year;
}
