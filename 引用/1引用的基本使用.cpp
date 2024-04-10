#include <iostream>
using namespace std;

/*
  作用：给变量起别名
  语法：数据类型 &别名 = 原名


  注意事项：
    （1）引用必须要初始化
    （2）引用一旦初始化后，不能更改（就是&b不能再指向c）
*/
int main() {
  int a = 10;
  // int &b; // 错误，必须要初始化
  // 创建一个引用
  int &b = a;
  b = 20;

  int c = 50;
  // int &b = c; // 这是错误的，引用一旦初始化后，不能更改指向
  b = c; // 这是正确的，这是赋值
  cout << a << endl;
  cout << b << endl;
  cout << c << endl;
}