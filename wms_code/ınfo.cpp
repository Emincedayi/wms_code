#include <string>
#include <iostream> 
#include <vector>
#include "ýnfo.h" 
#include <chrono>
#include <thread>
#include <algorithm> 
#include<fstream>
using namespace std;

Info::Info() {
	cout << "Welcome to Info page\n";
}

void Info::View() {


	ofstream oku;
	oku.open("wms.txt");
	vector<string> myvector{ "Frankenstein","Dracula", "Carmilla", "Legend",
	"Vampire", "Minion", "Hunger", "It", "Catwalk", "Makratos","Alchemist","Innocence", "Hundred", "Western",
	"Karenina", "Bell", "Beloved", "Boody", "Camber", "Locomotif","River","None", "Sleep", "Gone",
	"Postman", "Remember", "Car", "Blood", "Reputation", "Dirty","Flying","Teleport", "Without", "Wealth",
	"Batman", "Spiderman", "Joker", "Hulk", "Superman", "Wick" };





	cout << "\n***Book what Warehouse has***\n";
	for (auto it = myvector.begin(); it != myvector.end(); ++it)
		oku << '-' << *it;
	oku << "\n";
	string ekle, sil2, cevap;
	int sayý, sayý1;
	cout << "Do you want to add any book\n";
	cin >> ekle;
	if (ekle == "Yes") {
		cout << "How many book do you want to add\n";
		cin >> sayý;
		for (int i = 0; i != sayý; ++i) {
			cout << "\nEnter::";
			cin >> ekle;
			myvector.push_back(ekle);
		}

		/*cout << "\n";
		for (auto it = myvector.begin(); it != myvector.end(); ++it)
		cout << ' ' << *it;*/
	}
	if (ekle == "No") {
		cout << "Nothing change\n";
	}
	string Categories[5]{ "Horror","Classics", "Mystery", "Fantastics" };
	string Answer1;
	cout << "Please choose a different category from here\n";

	cout << "Firstly choose a category\n";
	cout << "1)Horror\n";
	cout << "2)Classics\n";
	cout << "3)Mystery \n";
	cout << "4)Fantastics\n";

	cout << "\nWhich category stocks want do you look?\n";
	cin >> Answer1;
	cout << "Researching";
	for (int i = 0; i < 20; i++) {
		this_thread::sleep_for(chrono::milliseconds(50));
		cout << ".";
	}

	if (Categories[0] == Answer1) {
		cout << "\nThis WareHouse has a category of " << Answer1 << "\n";
		cout << "This category shelf number is 1\n";
		for (auto it = myvector.begin(); it != (myvector.begin() + 5); ++it) {
			cout << " " << *it;
		} cout << "\n";
	}


	else if (Categories[1] == Answer1) {
		cout << "\nThis WareHouse has a category of " << Answer1 << "\n";
		cout << "This category shelf number is 2\n";
		for (auto it = (myvector.begin() + 6); it != (myvector.begin() + 12); ++it) {
			cout << " " << *it;
		}
		cout << "\n";
	}
	else if (Categories[2] == Answer1) {
		cout << "\nThis WareHouse has a category of " << Answer1 << "\n";
		cout << "This category shelf number is 3\n";
		for (auto it = (myvector.begin() + 13); it != (myvector.begin() + 16); ++it) {
			cout << " " << *it;
		}
		cout << "\n";
	}
	else if (Categories[3] == Answer1) {
		cout << "\nThis WareHouse has a category of " << Answer1 << "\n";
		cout << "This category shelf number is 4\n";
		for (auto it = (myvector.begin() + 17); it != (myvector.end()); ++it) {
			cout << " " << *it;
		}
		cout << "\n";
	}
	else {
		cout << "\nSorry WareHouse has no stocks category of " << Answer1 << "\n";
		Info::View();
	}







	sort(myvector.begin(), myvector.end());
	for (auto it = myvector.begin(); it != myvector.end(); ++it)
		cout << ' ' << *it;
	cout << "\nDo you want to delete any book which has no stock\n";
	cin >> cevap;
	if (cevap == "Yes") {
		cout << "\nWhich book in the list do you want to delete?\n";
		cin >> sayý1;
		myvector.erase(myvector.begin() + (sayý1 - 1));
		cout << "++New book stocks is there++\n";
		for (auto it = myvector.begin(); it != myvector.end(); ++it)
			cout << ' ' << *it;
	}

	if (cevap == "No") {
		cout << "Nothing change\n";
	}


	cout << "\nResearching";
	for (int i = 0; i < 20; i++) {
		this_thread::sleep_for(chrono::milliseconds(50));
		cout << ".";
	}

	sort(myvector.begin(), myvector.end());

	string  ako[100];
	static int i = 0;
	for (auto it = myvector.begin(); it != myvector.end(); ++it) {

		oku << ' ' << *it;

		ako[i] = *it;

		++i;
	}

	oku.close();


	cout << "\n";


	sort(myvector.begin(), myvector.end());
	cout << "How many orders are there? \n";
	int sipa, tanee, z;
	static int tane = 0, mane[100]{}, temp = 0, tam = 0;

	string  kato, mako[100];
	cin >> sipa;
	vector<string>book(100);
	for (int b = 0; b < sipa; ++b) {
		cout << "\nWhich books in order?\n";
		cin >> book[b];

		for (int a = 0; a < i; a++) {
			if (book[b] == ako[a]) {
				cout << "In stock no problem\n";
				mako[b] = book[b];
				cout << "How many do you want\n";
				cin >> tane;
				if (book[b].length() >= tane) {
					cout << "New number of this book=" << book[b].length() - tane << "\n";
				}
				if (book[b].length() < tane) {
					cout << "Not enought stock \n";
				}
				ofstream al;
				al.open("stok.txt");
				cout << "Do you want to increase stock of this book \n";
				cin >> kato;
				if (kato == "Yes") {
					cout << "How many \n";
					cin >> tanee;
					mane[a] = book[b].length() - tane + tanee;
					al << "New stock number is=" << mane[a] << "\n";
					static int a;
					a = book[b].length();
					mane[a] += a;
					/**	temp = mane[a] + tanee;
						tam = book[b].length();
						tam = temp;
						temp = mane[a];
						mane[a] = temp;
						kalf.push_back(book[b]);
						cout << sort(book[b].begin(), book[b].end()) << endl;
					  sort(kalf.begin(), kalf.end());
					for (auto it = kalf.begin(); it != kalf.end(); ++it) {
						cout << ' ' << *it;
					 */
				}
				if (kato == "No") {
					al << "Stock is same= " << book[b].length() - tane << "\n";;
				}
				al.close();
			}

		}



		/*vector<string>sýralama{};
		sýralama.push_back(book[b]);
		sort(sýralama.begin(), sýralama.end());
		for (auto x = sýralama.begin(); x != sýralama.end(); ++x)
			cout << "take books respectively\n\n" << *x;

*/

	}

	sort(begin(mako), end(mako));

	system("cls");

	for (auto n : mako) {//for int i li yap 1, bunu al2, sunu al de
		if (n.empty()) {

		}
		else {
			cout << "\nTake books respectively in this warehouse\n";
			cout << n << "\n";//
		}

	}





}

