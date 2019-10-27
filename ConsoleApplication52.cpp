#include <iostream>
#include <string>
using namespace std;
int main()
{
 int A;
 cout << "A=";
 cin >> A;

 if ( A/10 >= 1 && A/10 < 10 && A%2==0 )
 {
 cout << "A - TRUE ";
 }
 else
 {
 cout << "A - FALSE";
 }
}
