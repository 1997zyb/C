#include <iostream>
using namespace std;

int *func() {
  // ɾ��ʹ��delete
  int *p = new int(10); // new���ص���һ�����������͵�ָ��
  return p;
}
// void test01() {
//   // ��������
//   int *arr = new int[10];
//   for (int i = 0; i < 10; i++) {
//     arr[i] = i + 1;
//   }
//   for (int i = 0; i < 10; i++) {
//     cout << arr[i] << endl;
//   }
//   // �ͷ�����
//   delete[] arr;
// }
int main() {
  int *p = func();
  cout << *p << endl;
  delete p;
  // cout << *p << endl;
  // test01();
}