#include <iostream>
using namespace std;

int main()
{
	int userValue;
	int i = 0;
	int remainder = 1;
	do {
		cout << "Provide a value" << endl;
		cin >> userValue;
		i = userValue - 1;

		for (i = userValue - 1; i > 1; i--)
		{
			if (userValue % i == 0)
			{
				cout << " You're value is not prime" << endl;
				break;
			}
		}
		if (i == 1)
			cout << "Your value is prime" << endl;
		
	} while (userValue != 0);


	return 0;
}