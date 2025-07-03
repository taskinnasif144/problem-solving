#include<bits/stdc++.h>

using namespace std;

class Student {
    public:
    string name;
    int cls;
    char sec;
    int id;

};

int main() {

    int N;
    cin >> N;
    Student arr[N];
    for(int i = 0; i < N; i++) {
        cin >> arr[i].name >> arr[i].cls >> arr[i].sec >> arr[i].id; 
    }

    int left = 0;
    int right = N -1;

    while (left < right) {
        swap(arr[left].sec, arr[right].sec);
        left++;
        right--;
    }

    for(int i = 0; i < N; i++) {
        cout  << arr[i].name << " " << arr[i].cls << " " << arr[i].sec << " " << arr[i].id << endl; 
    }
    return 0;
}