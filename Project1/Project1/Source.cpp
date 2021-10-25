#include <iostream>
#include <typeinfo>

using namespace std;

int main() {
	int age = 0;
	signed x = -5;
	unsigned isOnlyPositive = 5;

	cout << "Number is" << isOnlyPositive << endl;

	double interest = 0.07;

	cout << "Interest is " << interest << endl;

	auto myVar = 9.5;
	auto myInt = 9;
	auto str = "String";

	cout << typeid(str).name() << str << endl;







	return 0;
}