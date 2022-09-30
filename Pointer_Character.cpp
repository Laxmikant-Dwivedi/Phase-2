#include<iostream>
using namespace std;

int main() {

    int arr[5] = {1,2,3,4,5};
    char ch[6] = "abcde";


    cout << "1: " << arr << endl;
    //attention here
    cout <<"2: " << ch << endl;
    
    char *c = &ch[0];
    //prints entire string
    cout << c << endl;

    char temp = 'z';
    char *p = &temp;

    cout << p << endl;

    int value = 5;
    int *pot = &value;
    cout << pot << endl;
    cout << *pot << endl;
    cout << &pot << endl;
    cout << &value << endl;


    return 0;
}