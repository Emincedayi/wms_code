#ifndef ENTER_H
#define ENTER_H  
#include<chrono>
#include<thread>
//#include"ýnfo.h" 

#include<iostream>
using namespace std;




class Admin {
public:
	explicit Admin();

	void start();

	~Admin();

	string name;
	int password;

};



#endif