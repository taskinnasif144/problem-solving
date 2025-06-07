#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    int id;
    string name;
    char section;
    int marks;
};

int main()
{
    int test;
    cin >> test;

    for (int t = 0; t < test; t++)
    {
        Student stdA;
        cin >> stdA.id >> stdA.name >> stdA.section >> stdA.marks;

        Student stdB;
        cin >> stdB.id >> stdB.name >> stdB.section >> stdB.marks;

        Student stdC;
        cin >> stdC.id >> stdC.name >> stdC.section >> stdC.marks;

        if (stdA.marks >= stdB.marks && stdA.marks >= stdC.marks)
        {
            if (stdA.marks == stdB.marks)
            {
                if (stdA.id < stdB.id)
                {
                    cout << stdA.id << " " << stdA.name << " " << stdA.section << " " << stdA.marks << endl;
                }
                else
                {
                    cout << stdB.id << " " << stdB.name << " " << stdB.section << " " << stdB.marks << endl;
                }
            }
            else if (stdA.marks == stdC.marks)
            {
                if (stdA.id < stdC.id)
                {
                    cout << stdA.id << " " << stdA.name << " " << stdA.section << " " << stdA.marks << endl;
                }
                else
                {
                    cout << stdC.id << " " << stdC.name << " " << stdC.section << " " << stdC.marks << endl;
                }
            }
            else
            {
                cout << stdA.id << " " << stdA.name << " " << stdA.section << " " << stdA.marks << endl;
            }
        }
        else if (stdB.marks >= stdA.marks && stdB.marks >= stdC.marks)
        {
            if (stdB.marks == stdA.marks)
            {
                if (stdB.id < stdA.id)
                {
                    cout << stdB.id << " " << stdB.name << " " << stdB.section << " " << stdB.marks << endl;
                }
                else
                {
                    cout << stdA.id << " " << stdA.name << " " << stdA.section << " " << stdA.marks << endl;
                }
            }
            else if (stdB.marks == stdC.marks)
            {
                if (stdB.id < stdC.id)
                {
                    cout << stdB.id << " " << stdB.name << " " << stdB.section << " " << stdB.marks << endl;
                }
                else
                {
                    cout << stdC.id << " " << stdC.name << " " << stdC.section << " " << stdC.marks << endl;
                }
            }
            else
            {
                cout << stdB.id << " " << stdB.name << " " << stdB.section << " " << stdB.marks << endl;
            }
        }
        else if (stdC.marks >= stdB.marks && stdC.marks >= stdA.marks)
        {
            if (stdC.marks == stdB.marks)
            {
                if (stdB.id < stdC.id)
                {
                    cout << stdB.id << " " << stdB.name << " " << stdB.section << " " << stdB.marks << endl;
                }
                else
                {
                    cout << stdC.id << " " << stdC.name << " " << stdC.section << " " << stdC.marks << endl;
                }
            }
            else if (stdC.marks == stdA.marks)
            {
                if (stdA.id < stdC.id)
                {
                    cout << stdA.id << " " << stdA.name << " " << stdA.section << " " << stdA.marks << endl;
                }
                else
                {
                    cout << stdC.id << " " << stdC.name << " " << stdC.section << " " << stdC.marks << endl;
                }
            }
            else
            {
                cout << stdC.id << " " << stdC.name << " " << stdC.section << " " << stdC.marks << endl;
            }
        }
    }

    return 0;
}