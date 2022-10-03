/*
 * lab1.cpp
 *
 *  Created on: Oct 2, 2022
 *      Author: kathyzeng
 */

#include <iostream>
using namespace std;

int main() {
	// Prints out hello world and my introduction
	cout << "Hello world!" << endl;
	cout << "My name is Kathy Zeng. My major is Computer Science" << endl;
	cout << "This is the first CIS class that ever take." << endl;
	cout << "I really want to succeed in this class to help my coding skills and enough skills to succeed" << endl;

	// Calculates the total number of class registrations this quarter.
	int numCisCourses = 85;
	int avgStudents = 30;

	cout << "How many CIS courses being offered at De Anza? " << endl;
	cin >> numCisCourses;

	cout << "How many average student registrations there are per course? " << endl;
	cin >> avgStudents;

	cout << "Total course registrations: " << numCisCourses * avgStudents << endl;
}



