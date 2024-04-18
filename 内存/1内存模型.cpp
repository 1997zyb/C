#include <iostream>
using namespace std;

/*
内存四区：
    代码区：存放函数体的二进制代码，由操作系统进行管理的。（共享，只读）
    全局区：
        （1）全局变量和静态变量存放在此；
        （2）全局区还包含了常量区，字符串常量和其他常量也存放在此
        （3）该区域的数据由程序结束后释放

    栈区：由编译器自动分配释放，存放函数的参数值，局部变量等；
    堆区：由程序员分配和释放，若程序员不释放，程序结束后由操作系统回收
    （堆区和栈区是在程序运行时动态创建的）

*/
int g_a = 20;
int g_b = 20;
int g_c = 20;

const int c_g_c = 20;

// int *func() {
//   // int a = 10;
//   // return &a; // 返回局部变量的地址

//   // 利用new关键字，可以将数据开辟到堆区
//   int *p = new int(10);
//   return p;
// }
int main() {
  int a = 10; // 局部变量
  int b = 10; // 局部变量
  int c = 10; // 局部变量
  cout << "局部变量a的地址是" << &a << endl;
  cout << "局部变量b的地址是" << &b << endl;
  cout << "局部变量c的地址是" << &c << endl;

  cout << "全局变量g_a的地址是" << &g_a << endl;
  cout << "全局变量g_b的地址是" << &g_b << endl;
  cout << "全局变量g_c的地址是" << &g_c << endl;

  // 静态变量
  static int s_a = 10;
  static int s_b = 20;
  static int s_c = 20;
  cout << "静态变量s_a的地址是" << &s_a << endl;
  cout << "静态变量s_b的地址是" << &s_b << endl;
  cout << "静态变量s_c的地址是" << &s_c << endl;

  /*
    常量分为：字符串常量和const修饰的变量
    const修饰的变量分为：const修饰的全局变量   const修饰的局部变量
  */
  // 字符串常量
  cout << "字符串常量" << &"hello world" << endl;

  // const修饰的局部变量
  const int c_a = 10;

  cout << "const修饰的局部变量c_a的地址是" << &c_a << endl;

  cout << "全局常量c_g_c的地址是" << &c_g_c << endl;

  // 栈区
  // 由编译器自动分配释放，存放函数的参数值，局部变量等；
  // 不要返回局部变量的地址，栈区开辟的数据由编译器自动释放
  // int *p = func();
  // cout << "我是" << *p << endl;

  // 堆区
  // int *p = func();
  // cout << "我是" << *p << endl;
}