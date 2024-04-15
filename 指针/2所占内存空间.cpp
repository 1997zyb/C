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
  // cout << sizeof(p) << endl;
  // cout << sizeof(int *) << endl;
  // cout << sizeof(char *) << endl;
  // cout << sizeof(double *) << endl;

  /*
    空指针   指针指向内存编号为0的那一块空间
    用途：初始化指针变量，无法访问
    编号0~255的内存空间是系统占用，因此不可访问
  */
  int *m = NULL;
  *m = 100;
  cout << m << endl; // 输出不了

  /*
    野指针   指针指向非法的内存空间
  */
  int *n = (int *)0X1100;
  cout << *n << endl; // 输出不了
}