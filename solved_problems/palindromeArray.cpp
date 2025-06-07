#include<bits/stdc++.h>
using namespace std;
int main() {
    int size;
    cin >> size;
    int arr[size];

    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    int l = 0, r = size -1, flag = 1;
    while (l < r) {
        if(arr[l] != arr[r]){
            flag = 0;
            break;
        }
        l++;
        r--;
    }

    if(flag) {
        cout << "YES";
    } else {
        cout << "NO";
    }


    return 0;
}