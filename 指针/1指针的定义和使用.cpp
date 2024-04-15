#include <iostream>
using namespace std;

/*
  数据类型 * 指针变量名

*/
int main() {
  int a = 10;
  // int *p;
  // p = &a;             // 取出a的地址赋给p
  // cout << *p << endl; // 此时*p就能取出地址对应的值
  // cout << &a << endl;
  int *p = &a;
  cout << *p << endl;

  // 解引用
  *p = 20;
  cout << a << endl;
}