#include <iostream>
using namespace std;

// 用来修饰形参，防止误操作

void showValue(const int &val) {
  // val = 1000; // 使用了const，就不能修改这个值
  cout << "val = " << val << endl;
}
int main() {
  int a = 10;
  // int &ref = 10; //错误，引用必须引一块合法的内存空间，

  // 加上const后，编译器对代码进行了处理，
  // 相当于 int temp = 10; const int &ref = temp;
  const int &ref = 10;
  showValue(a);
  // ref = 20; // 不可修改
  // int *p = &a;
  // cout << *p << endl;
  // *p = 50;
  // cout << a << endl;
}