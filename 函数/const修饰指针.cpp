#include <iostream>
using namespace std;

// const����ָ�룺����ָ��
// const���γ�����ָ�볣��
// const������ָ�룬�����γ���

int main() {
  // int a = 10;
  // int b = 20;

  // ����ָ�룺ָ���ָ������޸ģ�ָ��ָ���ֵ�����޸�
  // ����˵p��������ָ��b������pȴ�����޸�b��ֵ��
  // const int *p = &a;
  // p = &b; // �޸���ָ��
  // *p = 40; //�޸���ֵ���Ǵ����
  // cout << *p << endl;
  // cout << &a << endl;
  // cout << p << endl;

  // ָ�볣����ָ���ָ�򲻿��޸ģ�����ָ��ָ���ֵ�����޸�
  // int *const p = &a;
  // p= &b; // �޸���ָ���Ǵ����
  // *p = 40; // �޸���ֵ
  // cout << *p << endl;
  // cout << &a << endl;

  // ������ָ�룬�����γ���   ʲô�������޸�
  // const int *const p = &a;

  // ����ָ���������Ԫ��
  // int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  // int *p = arr; // ָ�������ָ��
  // cout << arr[0] << endl;
  // cout << *p << endl;
  // p++; // ��ָ�����ƫ��4���ֽ�
  // cout << *p << endl;
  // for (int i = 0; i < 10; i++) {
  //   /* code */
  //   cout << *p << endl;
  //   p++;
  // }
  int a = 10;
  int b = 20;
  // ����ָ��
  // const int *p = &a; // ָ���ָ������޸�
  // // *p = 100; //����ָ��ָ���ֵ�����޸ģ�
  //  p = &b;
  // cout << *p << endl;

  // ָ�볣��
  // int *const p = &a;
  // *p = 100; // ��ֵ�����޸ģ�
  // // p = &b; // ����ָ�����޸ģ�
  // cout << *p << endl;

  // ������ָ�룬�����γ����������ܸģ�
  // const int *const p = &a;

  // ָ�������
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
  int *p = arr;
  // cout << arr[0] << endl;
  // p++;
  // cout << *p << endl;
  for (int i = 0; i < 10; i++) {
    cout << *p << endl;
    p++;
  }
}