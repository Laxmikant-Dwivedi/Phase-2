#include<iostream>
using namespace std;
int getsum(int arr[],int size)
{
    if(size == 0)
    {
      return 0;
    }
    if(size == 1)
     {  
        return arr[0];
     } 
       int remainingPart = getsum(arr+1,size-1);
       int ans = arr[0] + remainingPart;
       return ans;
}
int main ()
{
    int arr[5] = {1,2,3,5,7};
    int size = 5;
    int ans = getsum(arr,size);
    cout << "Sum is : " << ans;
    return 0;
}