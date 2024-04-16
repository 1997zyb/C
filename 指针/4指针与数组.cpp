#include <iostream>
using namespace std;

int main() {
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  // int *p = arr;
  // cout << arr << endl; // arr就是数组中的首地址
  // cout << *p << endl;  // 解引用
  // p++;
  // cout << *p << endl; // 解引用

  int *p = arr;
  int length = sizeof(arr) / sizeof(arr[0]);
  for (int i = 0; i < length; i++) {
    cout << *p << endl;
    p++;
  }
}