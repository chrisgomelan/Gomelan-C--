#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout << "Input A: ";
    cin >> a;
    cout << "Input B: ";
    cin >> b;

    c = a;
    a = b;
    b = c;

    cout << "Value of a is " << a << endl;
    cout << "Value of b is " << b << endl;


    return 0;
}