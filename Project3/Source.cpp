#include<iostream>
#include<string>

using namespace std;

int main() {

	cout << "====================\n";
	cout << "=WELCOME TO MY SHOP=\n";
	cout << "====================\n\n";

	cout << "What would you like to buy?\n\n";

	int coke, burger, fries, salad;

	coke = 7;
	burger = 11;
	fries = 7;
	salad = 3;

	cout << "1. Coke: " << coke << "$\n2. Burger: " << burger << "$\n3. Fries: " << fries << "$\n4. Salad: " << salad << "$";

	int total = 0;
	bool stillShopping = true;

	while (stillShopping == true) {
		cout << "\n\nEnter number of the item you want: ";

		int input;
		cin >> input;

		switch (input) {

		case 1: 
			total += coke; break;
		case 2: 
			total += burger; break;
		case 3: 
			total += fries; break;
		case 4: 
			total += salad; break;
		default: 
			cout << "\nInvalid input!\n";

		}
		cout << "Your total amount is:  " << total << "$";
		cout << "\n\nPress Y to continue shopping\nPress N to exit\n\nAnswer: ";
		char Answer;
		cin >> Answer;

		if (Answer == 'Y')
		{
			stillShopping = true;
		}
		else if (Answer == 'N')
		{
			stillShopping = false;
		}
		else
		{
			cout << "\nERROR! WRONG INPUT! EXIT";
			break;
		}
	}
}