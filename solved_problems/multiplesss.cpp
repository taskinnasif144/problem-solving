#include<bits/stdc++.h>
using namespace std;

int main() {
    int num1, num2;
    cin >> num1 >> num2;
    bool isMultiple = false;
    if(num1 % num2 == 0)  {
        isMultiple = true;
    } 
    else if (num2 % num1 == 0) {
        isMultiple = true;
    }

    if(isMultiple) {
        cout << "Multiples";
    } else {
        cout << "No Multiples";
    }
    

    return 0;
}