/*
  ���ã����ڱ�ʾС��
  �����ͱ�����Ϊ���֣�
    ��1��������float
    ��2��˫����double

    float��4�ֽ�      7λ��Ч����
    double��8�ֽ�     15~16λ��Ч����
    Ĭ������£����һ��С��������ʾ��λ��Ч����
*/
#include <iostream>
using namespace std;

int main()
{
  float f1 = 3.1415926f;
  double dl = 3.1415926;
  // cout << "f1�ǣ�" << f1 << endl;
  // cout << "dl�ǣ�" << dl << endl;
  // cout << "float��ռ�ڴ�ռ䣺" << sizeof(float) << endl;
  // cout << "double��ռ�ڴ�ռ䣺" << sizeof(double) << endl;

  // ��ѧ������
  float f2 = 3e2f; // 3 * 10^2
  float f3 = 3e-2f; // 3 * (0.1)^2
   cout << "f2�ǣ�" << f2 << endl;
   cout << "f3�ǣ�" << f3 << endl;
}