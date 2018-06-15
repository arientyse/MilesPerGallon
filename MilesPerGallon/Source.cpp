#include<iostream>

using namespace std;

int main()
{
	
	double gallons;
	double milesonfull;
	double milespergallon;

	cout << right << "How many gallons of gas can your vehicle hold?" << endl;
	cin >> gallons;

	cout << right << "How many miles can be driven on a full tank of gas?" << endl;
	cin >> milesonfull;

	milespergallon = gallons / milesonfull;

	cout << right << "Your vehicle can drive " << milespergallon << "miles per gallon." << endl;

	system("PAUSE");
	return 0;

}