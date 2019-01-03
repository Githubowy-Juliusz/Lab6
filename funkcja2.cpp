#include <iostream>
using namespace std;

int funkcja2()
{
	cout<<"funkcja2";
	int a = rand()%10;
	int b = rand()%10;
	int c = rand()%4;
	int d = rand()%2;
	return a+b+c+d;
}
