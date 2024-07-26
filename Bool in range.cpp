#include <iostream>
using namespace std;

int main() {
	int number;
	cout << "Please input number: ";
	cin >> number;
	
	bool in_range = (-5 <= number && number <= 100);
	if (in_range) {
		cout << "In the range";
	}
	else {
		cout << "Not in the range";
	}

	return 0;
}
