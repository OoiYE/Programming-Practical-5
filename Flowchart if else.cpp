#include <iostream>
using namespace std;

int main() {
	int num_1, num_2;
	cout << "Please input num 1: ";
	cin >> num_1;
	cout << "Please input num 2: ";
	cin >> num_2;

	if (num_1 > num_2) {
		cout << "First number is bigger";
	}
	else {
		cout << "Second number is bigger";
	}

	return 0;
}
