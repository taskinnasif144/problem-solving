#include<iostream>
using namespace std;

int main() {
    int size;
    cin >> size;

    int arr[size];

    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < size-1; i++) {
        while(arr[i+1] % arr[i] == 0){
            arr[i]++;
        }
    }

      for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }


    

    return 0;
}