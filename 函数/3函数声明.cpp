#include <iostream>
using namespace std;

// 函数声明 没有具体的代码的实现
int max(int a, int b);

// 声明可以写多次
int max(int a, int b);
int max(int a, int b);

int main() {
  int a = 10;
  int b = 20;
  cout << max(a, b) << endl;
}

// 定义只能有一次
int max(int a, int b) {
  cout << a << endl;
  cout << b << endl;
  return a > b ? a : b;
}
