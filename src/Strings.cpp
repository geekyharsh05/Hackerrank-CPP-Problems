/*
@ author geekyharsh05

*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string a,b;
    char A,B;
    cin>>a;
    cin>>b;
    cout << a.length() << " " << b.length() << "\n";
    cout << a << b << "\n";
    A = a[0];
    B = b[0];
    a[0] = B;
    b[0] = A;
    cout << a << " " << b << "\n";
  
    return 0;
}