#include <iostream>
using namespace std;

/*
  const����ָ�룬�г���ָ��
    ָ���ָ������޸ģ�ָ��ָ���ֵ�����޸ģ�

  const���γ�������ָ�볣��
    ָ��ָ���ֵ�����޸ģ�ָ��ָ�����޸ģ�

  const������ָ�룬�����γ���
    �������޸�

*/
int main() {
  int a = 10;
  int b = 10;

  // const int *p = &a;
  // p = &b; // ָ��ָ����Ը�

  int *const p = &a;
  *p = 30;
  cout << "a��ֵ��"<<a << endl;
}