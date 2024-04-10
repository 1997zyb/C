/*
  作用：用于表示小数
  浮点型变量分为两种：
    （1）单精度float
    （2）双精度double

    float：4字节      7位有效数字
    double：8字节     15~16位有效数字
    默认情况下，输出一个小数，会显示六位有效数字
*/
#include <iostream>
using namespace std;

int main()
{
  float f1 = 3.1415926f;
  double dl = 3.1415926;
  // cout << "f1是：" << f1 << endl;
  // cout << "dl是：" << dl << endl;
  // cout << "float所占内存空间：" << sizeof(float) << endl;
  // cout << "double所占内存空间：" << sizeof(double) << endl;

  // 科学计数法
  float f2 = 3e2f; // 3 * 10^2
  float f3 = 3e-2f; // 3 * (0.1)^2
   cout << "f2是：" << f2 << endl;
   cout << "f3是：" << f3 << endl;
}