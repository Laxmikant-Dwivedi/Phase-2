#include<iostream>
using namespace std;
int linearsearch(int arr[],int size,int k)
{
    if(size == 0)
    {
        return false;
    }
    if (arr[0] == k)
    {
        return true;
    }
    int remPart = linearsearch(arr+1,size-1,k);
    return  remPart;
}
int main ()
{
int arr[5] = {3,6,7,9,5};
int size = 5;
int k =8;
bool ans = linearsearch(arr,size,k);
if(ans){
cout << "Present" << endl;
}
else {
    cout << "Absent" << endl;
}
return 0;
}