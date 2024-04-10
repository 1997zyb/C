#include <iostream>
using namespace std;

/*
  函数重载满足的条件：
    （1）同一个作用域下
    （2）函数名称相同
    （3）函数参数类型不同或者个数不同，或者顺序不同

    函数的返回值不能作为函数重载的条件
*/
// void func(int a, double b) { cout << "第一个func的调用" << endl; }
// void func(double b, int a) { cout << "第二个func的调用" << endl; }

// void func(int &a) { cout << "第一个func的调用" << endl; }
// void func(const int &a) { cout << "第二个func的调用" << endl; }

// void func2(int a,int b = 10) { cout << "第一个func2的调用" << endl; } // 函授默认参数，不可以
void func2(int a,int b) { cout << "第一个func2的调用" << endl; }
void func2(int a) { cout << "第二个func2的调用" << endl; }
// int &a 和const int &a 类型不同
int main() {
  int a = 100;
  double b = 3.14;
  // func(a, b);
  // func();

  /*
  重载的注意事项
    （1）引用作为重载条件
    （2）函数重载碰到函数默认参数
  */
  // func(a);
  // func(10);
  func2(a);
}