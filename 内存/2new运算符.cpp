#include <iostream>
using namespace std;

int *func() {
  // 删除使用delete
  int *p = new int(10); // new返回的是一个该数据类型的指针
  return p;
}
// void test01() {
//   // 开辟数组
//   int *arr = new int[10];
//   for (int i = 0; i < 10; i++) {
//     arr[i] = i + 1;
//   }
//   for (int i = 0; i < 10; i++) {
//     cout << arr[i] << endl;
//   }
//   // 释放数组
//   delete[] arr;
// }
int main() {
  int *p = func();
  cout << *p << endl;
  delete p;
  // cout << *p << endl;
  // test01();
}