#include <iostream>
using namespace std;

/*
  值传递
  地址传递


*/

void swap1(int *p1, int *p2) {
  cout << p1 << endl;
  int temp = *p1;
  *p1 = *p2;
  *p2 = temp;
  cout << "里面的" << *p1 << endl;
  cout << "里面的" << *p2 << endl;
}


// 用 int *接收数组的首地址
void bubble(int *arr, int len) {
  for (int i = 0; i < len - 1; i++) {
    for (int j = 0; j < len - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}
void print(int *arr, int len) {
  for (int i = 0; i < len; i++) {
    cout << arr[i] << endl;
  }
}

int main() {
  int a = 10;
  int b = 20;
  // swap1(&a, &b);
  // cout << "外面的" << a << endl;
  // cout << "外面的" << b << endl;

  // 冒泡排序
  int arr[10] = {3, 7, 1, 6, 4, 9, 2, 8, 5, 0};
  int len = sizeof(arr) / sizeof(arr[0]); // 数组长度
  bubble(arr, len);                       // 数组首地址，数组长度
  print(arr, len);
}