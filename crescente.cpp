#include<bits/stdc++.h>
using namespace std;

int main () {

    int num1, num2;
while (num1 != num2) {
    cout << "Digite dois numeros: " << endl;
    cin >> num1;
    cin >> num2;


    if (num1<num2) {
        cout << "CRESCENTE!" << endl;
    }
    else {
        cout << "DECRESCENTE!" << endl;
    }
}

    return 0;
}