#include <iostream>
using namespace std;


/*
  数据类型存在的意义：给变量分配合适的内存空间

  数据类型：
      short(短整型)         2字节 （-2^15~2^15-1）
      int(整型)             4字节 （-2^31~2^31-1）
      long(长整型)          Windows为4字节，Linux为4字节（32位操作系统），8字节（64位操作系统）（-2^31~2^31-1）
      long long(长长整型)   8字节 （-2^63~2^63-1）
*/
int main() {
  
short num1 = 32768; // 短整型 （-32768~32787）

int num2 = 32768; // 整型 （-2147483648~2147483647）

long num3 = 10; // 长整型

long long num4 = 10; // 长长整型

cout << num1 << endl;
cout << num2 << endl;
}