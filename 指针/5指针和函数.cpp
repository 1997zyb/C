#include <iostream>
using namespace std;

/*
  ֵ����
  ��ַ����


*/

void swap1(int *p1, int *p2) {
  cout << p1 << endl;
  int temp = *p1;
  *p1 = *p2;
  *p2 = temp;
  cout << "�����" << *p1 << endl;
  cout << "�����" << *p2 << endl;
}


// �� int *����������׵�ַ
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
  // cout << "�����" << a << endl;
  // cout << "�����" << b << endl;

  // ð������
  int arr[10] = {3, 7, 1, 6, 4, 9, 2, 8, 5, 0};
  int len = sizeof(arr) / sizeof(arr[0]); // ���鳤��
  bubble(arr, len);                       // �����׵�ַ�����鳤��
  print(arr, len);
}