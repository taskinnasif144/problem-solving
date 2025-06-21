#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];
    
    cout << min(arr[0], min(arr[1], arr[2])) << " " << max(arr[0], max(arr[1], arr[2]));

    return 0;
}