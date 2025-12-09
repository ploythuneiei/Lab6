#include<iostream>
using namespace std;

int main(){

    int x;
    int even = 0;
    int odd = 0;

    cout << "Enter an integer: ";
    cin >> x;
    while ( x != 0){
        if (x%2 == 0){
            even ++;
        } else {
            odd ++;
        }
        cout << "Enter an integer: ";
        cin >> x;
    }

    cout << "#Even numbers = " << even << endl;
    cout << "#Odd numbers = " << odd << endl;
    return 0;
}
