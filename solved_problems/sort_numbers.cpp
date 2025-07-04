#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int>  v(3);
    vector<int> v2(3);
    cin >> v[0] >> v[1] >> v[2];
    v2 = v;
    
    sort(v.begin(), v.end());
    cout << v[0] << endl << v[1] << endl <<  v[2];
    cout << endl << endl;
    cout << v2[0] << endl << v2[1] << endl <<  v2[2];
    return 0;
}