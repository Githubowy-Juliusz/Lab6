#include <iostream>
#include <ctime>
#include "header.h"
using namespace std;

int main()
{
	srand(time(0));
	cout<<funkcja1()<<endl;
	funkcja2();
	funkcja3(5);
	cout<<funkcja1()<<endl;
	cout<<"koniec\n";
}
