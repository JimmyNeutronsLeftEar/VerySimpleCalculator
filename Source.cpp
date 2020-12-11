#include<iostream>
using namespace std;

int main()
{
	int num1;
	int num2;
	char modi;
	char answer;
	do
	{
		cout << "Enter a 2 numbers" << endl;
		cin >> num1 >> num2;

		cout << "What would you like to do to the numbers?" << endl;
		cin >> modi;

		switch (modi)
		{
		case '+':
			cout << num1 + num2;
			break;

		case '-':
			cout << num1 - num2;
			break;

		case '*':
			cout << num1 * num2;
			break;

		case '/':
			cout << num1 / num2;
			break;

		default:
			cout << "Error";
			break;


		}
		cout << "\nWould you like to do another equation? y/n\n";
		cin >> answer;
	} while (answer == 'y');

		return 0;
}