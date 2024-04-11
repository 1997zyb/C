#include <iostream>
using namespace std;

int add(int a, int b) { return a + b; }

void swap(int num1, int num2) {
  int temp = num1;
  num1 = num2;
  num2 = temp;
  cout << "交换后num1:" << num1 << endl;
  cout << "交换后num2:" << num2 << endl;
}
int main() {
  cout << add(1, 2) << endl;

  /*
  函数值传递：
    所谓值传递，就是函数调用时实参将值传递给形参
    值传递时，形参的改变，并不会影响实参
  */
  // 交换位置
  int num1 = 10;
  int num2 = 20;
  swap(num1, num2);
  cout << "交换前num1:" << num1 << endl;
  cout << "交换前num2:" << num2 << endl;
}