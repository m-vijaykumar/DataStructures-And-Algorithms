#include <iostream>
#include <map>

using namespace std;

int main ()
{
  std::map<char,int> mymap;
  std::map<char,int>::iterator it;

  mymap['a']=50;
  mymap['b']=100;
  mymap['c']=150;
  mymap['d']=200;

  it = mymap.find('b');
  if (it != mymap.end())
    mymap.erase (it);

  // print content:
  cout << "elements in mymap:" << '\n';
cout<<mymap['a'];
//   cout << "a => " << mymap.find('a')->second << '\n';
//   cout << "c => " << mymap.find('c')->second << '\n';
//   cout << "d => " << mymap.find('d')->second << '\n';

  return 0;
}