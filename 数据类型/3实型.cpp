#include <iostream>
using namespace std;

/*
  ������
  ������float
  ˫����double
  �������ڱ�ʾ����Ч���ַ�Χ��ͬ
  float      4�ֽ�      7λ��Ч����
  double     8�ֽ�      15~16λ��Ч����


  ��ѧ������

  Ĭ������£����һλС������ʾ6λ��Ч����

  floatռ��4���ֽ�
  doubleռ��8���ֽ�
*/
int main() {
  float num1 = 3.14f;
  cout << num1 << endl;
  double num2 = 3.14;
  cout << num2 << endl;
  cout << sizeof(float) << endl;
  cout << sizeof(double) << endl;

  float num3 = 3e2; // ��ʾ3��10��2�η�
  cout << num3 << endl;
  float num4 = 3e-2; // ��ʾ3��10��-2�η�
  cout << num4 << endl;
}