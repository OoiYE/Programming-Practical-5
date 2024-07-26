#include <iostream>
using namespace std;

int main() {
	int num_a, num_b, num_c;
	cout << "Please input num a: " << endl;
	cin >> num_a;
	cout << "Please input num b: " << endl;
	cin >> num_b;
	cout << "Please input num c: " << endl;
	cin >> num_c;

	int sum;
	sum = num_a + num_b + num_c;
	cout << "The sum of 3 numbers is: " << sum;
	
	return 0;
}
