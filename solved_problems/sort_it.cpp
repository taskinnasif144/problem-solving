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
    int left = l.eng + l.math;
    int right = r.eng + r.math;
    return (left == right) ? l.id < r.id : left > right;
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