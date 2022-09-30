#include<iostream>
using namespace std;
int main()
{
//  int num = 5;
//  cout<< num << endl ;

// // address of num -- &
// cout<< "The address of num is " << &num << endl;

// int *ptr = &num;
// cout<<"Value is: " << *ptr << endl;
// cout<<"THe address is: "<< ptr << endl;

// double d = 4.3;
// double *p = &d;
// cout<<"Value is : " << *p << endl;
// cout<<"The address is : " << p  << endl; 

// cout<<"The size of integer is : "<< sizeof(num)<< endl;
// cout<<"The size of pointer is : "<< sizeof(p)<< endl;
// cout<<"The size of double  is : "<< sizeof(d)<< endl;

// SEcond part 
/*
int i =8;
int *p = &i;
cout<<"The value is :"<< *p << endl;
cout<<"Address is :" << p << endl;

// OR
 int *q =0;
 q = &i;
 cout<<"The value is :"<< *q << endl;
cout<<"Address is :" << q << endl;
*/
// part 3

int num = 5;
int *p = &num;
cout<<"Before " << *p << endl;
(*p)++ ;
cout <<"After " << *p << endl;

 // Copying a pointer 

 int *q  =p ; 
 cout<< q << "-" << p << endl;
 cout << *q << "-" << *p << endl;


// important concept
int j =7;
int *t = &j;
*t = *t +1;
cout << " Incremented value of *t is: "<< *t  << endl ;
cout << "Address of t before is : " << t << endl;
t = t+1;
cout << "Address of t after is : " << t << endl;


  int arr[10];

//ERROR
   //arr = arr+1;

    int *ptr = &arr[0];
    cout << ptr << endl;
    ptr = ptr + 1;
    cout << ptr << endl;

return 0;

}