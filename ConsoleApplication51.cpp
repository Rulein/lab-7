#include <iostream>
#include <string>
using namespace std;
int main()
{
	int A, B, C;
	cout << "A=";
	cin >> A;
	cout << "B=";
	cin >> B;
	cout << "C=";
	cin >> C;
	if (B > A && B < C)
	{
		cout << "A<B<C - TRUE";
	}
	else
	{
		cout << "\nA<B<C - FALSE";
	}
}