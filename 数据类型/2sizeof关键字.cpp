#include <iostream>
using namespace std;

/*
  统计数据类型所占用的内存大小
*/
int main() {
  short num1 = 10;
  int num2 = 10;
  long num3 = 10;
  long long num4 = 10;
  cout << sizeof(num1) << endl;
  cout << sizeof(short) << endl;
  cout << sizeof(num2) << endl;
  cout << sizeof(int) << endl;
  cout << sizeof(num3) << endl;
  cout << sizeof(long) << endl;
  cout << sizeof(num4) << endl;
  cout << sizeof(long long) << endl;
}