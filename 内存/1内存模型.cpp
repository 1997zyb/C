#include <iostream>
using namespace std;

/*
  栈区：由编译器自动分配释放，存放函数的参数值，局部变量等；
  堆区：由程序员分配和释放，若程序员不释放，程序结束后由操作系统回收
  全局区：
      （1）全局变量和静态变量存放在此；
      （2）全局区还包含了常量区，字符串常量和其他常量也存放在此
      （3）该区域的数据由程序结束后释放
*/
// int g_a = 20;
// int g_b = 20;

int *func() {
  // int a = 10;
  // return &a; // 返回局部变量的地址

  // 利用new关键字，可以将数据开辟到堆区
  int *p = new int(10);
  return p;
}
int main() {
  //   int a = 10;
  //   int b = 10;
  //   cout << "局部变量a的地址是" << &a << endl;
  //   cout << "局部变量b的地址是" << &b << endl;

  //   cout << "全局变量g_a的地址是" << &g_a << endl;
  //   cout << "全局变量g_b的地址是" << &g_b << endl;

  //   // 静态变量
  //   static int s_a = 10;
  //   static int s_b = 20;
  //   cout << "静态变量s_a的地址是" << &s_a << endl;
  //   cout << "静态变量s_b的地址是" << &s_b << endl;

  // 栈区
  // 由编译器自动分配释放，存放函数的参数值，局部变量等；
  // 不要返回局部变量的地址，栈区开辟的数据由编译器自动释放
  // int *p = func();
  // cout << "我是" << *p << endl;

  // 堆区
  int *p = func();
  cout << "我是" << *p << endl;
}