#include<iostream>
using namespace std;

int main(){
    int i = 1;
    int B = 0;
    int C = 0;
    while(i!=0){
    cout << "Enter an integer: ";
    cin >> i;
    if (i%2 != 0){
        C++;
    }
    else {
        B++;
    }
    }

    cout << "#Even numbers = ";
    cout << B-1 << "\n";
    cout << "#Odd numbers = ";
    cout << C;
    return 0;
}