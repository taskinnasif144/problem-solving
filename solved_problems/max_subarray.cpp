#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        vector<int> v;
        cin >> n;
        while(n--){
            int val;
            cin >> val;
            v.push_back(val);
        }

        for(int st = 0; st < v.size(); st++) {
            int mx = v[st];
            for(int end = st; end < v.size(); end++) {
                mx = max(mx, v[end]);
                cout << mx << " ";
            }
        }
        cout << endl;
        
    }
    return 0;
}