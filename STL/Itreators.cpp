#include<bits\stdc++.h>
using namespace std;
int main()
{
    vector<int> v={5,4,2,7};
    auto it = v.begin();  // auto -> Keyword use to deduce datatype automatically
    cout << *it <<" " << endl; //5
    it++;
    cout << *it <<" "<< endl; //4
    it--;
    cout << *it << " " << endl; //5
    cout << *(it+3); //7
 }
