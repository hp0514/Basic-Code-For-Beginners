
#include <iostream>
using namespace std;

int num;

int main() {
	cout << "Enter a number: ";
	cin >> num;

	if (num > 0)
		cout << num << " is positive.";

	else if (num < 0)
		cout << num << " is negative,";
	else
		cout <<  " Entered number is zero.";

}
