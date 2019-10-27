#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main()
{
	float a, b, c;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "c=";
	cin >> c;
	if (((a < (b + c)) && (b < (a + c)) && (c < (a + b))) && ((a > 0) && (b > 0) && (c > 0)))
	{
		cout << "TRUE ";
	}
	else
	{
		cout << "FALSE";
	}
}