#include<iostream>
using namespace std;

void print(int arr[], int n  , int start = 0) {

    for(int i = start; i<n; i++) {
        cout << arr[i] << endl;
    }

}

int main() {

    int arr[5] = {1,4,7,8,9};
    int size = 5;

    print(arr, size);  // i= 0 se start
    cout << endl;
    print(arr, size, 2);  // i = 2 se start


    return 0;
}