#include <iostream>
using namespace std;

int main() {
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  // int *p = arr;
  // cout << arr << endl; // arr���������е��׵�ַ
  // cout << *p << endl;  // ������
  // p++;
  // cout << *p << endl; // ������

  int *p = arr;
  int length = sizeof(arr) / sizeof(arr[0]);
  for (int i = 0; i < length; i++) {
    cout << *p << endl;
    p++;
  }
}