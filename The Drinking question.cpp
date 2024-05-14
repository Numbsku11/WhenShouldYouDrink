#include <iostream>
using namespace std;

int Time = 0;
int GoodCompany = 0;
int NoBlackout = 0;
int NoAnger = 0;


int tart();
int test();


int tart(){
	cout << "Pick an option\n\n" << "1. Start Test\n" << "2. Quit Drinking\n\n";
	int start = 0;
	cin >> start;

	switch(start){
		case 1:
			test();
		break;

		case 2:
			return 0;
		break;

		default:
			start =- start;
			cout << "\n\nSorry please re-enter your choice \n\n" <<endl
					<< "Pick an option\n\n" << "1. Start Test\n" << "2. Quit Drinking\n\n";
			cin >> start;
		}

	return 0;
}

int main(){
	tart();
}

int test(){
	// Resets the testing options
	Time =- Time;
	GoodCompany =- GoodCompany;
	NoAnger =- NoAnger;
	NoBlackout =- NoBlackout;

	cout << "\nAre you angry?\n\n" << "1. Yes\n2. No\n\n";
	cin >> NoAnger;

	switch(NoAnger){
		case 1:
			cout << "\n\n\First rule broken (Tho shall not drink if tho is of unhappy mind)"
					<< "drinking shall not be allowed at this time";
			main();
		break;

		case 2:
			cout << "\n\nYou have passed the first test";
		break;

		default:
			NoAnger =- NoAnger;
			cout << "\n\nError, please re-enter your choice";
	}

	cout << "\nAre you in good company?\n\n" << "1. Yes\n2. No\n\n";
	cin >> GoodCompany;

	switch(GoodCompany){
		case 1:
			cout << "\n\Good Good enjoy them";
		break;

		case 2:
			cout << "\nAh so someone should check up on you";
		break;

		default:
			GoodCompany =- GoodCompany;
			cout << "\nError, please re-enter your choice";
	}

	cout << "\nDo you want to be blackout drunk?\n\n" << "1. Yes\n2. No\n\n";
	cin >> NoBlackout;

	switch(NoBlackout){
		case 1:
			cout << "\n\Enjoy not knowing where you dick is";
		break;

		case 2:
			cout << "\nAh so you are a light weight";
		break;

		default:
			NoBlackout =- NoBlackout;
			cout << "\nError, please re-enter your choice";
	}


	int ErrorCheck = 0
	cout << "So you have entered\n"
			<< "Are you angry\n" << NoAnger
			<< "Are you in good company\n" << GoodCompany
			<< "Do you want to get blackout drunk\n" << NoBlackout
			<< "Are these correct?\n" << "1. Yes\n 2. No"

	switch (ErrorCheck){

	case 1:
		cout << "\nMoving on to the results then"
	break;

	case 2:

	}







}
