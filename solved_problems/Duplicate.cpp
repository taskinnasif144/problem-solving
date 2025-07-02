#include<bits/stdc++.h>
using namespace std;

int main() {
    int size;
    cin >> size;
    long long int arr[size];
    
    for(int i = 0; i < size; i++) {
       cin >> arr[i];
    }

    long long int prefixSum[size];
    prefixSum[0] = arr[0];
    for(int i = 1; i < size; i++) {
        prefixSum[i] = prefixSum[i-1] + arr[i];
    }   

    for(int i = size -1; i>= 0; i--) {
        cout << prefixSum[i] << " ";
    }

    return 0;
}