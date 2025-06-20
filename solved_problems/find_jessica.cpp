#include<bits/stdc++.h>

using namespace std;

int main() {
    string names;
    getline(cin, names);

    stringstream ss(names);
    string word;
    bool isJessica = false;

    while (ss >> word) {
       if(word == "Jessica") {
        isJessica = true;
       }
    }

    if(isJessica) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    
    return 0;
}