#include <iostream>
using namespace std;

int test(int a, int b = 20) {
  return a + b;
  cout << a << endl;
  cout << b << endl;
}

// 函数声明
// int test2(int a, int b);
// 函数实现
int test2(int a = 100, int b = 100) { return a + b; }
// 函数声明和函数实现不能同时有默认值

int main() {
  int a = 10;
  int res = test(a);

  int result = test2(a);
  cout << res << endl;
  cout << result << endl;
}