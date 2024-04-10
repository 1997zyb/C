#include <iostream>
#include <numeric>
#include <stddef.h>
#include <vector>
using namespace std;

// 定义一个函数
int add(int num1, int num2) {
  int sum = num1 + num2;
  return sum;
}
// 如果函数不需要返回值，声明时写一个void
void swap(int num1, int num2) {
  cout << "交换前：" << num1 << endl;
  cout << "交换前：" << num2 << endl;
  int temp = num1;
  num1 = num2;
  num2 = temp;
  cout << "交换后：" << num1 << endl;
  cout << "交换后：" << num2 << endl;
  return;
}

int main() {
  // 返回值类型
  // 函数名
  // 参数列表
  // 函数体语句
  // return语句
  int a = 10;
  int b = 20;

  swap(a, b);
  cout << "a=" << a << endl;
  cout << "b=" << b << endl;
  // int res = add(a, b);
  // cout << res << endl;


  // vector<int> arr = {1, 2, 3};
  // cout << arr.size() << endl;


  // 值传递，如果形参发生变化，不会影响实参
  system("pause");
  return 0;
}