#include <iostream>
using namespace std;

/*
  ��32λ����ϵͳ�У�ռ��4���ֽڵ��ڴ�ռ�
  ��64λ����ϵͳ�У�ռ��8���ֽڵ��ڴ�ռ�

*/

int main() {
  int a = 10;
  int *p = &a;
  cout << *p << endl;
  // cout << sizeof(p) << endl;
  // cout << sizeof(int *) << endl;
  // cout << sizeof(char *) << endl;
  // cout << sizeof(double *) << endl;

  /*
    ��ָ��   ָ��ָ���ڴ���Ϊ0����һ��ռ�
    ��;����ʼ��ָ��������޷�����
    ���0~255���ڴ�ռ���ϵͳռ�ã���˲��ɷ���
  */
  int *m = NULL;
  *m = 100;
  cout << m << endl; // �������

  /*
    Ұָ��   ָ��ָ��Ƿ����ڴ�ռ�
  */
  int *n = (int *)0X1100;
  cout << *n << endl; // �������
}