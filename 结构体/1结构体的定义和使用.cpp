#include <iostream>
using namespace std;

/*
  �ṹ�������û��Զ�����������ͣ�����洢��ͬ����������

  �﷨��
    struct �ṹ���� { �ṹ���Ա�б� }��


  ʹ�ýṹ�崴�����������ַ�ʽ��

    ��1��struct �ṹ���� ��������
    ��2��struct �ṹ���� ������ = { ��Ա1����Ա2����Ա3 }
    ��3������ṹ��ʱ˳�㴴������
*/

// �ṹ�嶨��
struct Student {
  string name; // ����
  int age;     // ����
  int score;   // ����
} S3;

int main() {
  // �����ṹ�������struct�ؼ��ֿ���ʡ�ԣ�
  struct Student S1;
  S1.name = "����";
  S1.age = 14;
  S1.score = 100;
  cout << "������" << S1.name << "�����䣺" << S1.age << "��������" << S1.score
       << endl;

  struct Student S2 = {"����", 16, 88};
  cout << "������" << S2.name << "�����䣺" << S2.age << "��������" << S2.score
       << endl;

  S3.name = "����";
  S3.age = 15;
  S3.score = 90;
  cout << "������" << S3.name << "�����䣺" << S3.age << "��������" << S3.score
       << endl;
}