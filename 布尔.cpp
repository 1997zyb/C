#include <iostream>
using namespace std;

/*
  真（true）
  假（false）
  只占用一个字节
*/

int main()
{
  bool flag = true;
  cout << flag << endl;

  flag = false;
  cout << flag << endl;
  // 所占内存空间
  cout << sizeof(bool) << endl;
}