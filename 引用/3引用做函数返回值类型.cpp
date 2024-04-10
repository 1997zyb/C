#include <iostream>
using namespace std;

/*
  不要返回局部变量的引用
  函数的调用可以作为左值

*/

// int &test1() {
//   // int a = 10;
//   static int a = 10; // 延长变量a的声明周期，静态变量在全局区
//   return a;
// }
int main() {
  // int &ref = test1();
  // cout << "第一次打印" << ref << endl;

  // test1() = 1000; // 函数调用作为了左值
  // cout << "第二次打印" << ref << endl;


  // 引用的本质（指针常量：指针指向不能修改，所以引用的指向也就不能修改）
}