#include <iostream>
#include <cmath>
using namespace std;

#define PI 3.14159

int main() {
	char choice;
	cout << "You want area of rectangle (R) or circle (C) or triangle (T)? ";
	cin >> choice;

	if (choice == 'R' || choice == 'r') {
		double length, width;
		cout << "Please input length of rectangle: ";
		cin >> length;
		cout << "Please input width of rectangle: ";
		cin >> width;
		double area = length * width;
		cout << "Area of rectangle is " << area;
	}
	else if (choice == 'C' || choice == 'c') {
		double radius;
		cout << "Please input radius of circle: ";
		cin >> radius;
		double area = PI * pow(radius, 2);
		cout << "Area of circle is " << area;
	}
	else {
		double base, height;
		cout << "Please input base of triangle: ";
		cin >> base;
		cout << "Please input height of triangle: ";
		cin >> height;
		double area = (base * height) / 2;
		cout << "Area of triangle is " << area;
	}

	return 0;
}