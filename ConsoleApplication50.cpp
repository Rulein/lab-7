#include <iostream>
#include <string>
using namespace std;
int main()
{
	int A, B;
	cout << "A=";
	cin >> A;
	cout << "B=";
	cin >> B;
	if (A > 2)
	{
		cout << "A - TRUE";
	}
	else
	{
		cout << "A - FALSE";
	}
	if (B <= 3)
	{
		cout << "\nB - TRUE";
	}
	else
	{
		cout << "\nB - FALSE";
	}
}