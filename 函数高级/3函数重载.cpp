#include <iostream>
using namespace std;

/*
  �������������������
    ��1��ͬһ����������
    ��2������������ͬ
    ��3�������������Ͳ�ͬ���߸�����ͬ������˳��ͬ

    �����ķ���ֵ������Ϊ�������ص�����
*/
// void func(int a, double b) { cout << "��һ��func�ĵ���" << endl; }
// void func(double b, int a) { cout << "�ڶ���func�ĵ���" << endl; }

// void func(int &a) { cout << "��һ��func�ĵ���" << endl; }
// void func(const int &a) { cout << "�ڶ���func�ĵ���" << endl; }

// void func2(int a,int b = 10) { cout << "��һ��func2�ĵ���" << endl; } // ����Ĭ�ϲ�����������
void func2(int a,int b) { cout << "��һ��func2�ĵ���" << endl; }
void func2(int a) { cout << "�ڶ���func2�ĵ���" << endl; }
// int &a ��const int &a ���Ͳ�ͬ
int main() {
  int a = 100;
  double b = 3.14;
  // func(a, b);
  // func();

  /*
  ���ص�ע������
    ��1��������Ϊ��������
    ��2������������������Ĭ�ϲ���
  */
  // func(a);
  // func(10);
  func2(a);
}