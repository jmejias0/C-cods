// Jose Mejias
// Second Practicum
// Soft drink machine simulation
// Input
//	Drink name
//	Cost
//	Number in machine
//	Drink selected
//Output
//	Change
//	Money earned
 
#include <iostream>
#include <string>
using namespace std;
 
struct Product
{
	string name;
	float cost;
	int numDrinks;
};
 
void displayMenu();
 
int main() {
 
	const int item = 5;		// Number of drinks
	// Array of stucture
	Product drink[item] = { "Cola", 0.75, 20,
							"Root Beer", 0.75, 20,
							"Lemon-Lime",0.75, 20,
							"Grape Soda", 0.80, 20,
							"Cream Soda", 0.80, 20};	
 
	int choice;
	double moneyAmount;
	double change;
	int moreAmount;
 
 
	// Menu in the machine
	displayMenu();
 
	cout << "Enter a 1, 2, 3, 4, 5 or 99 to quit the program: " << endl;
	cin >> choice;
 
	if (choice == 1)
		{
			cout << "Enter money: ";
			cin >> moneyAmount;
			if (moneyAmount > drink[0].cost)
			{
				change = moneyAmount - drink[0].cost;
				cout << "change: ";
				cout << change << endl;
			}
			else
				cout << "Please enter more money";
				cin >> moreAmount;
		}
 
	if (choice == 2)
		{
			cout << "Enter money: ";
			cin >> moneyAmount;
			if (moneyAmount > drink[1].cost)
			{
				change = moneyAmount - drink[1].cost;
				cout << "change: ";
				cout << change << endl;
			}
			else
				cout << "Please enter more money";
 
		}
 
	if (choice == 3)
		{
			cout << "Enter money: ";
			cin >> moneyAmount;
			if (moneyAmount > drink[2].cost)
			{
				change = moneyAmount - drink[2].cost;
				cout << "change: ";
				cout << change << endl;
			}
			else
				cout << "Please enter more money";
 
		}
 
	if (choice == 4)
		{
			cout << "Enter money: ";
			cin >> moneyAmount;
			if (moneyAmount > drink[3].cost)
			{
				change = moneyAmount - drink[3].cost;
				cout << "change: ";
				cout << change << endl;
			}
			else
				cout << "Please enter more money";
 
		}
 
	if (choice == 5)
		{
			cout << "Enter money: ";
			cin >> moneyAmount;
			if (moneyAmount > drink[4].cost)
			{
				change = moneyAmount - drink[4].cost;
				cout << "change: ";
				cout << change << endl;
			}
			else
				cout << "Please enter more money";
 
		}
 
	return 0;
}
 
//***************************************************************************
// Display menu fuction. This function display a list of the drinks options	*
//***************************************************************************
 
void displayMenu() 
{
    cout << "Soft drink machine" << endl;
    cout << "---------------------" << endl;
    cout << "1. Cola" << endl;
    cout << "2. Root beer" << endl;
    cout << "3. Lemon-Lime" << endl;
    cout << "4. Grape Soda" << endl;
    cout << "5. Cream Soda" << endl;
    cout << "99. Quit" << endl;
    cout << "Enter your choice (1-5): ";
}
 
//