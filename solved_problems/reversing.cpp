#include<bits/stdc++.h>

using namespace std;

int main() {

    int size;
    cin >> size;
    int arr[size];

    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    for(int i = size -1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    
    return 0;
}