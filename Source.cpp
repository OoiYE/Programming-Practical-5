#include <iostream>
using namespace std;

void read_details(int *age, double *weight, char *smoker);
bool is_accepted(int age, double weight, char smoker);

int main() {
	int age;
	double weight; 
	char answer;

	read_details(&age, &weight, &answer);

	if (is_accepted(age, weight, answer)) {
		cout << "Congratulations! You are accepted for the astronaut program!";
	}
	else {
		cout << "Sorry we cannot accept you as an astronaut.";
	}
	}

void read_details(int *age, double *weight, char *smoker) {
	cout << "Do you want to be an astronaut?\n";
	cout << "Please answer the following questions.\n";
	cout << "How old are you? ";
	cin >> *age;
	cout << "What is your weight?(kg) ";
	cin >> *weight;
	cout << "Are you a smoker?(y or n) ";
	cin >> *smoker;
}

bool is_accepted(int age, double weight, char smoker) {
	return(35 <= age && age <= 45 &&
		50.0 <= weight && weight <= 80.0 &&
		(smoker == 'n' || smoker == 'N'));
}
	

