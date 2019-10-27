#include <iostream>
#include <string>
using namespace std;
int main()
{
	int A;
	cout << "A=";
	cin >> A;
	if (((A / 100 > (A / 10 % 10)) && ((A / 10 % 10) > A % 10)) || ((A / 100 < (A / 10 % 10)) && ((A / 10 % 10) < A % 10)))
	{
		cout << "A - TRUE ";
	}
	else
	{
		cout << "A - FALSE";
	}
}
