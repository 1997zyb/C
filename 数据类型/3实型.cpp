#include <iostream>
using namespace std;

/*
  浮点型
  单精度float
  双精度double
  区别在于表示的有效数字范围不同
  float      4字节      7位有效数字
  double     8字节      15~16位有效数字


  科学计数法

  默认情况下，输出一位小数会显示6位有效数字

  float占用4个字节
  double占用8个字节
*/
int main() {
  float num1 = 3.14f;
  cout << num1 << endl;
  double num2 = 3.14;
  cout << num2 << endl;
  cout << sizeof(float) << endl;
  cout << sizeof(double) << endl;

  float num3 = 3e2; // 表示3乘10的2次方
  cout << num3 << endl;
  float num4 = 3e-2; // 表示3乘10的-2次方
  cout << num4 << endl;
}