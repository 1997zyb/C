#include <iostream>
using namespace std;

int *func() {
  // int a = 10;
  // return &a;

  // 利用new关键字，将数据开辟到堆区
  int *p = new int(10); // 返回一个地址
  return p;
}
int main() {
  int *p = func();
  cout << *p << endl;
}