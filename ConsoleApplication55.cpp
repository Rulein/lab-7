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
	if (((a == sqrt(c * c + b * b)) || (b == sqrt(c * c + a * a)) || (c == sqrt(a * a + b * b))) && ((a > 0) && (b > 0) && (c > 0)))
	{
		cout << "TRUE ";
	}
	else
	{
		cout << "FALSE";
	}
}