#include < iostream >

using namespace std;

int num;

int main() {
	cout << "Enter a num: ";
	cin >> num;
	if (num % 2 == 0)
		cout << num << " is even.";
	else
		cout << num << " is odd,";
}