#include <iostream>
using namespace std;

int add(int a, int b) { return a + b; }

void swap(int num1, int num2) {
  int temp = num1;
  num1 = num2;
  num2 = temp;
  cout << "������num1:" << num1 << endl;
  cout << "������num2:" << num2 << endl;
}
int main() {
  cout << add(1, 2) << endl;

  /*
  ����ֵ���ݣ�
    ��νֵ���ݣ����Ǻ�������ʱʵ�ν�ֵ���ݸ��β�
    ֵ����ʱ���βεĸı䣬������Ӱ��ʵ��
  */
  // ����λ��
  int num1 = 10;
  int num2 = 20;
  swap(num1, num2);
  cout << "����ǰnum1:" << num1 << endl;
  cout << "����ǰnum2:" << num2 << endl;
}