#include <iostream>
using namespace std;
int main()

{
	//Task-1
	int variable = 0, Variable2 = 0, Variable3 = 0, Variable4 = 0, table = 0, fuel = 0, rent = 0, bills = 0, Total = 0, chem = 0, math = 0, phy = 0,
		num1 = 0, num2 = 0, num3 = 0, hours = 0, min = 0, min2 = 0, Hour = 0, x = 25, y = 13, x2=0,y2=0,
		x3=0,y3=0,wheat=0,wheatQ=0,rice=0,riceQ=0,sugar=0,sugarQ=0;

	cin >> variable;
	cout << "Variable Value:" << variable << endl;
	//Task-2

	cout << "Enter variable value: ";
	cin >> Variable2;
	cout << "Variable value entered:" << Variable2 << endl;
	//task-3
	cout << "enter Variable Value:";
	cin >> Variable3;
	cout << "Enter Second Variable Value:";
	cin >> Variable4;
	cout << "Sum of Values = " << Variable3 + Variable4 << endl;
	cout << "Differense of Values = " << Variable3 - Variable4 << endl;
	cout << "Product of Values = " << Variable3 * Variable4 << endl;
	cout << "Division of Values = " << Variable3 / Variable4 << endl;
	//Task-4
	cout << "Enter number for table =";
	cin >> table;
	cout << table << " * 1 =" << table * 1 << endl;
	cout << table << " * 2 =" << table * 2 << endl;
	cout << table << " * 3 =" << table * 3 << endl;
	cout << table << " * 4 =" << table * 4 << endl;
	cout << table << " * 5 =" << table * 5 << endl;
	cout << table << " * 6 =" << table * 6 << endl;
	cout << table << " * 7 =" << table * 7 << endl;
	cout << table << " * 8 =" << table * 8 << endl;
	cout << table << " * 9 =" << table * 9 << endl;
	cout << table << " * 10 =" << table * 10 << endl;
	//Task-5
	cout << "Enter the vclue of fuel =";
	cin >> fuel;
	cout << "Enter the value of rent =";
	cin >> rent;
	cout << "Enter the value of bills =";
	cin >> bills;
	cout << "Enter the value of Total =" << fuel + rent + bills << endl;
	
	cout << "-------------------------------------------------------" << endl;
	cout << "fuel:" << fuel << endl;
	cout << "rent:" << rent << endl;
	cout << "bills:" << bills << endl;
	cout << "Total:" << Total << endl;
	cout << "---------------------------------------------------------" << endl;
	//Task-6

	cout << "Enter the vclue of Chemistry =";
	cin >> chem;
	cout << "Enter the value of Math =";
	cin >> math;
	cout << "Enter the value of Physucs =";
	cin >> phy;
	cout << "----------------------------------------------------------------------------------" << endl;



	cout << "Chemistry:" << chem << "              Math: " << math << "                Physics: " << phy << "          Total:" << chem + math + phy << endl;




	cout << "----------------------------------------------------------------------------------" << endl;
	//Task-8
	cout << "Please enter 3 numbers:";
	cin >> num1; cin >> num2; cin >> num3;
	cout << "Reverse in this Order:" << num3 << "    " << num2 << "    " << num1 << "    " << endl;
	//Task-7
	cout << "Enter Price of Wheat: ";
		cin >> wheat;
		cout << "Enter quantity of wheat: ";
		cin >> wheatQ;
		cout << "Enter Price of Rice: ";
		cin >> rice;
		cout << "Enter quantity of Rice: ";
		cin >> riceQ;
		cout << "Enter Price of sugar: ";
		cin >> sugar;
		cout << "Enter quantity of sugar: ";
		cin >> sugarQ;
		cout << "-----------------------------------------------------------" << endl;
		cout << "Value of Wheat = " << wheat * wheatQ << endl;
		cout << "Value of Rice = " << rice*riceQ << endl;
		cout << "Value of Sugar = " << sugar * sugarQ << endl;
		cout << "-----------------------------------------------------------" << endl;
		







	//Task-9
	cout << "Enter hours:";
	cin >> hours;
	cout << "Minutes:";
	cin >> min;
	cout << "Total Minutes:" << hours * 60 + min << endl;
	//Task-10
	cout << "Enter minutes: ";
	cin >> min2;
	cout << "Hours= " << min2 / 60 << "   Minutes= " << min2 % 60 << endl;
	//TAsk-11
	cout << "Value of x is " << x << " Value of y is = " << y << endl;
	cout << "Sum of values x+y is = " << x + y << endl;
	cout << "Multiplication of values x*y is = " << x * y << endl;
	cout << "Division of values x/y is = " << x / y << endl;
	cout << "Division of values y/x is = " << y / x << endl;
	//Task-12
	cout << "Value of x is " << x << " Value of y is = " << y << endl;
	cout << "Sum  x+y = " << x + y << endl;
	cout << "Sub  x-y = " << x - y << endl;
	cout << "Sum  y-x = " << y - x << endl;
	cout << "Mul x*y  = " << x * y << endl;
	cout << "Div x/y  = " << y / x << endl;
	cout << "Div y/x  = " << y / x << endl;
	//Task-13
	cout << "Please enter the value os x = ";
	cin >> x2;
	cout << "Please enter the value of y = ";
	cin >> y2;
	cout << "Value of x is = " << x2 << "Value of y is = " << y2 << endl;
	cout << "Sum of x+y is = " << x2 +y2 << endl;
	cout << "Diffrense of x-y is = " << x2-y2 << endl;
	cout << "Diffrense of y-x is = " << y2-x2 << endl;
	cout << "Multiplication of x*y is = " << x2*y2 << endl;
	cout << "Division of x/y is = " << x2/y2 << endl;
	cout << "Division of y/x is = " << y2 / x2 << endl;
	//Task-14
	cout << "Please enter the value os x = ";
	cin >> x3;
	cout << "Please enter the value of y = ";
	cin >> y3;
	cout << "Value of x is = " << x3 << "Value of y is = " << y3 << endl;
	cout << "Sum of x+y is = " << x3 + y3 << endl;
	cout << "Sub of x-y is = " << x3 - y3 << endl;
	cout << "Sub1 of y-x is = " << y3 - x3 << endl;
	cout << "Multiplication of x*y is = " << x3 * y3 << endl;
	cout << "Division of x/y is = " << x3 / y3 << endl;
	cout << "Division of y/x is = " << y3 / x3 << endl;
	return 0;
}
