#include"bits\stdc++.h"
using namespace std;
int main()
{
  set<int> s;
  s.insert(10);
  s.insert(150);
  s.insert(4);

  cout << s.count(10) << endl;  //1
  cout << s.count(150) << endl; //1
  cout << s.count(40) << endl; //0
  cout << s.count(4) << endl; //1
  
  s.erase(10);
  cout << s.count(10) << endl; //0
  s.insert(10);
  cout << s.count(10) << endl; //1





}