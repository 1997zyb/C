#include <iostream>
using namespace std;

/*
  在32位操作系统中，占用4个字节的内存空间
  在64位操作系统中，占用8个字节的内存空间

*/

int main() {
  int a = 10;
  int *p = &a;
  cout << *p << endl;
  cout << sizeof(p) << endl;
  cout << sizeof(int *) << endl;
  cout << sizeof(char *) << endl;
  cout << sizeof(double *) << endl;
}