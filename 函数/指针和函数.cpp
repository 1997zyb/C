#include <iostream>
using namespace std;

// 使用指针接收地址
// void swap(int *p1, int *p2) {
//   int temp = *p1;
//   *p1 = *p2;
//   *p2 = temp;
// }
void bubbleSort(int *arr, int len) {
  for (int i = 0; i < len - 1; i++) {
    for (int j = 0; j < len - 1 - i; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}
void printArr(int *arr, int len) {
  for (int i = 0; i < len; i++) {
    cout << arr[i] << endl;
  }
}
int main() {
  // int a = 10;
  // int b = 20;
  // swap(&a, &b); // &取址运算符
  // cout << a << endl;
  // cout << b << endl;

  // 利用冒泡排序，实现数组的升序排列
  int arr[10] = {7, 4, 0, 1, 8, 5, 6, 3, 9, 2};
  cout <<sizeof(arr)<<endl;
  // int len = sizeof(arr) / sizeof(arr[0]);
  // bubbleSort(arr, len);
  // printArr(arr, len);

  // int a = 10;
  // int *p2 = &a;
  // cout << *p2 << endl;
  // int arr2[] = {1, 2};
  // int *p3 = arr2;
  // cout << *p3 << endl;
}