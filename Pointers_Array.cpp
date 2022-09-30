#include<iostream>
using namespace std;
int main()
{
/*
int arr[10] = {22,122,41,67};
cout<<" Address of first memory block is :" << arr << endl;
cout<<" Address of first memory block is :" << &arr[0] << endl;


cout << "Value at zeroth index : " << *arr << endl;
cout << "Increment value of zeroth index is : " << *arr+1 << endl;
cout<<"Value at first index : "<< *(arr+1) << endl; 
cout<<"Value at second index : "<< arr[2] << endl; 

int i =3;
cout << i[arr] <<endl;   //same
cout << arr[i] <<endl;  //same
*/

int temp[10]= {1,2};
cout <<"1st "<< sizeof(temp) << endl;
cout <<"2nd " << sizeof(*temp) << endl;
cout <<"3rd " << sizeof(&temp) << endl;

int *ptr = &temp[0];
cout<< sizeof(ptr) << endl;
cout<< sizeof(*ptr) << endl;
cout<< sizeof(&ptr) << endl;


return 0;




}