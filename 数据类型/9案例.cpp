#include <iostream>
using namespace std;

int main() {
  int pigs[5] = {100, 250, 300, 450, 100};
  int maxPig = 0;
  for (int i = 0; i < sizeof(pigs) / sizeof(pigs[0]); i++) {
    if (maxPig < pigs[i]) {
      maxPig = pigs[i];
    }
  }
  cout << "���ص��ǣ�" << maxPig << endl;



  // ����Ԫ������
  int numArr[] = {1, 2, 3, 4, 5, 6, 7, 8};
  int start = 0;                                    // ��һ��Ԫ���±�
  int end = sizeof(numArr) / sizeof(numArr[0]) - 1; // ĩβԪ���±�
  for (int i = 0; i < sizeof(numArr) / sizeof(numArr[0]); i++) {
    if (start < end) {
      int temp = numArr[start];
      numArr[start] = numArr[end];
      numArr[end] = temp;
      start++;
      end--;
    }
  }
  for (int i = 0; i < sizeof(numArr) / sizeof(numArr[0]); i++) {
    cout << numArr[i] << endl;
  }
}