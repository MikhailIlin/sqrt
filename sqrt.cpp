/*
 * sqrt.cpp
 *
 *  Created on: 16 июл. 2018 г.
 *      Author: user
 */
//sqrt - использовавние функции sqrt
#include <iostream>
#include <cmath>
int main ()
{
	using namespace std;
	double area;
	cout << "enter the floor area in square feet, of your home: ";
	cin >> area;
	double side;
	side = sqrt(area);
	cout << "this is equivalent of a square " << side
		 << "feet to the side." << endl;
	cout << "how fascinating!" << endl;
	return 0;
}



