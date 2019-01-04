#include <iostream>
#include <ctime>
#include "header.h"
using namespace std;

int main()
{
	srand(time(0));
	cout<<funkcja1()+1<<endl;
	funkcja2();
	for(int i=0;i<funkcja1();i++)
	{
		cout<<i<<endl;
	}
	funkcja3(5);
	funkcja3(1);
	cout<<"koniec\n";
}
