#include <iostream>
#include <numeric>
#include <stddef.h>
#include <vector>
using namespace std;

// ����һ������
int add(int num1, int num2) {
  int sum = num1 + num2;
  return sum;
}
// �����������Ҫ����ֵ������ʱдһ��void
void swap(int num1, int num2) {
  cout << "����ǰ��" << num1 << endl;
  cout << "����ǰ��" << num2 << endl;
  int temp = num1;
  num1 = num2;
  num2 = temp;
  cout << "������" << num1 << endl;
  cout << "������" << num2 << endl;
  return;
}

int main() {
  // ����ֵ����
  // ������
  // �����б�
  // ���������
  // return���
  int a = 10;
  int b = 20;

  swap(a, b);
  cout << "a=" << a << endl;
  cout << "b=" << b << endl;
  // int res = add(a, b);
  // cout << res << endl;


  // vector<int> arr = {1, 2, 3};
  // cout << arr.size() << endl;


  // ֵ���ݣ�����βη����仯������Ӱ��ʵ��
  system("pause");
  return 0;
}