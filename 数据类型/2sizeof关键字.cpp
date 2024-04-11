#include <iostream>
using namespace std;

/*
  统计数据类型所占用的内存大小
*/
int main() {
  short num1 = 10; // 短整型
  int num2 = 10; // 整型
  long num3 = 10; // 长整型
  long long num4 = 10; // 长长整型

  cout << sizeof(num1) << endl;
  cout << sizeof(short) << endl; // 2

  cout << sizeof(num2) << endl;
  cout << sizeof(int) << endl; // 4

  cout << sizeof(num3) << endl;
  cout << sizeof(long) << endl; // 4

  cout << sizeof(num4) << endl;
  cout << sizeof(long long) << endl; // 8
}