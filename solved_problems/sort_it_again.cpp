#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    string name;
    int cls;
    char sec;
    int id;
    int math;
    int eng;
};

bool customComparator(Student l, Student r){
    return l.eng == r.eng? l.math == r.math?  l.id < r.id : l.math > r.math: l.eng > r.eng; 
}

int main()
{
    int N;
    cin >> N;
    Student arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i].name >> arr[i].cls >> arr[i].sec >> arr[i].id >> arr[i].math >> arr[i].eng;
    }

    sort(arr, arr+N, customComparator);

    for (int i = 0; i < N; i++)
    {
        cout << arr[i].name << " " << arr[i].cls << " " << arr[i].sec << " " << arr[i].id << " " << arr[i].math << " " << arr[i].eng  << endl;
    }

    return 0;
}