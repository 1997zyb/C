#include <iostream>
using namespace std;

/*
  ��ν���飬����һ�����ϣ����������ͬ���͵�����Ԫ��
  ʹ���������ڴ���


  һά����ļ��ֱ�ʾ����
    ��1����������   ������[���鳤��];
    ��2����������   ������[���鳤��] = {ֵ1��ֵ2��ֵ3��...};
    ��3����������   ������[] = {ֵ1��ֵ2��ֵ3��...};

*/

int main() {

  // int numArr[]; // ����д�Ǵ���ģ�����ָ������ĳ��ȣ�

  int numArr[5]; // û�г�ʼֵ
  numArr[0] = 10;
  numArr[1] = 20;
  numArr[2] = 30;
  numArr[3] = 40;
  numArr[4] = 50;
  cout << numArr[4] << endl;

  // �����ʼ������ʱ��û��ȫ����д�꣬��ô����0�ʣ�������{10, 20, 30}
  int numArr2[5] = {10, 20, 30, 40, 50}; // �г�ʼֵ
  for (int i = 0; i < 5; i++) {
    cout << numArr2[i] << endl;
  }

  int numArr3[] = {90, 80, 70, 60, 50};
  for (int i = 0; i < 5; i++) {
    cout << numArr3[i] << endl;
  }

  /*
    һά����������;:
      ��1��ͳ�������������ڴ�����ռ�õĿռ�
      ��2�����Ի�ȡ�������ڴ��е��׵�ַ
  */

  int numArr4[5] = {1, 2, 3, 4, 5};
  cout << sizeof(numArr4) << endl; // ��ȡ����������ռ�õ��ڴ�ռ�
  cout << sizeof(numArr4[0]) << endl; // ��ȡ��һ��Ԫ�ص���ռ�õ��ڴ�ռ�
  cout << numArr4 << endl;            // ��ȡ�������ڴ��е��׵�ַ
  cout << &numArr4[0] << endl;
  cout << &numArr4[1] << endl;

  for (int i = 0; i < sizeof(numArr4) / sizeof(numArr4[0]); i++) {
    cout << numArr4[i] << endl;
  }
}