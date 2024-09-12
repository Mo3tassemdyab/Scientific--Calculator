#include <iostream>
#include <cmath>
using namespace std;

void show_calculator() {
	cout << "------------------------------------------------------" << endl;
	cout << "----                                              ----" << endl;
	cout << "-               SCIENTIFIC                           -" <<endl;
	cout << "-               CALCULATOR                           -" <<endl;
	cout << "---                                                ---" <<endl;
	cout << "------------------------------------------------------" <<endl;
	cout << "-     +      |       -          |         *          -" << endl;
	cout << "-    Add     |      Min         |       Multiply     -" << endl;
	cout << "------------------------------------------------------" <<endl;
	cout << "-     /      |      m           |         L          -" << endl;
	cout << "-   Divide   |     Mod          |        Log         -" << endl;
	cout << "------------------------------------------------------" <<endl;
	cout << "-     S      |      C           |         P          -" << endl;
	cout << "-   Square   |     Cube         |        Power       -" << endl;
	cout << "------------------------------------------------------" <<endl;
	cout << "-     S      |      C           |         t          -" << endl;
	cout << "-    Sin     |     Cos          |        tan         -" << endl;
	cout << "------------------------------------------------------" <<endl;
	cout << "-     r      |      K           |       .            -" << endl;
	cout << "-   Sq root  |     clear        |      close         -" << endl;
	cout << "------------------------------------------------------" <<endl;

}


void display_output(double answer) {
	cout << "------------------------------------------------------" << endl;
	cout << "----                                  ----------------" << endl;
	cout << "-        CURRENT                     |      " << endl;
	cout << "-        OUTPUT IS:                  |      "<< answer << endl;
	cout << "---                                   ----------------" << endl;
	cout << "------------------------------------------------------" << endl;
	cout << "-     +      |       -          |         *          -" << endl;
	cout << "-    Add     |      Min         |       Multiply     -" << endl;
	cout << "------------------------------------------------------" << endl;
	cout << "-     /      |      m           |         L          -" << endl;
	cout << "-   Divide   |     Mod          |        Log         -" << endl;
	cout << "------------------------------------------------------" << endl;
	cout << "-     S      |      C           |         P          -" << endl;
	cout << "-   Square   |     Cube         |        Power       -" << endl;
	cout << "------------------------------------------------------" << endl;
	cout << "-     s      |      c           |         t          -" << endl;
	cout << "-    Sin     |     Cos          |        tan         -" << endl;
	cout << "------------------------------------------------------" << endl;
	cout << "-     r      |      K           |       .            -" << endl;
	cout << "-   Sq root  |     clear        |      close         -" << endl;
	cout << "------------------------------------------------------" << endl;

}
int main()
{

	double num1 = 0.0;
	double num2 = 0.0;

	double answer = 0.0;
	char inp = '\n';
	bool converter = 0;

	//show_calculator();
	while (inp != '.')
	{
		if (converter == 1)
		{
			display_output(answer);
			cout << "Enter: ";
			cin >> inp;

			if (inp == '+' || inp == '-' || inp == '*' || inp == '/' || inp == 'm' || inp == 'P')
			{
				num1 = answer;

				cout << "Enter num2: ";
				cin >> num2;
			}
			else if (inp == 'K' || inp == '.')
			{

			}
			else
			{
				num1 = answer;
			}

		}
		else {
			show_calculator();
			cout << "Enter: ";
			cin >> inp;

			if (inp == '+' || inp == '-' || inp == '*' || inp == '/' || inp == 'm' || inp == 'P')
			{
				cout << "Enter num1: ";
				cin >> num1;

				cout << "Enter num2: ";
				cin >> num2;
			}
			else if (inp == 'K' || inp == '.')
			{

			}
			else
			{
				cout << "Enter num1: ";
				cin >> num1;
			}

			converter = 1;

		}
		switch (inp)
		{
		case '+':
			answer = num1 + num2;
			break;
		case '-':
			answer = num1 - num2;
			break;
		case '/':
			answer = num1 / num2;
			break;
		case 'm':
			answer = int(num1) % int(num2);
			break;
		case 'L':
			answer = log(num1);
			break;
		case 'S':
			answer = num1 * num1;
			break;
		case 'C':
			answer = num1 * num1 * num1;
			break;
		case 'P':
			answer = pow(num1, num2);
			break;
		case 's':
			answer = sin(num1);
			break;
		case 'c':
			answer = cos(num1);
			break;

		case 't':
			answer = tan(num1);
			break;
		case 'r':
			answer = sqrt(num1);
			break;
		case 'K':
			converter = 0;
			break;
		case '.':
			break;
		default:
			cout << "You Entered Invalid Value! " << endl;
		}
		system("cls");

	}

}

