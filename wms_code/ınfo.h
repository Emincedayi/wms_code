#ifndef INFO_H
#define INFO_H   
//#include"menu.h"
#include<iostream> 
#include<string> 
#include <vector>
using namespace std;
class Info {
public:
	explicit Info();
	//~Info();
	void View();
	//void Delete();
};
/*

	//Prep mx;
	//mx.Last();
	vector<string> myvector{ "Frankenstein","Dracula", "Carmilla", "Legend",
	"Vampire", "Minion", "Hunger", "It", "Catwalk", "Makratos","Alchemist","Innocence", "Hundred", "Western",
	"Karenina", "Bell", "Beloved", "Boody", "Camber", "Locomotif","River","None", "Sleep", "Gone",
	"Postman", "Remember", "Car", "Blood", "Reputation", "Dirty","Flying","Teleport", "Without", "Wealth",
	"Batman", "Spiderman", "Joker", "Hulk", "Superman", "Wick" };
	// kaç kitap ekleyecek ona gore for dongusu kullan
	int kac;
	string cevap,cevap2;
	cout << "kitap ekleyecen mi?\n";
	cin >> cevap;
	if (cevap == "Yes") {
	cout << "kac tane kitap ekleyeceksiniz?\n";
	cin >> kac;
	for (int i = 0; i < kac; ++i) {
	string ekle;
	cout << "kitap adi girin?\n";
	cin >> ekle;
	myvector.push_back(ekle);
	}
	}
	if (cevap == "No") {
		cout << "Okey noting change\n";
	}
	//sort(myvector.begin(), myvector.end());
	for (auto it = myvector.begin(); it != myvector.end(); ++it)
		cout << ' ' << *it;
	cout << "kitap silecen mi?\n";
	cin >> cevap2;
	if (cevap2 == "Yes") {
	int silme;
	cout << "\nlisteden kacýncý kitabý sýlmek istiyorsunuz\n";
	cin >> silme;
	myvector.erase(myvector.begin() + (silme-1));
	}
	if (cevap2 == "No") {
		cout << "Nothing deleted\n";
	}
	sort(myvector.begin(), myvector.end());
	string ako[200];
	static int i = 0;
	for (auto it = myvector.begin(); it != myvector.end(); ++it) {

		cout << ' ' << *it;

		ako[i] = *it;

		i++;
	}



	cout << "\n\n";
	sort(myvector.begin(), myvector.end());
	cout << "kaç siparis var \n";
	int sipa,tanee;
	 static int tane=0,mane=0,temp=0,tam=0;
	string book[100],kato;
	cin >> sipa;
	cout << "sipariste hangi kitaplar var\n";
	for (int b = 0; b < sipa; ++b) {
		cin >> book[b];

		for (int a = 0; a < i; a++) {
			if (book[b] == ako[a]) {
				cout << "stokta var np\n";
				cout << "kaç tane istiyorsunuz\n";
				cin >> tane;
				if (book[b].length() >= tane) {
					cout << "kalan kitap sayýsý=" << book[b].length() - tane << "\n";
				}
				if (book[b].length() < tane) {
					cout << "yeterli stok yok\n";
				}
				cout << "bu kitaptan stoða  geldi mi \n";
				cin >> kato;
				if (kato == "Yes") {
					cout << "kac tane\n";
					cin >> tanee;
					mane = book[b].length() - tane + tanee;
					cout << "bu kitabýn yeni stok adeti=" << mane;
					temp = mane + tanee;
					tam = book[b].length();
					tam = temp;
					temp = mane;
					mane = temp;
				}
				vector<string>sýralama{};
				sýralama.push_back(book[b]);
				sort(sýralama.begin(), sýralama.end());
				for (auto x = sýralama.begin(); x != sýralama.end(); ++x)
					cout << "take books respectively\n\n" << *x;


				if (kato == "No") {
					cout << "Tamam\n";

				}


			}
				break;

			}

}


	//for (auto it = myvector.begin(); it != myvector.end(); ++it)
		//cout << ' ' << *it;*/
		/*
		void Info::Horror() {
			string horrors[10]{ "Frankenstein","Dracula", "Carmilla", "Legend",
			"Vampire", "Minion", "Hunger", "It", "Catwalk", "Makratos" };
			for (int i = 0; i < 10; i++) {

				cout <<(i+1)<<". content -> "<< horrors[i] << "\n";
			}
			string Ako;
			int Number = 9;
			cout << "\nEnter books name respectively\n";
			cin >> Ako;
			while (1) {
				if (horrors[Number] == Ako) {
					int sayac = 0;
					int count = 0;
					cout << "How much do you want?";
					cin >> count;
					cout << "Stock value of this book:" << Ako.length() << "\n";
					sayac = Ako.length();

					if (count > sayac) {
						cout << "Can not take more than stock's value try again!!!\n";
						Category();
						break;
					}
					if (count <= sayac) {
						cout << "\nOld stock just expired new is->" << (sayac - count);
						break;
					}
				}
				if (horrors[Number] != Ako) {
					Number--;
				}
			}
		}
		void Info::Classics() {
			string classic[10]{ "Alchemist","Innocence", "Hundred", "Western",
			"Karenina", "Bell", "Beloved", "Boody", "Camber", "Locomotif" };
			for (int i = 0; i < 10; i++) {

				cout << (i + 1) << ". content -> " << classic[i] << "\n";
			}
			string Ako;
			int Number = 9;


			cout << "\nEnter books name respectively\n";
			cin >> Ako;
			while (1) {
				if (classic[Number] == Ako) {
					int sayac = 0;
					int count = 0;
					cout << "How much do you want?";
					cin >> count;
					cout << "Stock value of this book:" << Ako.length() << "\n";
					sayac = Ako.length();

					if (count > sayac) {
						cout << "Can not take more than stock's value try again!!!\n";
						Category();
						break;
					}
					if (count <= sayac) {
						cout << "\nOld stock just expired new is->" << (sayac - count);
						break;
					}
				}
				if (classic[Number] != Ako) {
					Number--;
				}

			}

		}
		void Info::Mystery() {
			string mystery[10]{ "River","None", "Sleep", "Gone",
			"Postman", "Remember", "Car", "Blood", "Reputation", "Dirty" };
			for (int i = 0; i < 10; i++) {
				cout << (i + 1) << ". content -> " << mystery[i] << "\n";
			}

			string Ako;
			int Number = 9;


			cout << "\nEnter books name respectively\n";
			cin >> Ako;
			while (1) {
				if (mystery[Number] == Ako) {
					int sayac = 0;
					int count = 0;
					cout << "How much do you want?";
					cin >> count;
					cout << "Stock value of this book:" << Ako.length() << "\n";
					sayac = Ako.length();

					if (count > sayac) {
						cout << "Can not take more than stock's value try again!!!\n";
						Category();
						break;
					}
					if (count <= sayac) {
						cout << "\nOld stock just expired new is->" << (sayac - count);
						break;
					}
				}
				if (mystery[Number] != Ako) {
					Number--;
				}



			}

		}
		void Info::Fantastics() {
			string fantastic[10]{ "Flying","Teleport", "Without", "Wealth",
			"Batman", "Spiderman", "Joker", "Hulk", "Superman", "Wick" };
			for (int i = 0; i < 10; i++) {
				cout << (i + 1) << ". content -> " << fantastic[i] << "\n";

			}
			string Ako;
			int Number = 9;



			cout << "\nEnter books name respectively\n";
			cin >> Ako;
			while (1) {

				if (fantastic[Number] == Ako) {
					int sayac = 0;
					int count = 0;
					cout << "How much do you want?";
					cin >> count;
					cout << " Stock value of this book" << Ako.length() << "\n";
					sayac = Ako.length();

					if (count > sayac) {
						cout << "Can not take more than stock's value try again!!!\n";
						Category();
						break;

					}
					if (count <= sayac) {
						cout << "\nOld stock just expired new is->" << (sayac - count)<<"\n";
						break;

					}
				}
				if (fantastic[Number] != Ako) {
					Number--;

				}


			}

		}
		void Info::View() {
			//system("cls");
			cout << setw(50) <<right<< "**Welcome to Book WareHouse**\n";
			cout << setw(50) <<right<< "**Please Select the Transaction**\n";

		}

		void Info::Category() {


			string Categories[5]{ "Horror","Classics", "Mystery", "Fantastics","Publisher" };
			string Answer1;
			cout << "Which category do you want?\n";
			cin >> Answer1;
			system("cls");
			cout << "Researching again";
			for (int i = 0; i < 20; i++) {
				this_thread::sleep_for(chrono::milliseconds(50));
				cout << ".";

			}

			cout << "\n\n";
			for (int i = 0; i < 5; i++) {

					//system("cls");
					if (Categories[0] == Answer1) {
						Info::Horror();
						break;

					}
					if (Categories[1] == Answer1) {
						Info::Classics();
						break;

					}
					if (Categories[2] == Answer1) {
						Info::Mystery();
						break;

					}
					if (Categories[3] == Answer1) {
						Info::Fantastics();
						break;

					}

				if (Categories[i] != Answer1) {
					cout << "Please choose a different category from here\n";
					int category;
					cout << "Firstly choose a category\n";
					cout << "1)Horror\n";
					cout << "2)Classics\n";
					cout << "3)Mystery \n";
					cout << "4)Fantastics\n";

					cin >> category;
					switch (category) {

					case 1:
						Info::Horror();
						Category();
						break;
					case 2:
						Info::Classics();
						break;
					case 3:
						Info::Mystery();
						break;
					case 4:
						Info::Fantastics();
						break;
					}

				}
				break;
			}
			string answer3;
			cout << "\n";
			for (int i = 0; i < 20; i++) {
				this_thread::sleep_for(chrono::milliseconds(50));
				cout << ".";

			}
			//system("cls");
			cout << "\nDo you want to choose again?Yes or No\n";
			cin >> answer3;
			if (answer3 == "Yes") {
				Category();

			}
			if (answer3 == "No") {
				cout << "Program just finished";

			}

		}
		*/
#endif
