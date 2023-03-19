#include <string>
#include <iostream>
#include "enter.h"
using namespace std;



string Admin_Name = { "Emin" };
int Admin_Key = 190901;

Admin::Admin() {
	cout << "Welcome to WMS\n";

};
void Admin::start() {

	cout << "Please enter the Admin's name\n";
	cin >> name;
	cout << "Please enter the Admin's password\n";
	cin >> password;
	if (name == Admin_Name && password == Admin_Key) {
		system("cls");
		cout << "Welcome Emin\n";

	}
	else if (name == Admin_Name && password != Admin_Key) {
		system("cls");
		cout << "Name is true but password is not!!\n";
		Admin::start();


	}
	else if (name != Admin_Name && password == Admin_Key) {
		system("cls");
		cout << "Password is true but name is not!!\n";
		Admin::start();
	}
	else {
		system("cls");
		cout << "Both value is invalid try again\n";
		Admin::start();
	}
	/*cout << "Please enter Admin's name\n";
	cin >> name;
	if (name == Admin_Name) {
		cout << "Name is true\n";
	}
	if (name != Admin_Name) {
		cout << "Name is false try again\n";

	}
	cout << "Please enter the Admin's password\n";
	cin >> password;
	if (password == Admin_Key) {
		cout << "Password  is true\n";
	}
	if (password != Admin_Key) {
		cout << "Password is false try again\n";

	}
	system("cls");
	cout << "Loading";
	for (int i = 0; i < 20; i++) {
		this_thread::sleep_for(chrono::milliseconds(50));
		cout << ".";

	} */

}
Admin::~Admin() {
	// cout << "\nProgram just finished";
};

