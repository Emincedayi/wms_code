#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include <math.h>
#include <vector>
#include"enter.h"
#include <cstdlib>
#include"ýnfo.h" 

/*#include"menu.h"
#include"prep.h"*/
#include<iostream>
using namespace std;
int main()
{
	Admin mx;
	mx.start();
	Info my;
	my.View();
	int a;
	srand(time(0));
	a = rand() % 5 + 1;
	cout << a << "\n";
}
