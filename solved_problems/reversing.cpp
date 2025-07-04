#include<bits/stdc++.h>
using namespace std;
int main() {
    int size;
    cin >> size;
    vector<int> v(size);
    for(int i  = 0; i < size; i++) {
        cin >> v[i];
    }
    int l =0; 
    int r = size - 1;

    while (l < r) {
        swap(v[l], v[r]);
        l++;
        r--;
    }
    
    for(int i = 0; i < size; i++) {
        cout << v[i] << " ";
    }
    return 0;
}
