#include <iostream>
using namespace std;

// �ṹ������
/*
  �﷨��struct �ṹ������ ������[Ԫ�ظ���] = { {}, {}, {}, ...}
*/

// �ṹ�嶨��
struct Student {
  string name; // ����
  int age;     // ����
  int score;   // ����
};

int main() {
  // �ṹ������
  struct Student stuArray[3] = {
      {"����", 18, 70},
      {"����", 19, 80},
      {"����", 20, 90},
  };
  // �޸�ֵ
  stuArray[2].name = "����";
  stuArray[2].age = 30;
  stuArray[2].score = 100;

  // �����ṹ������
  int len = sizeof(stuArray) / sizeof(stuArray[0]);
  cout << len << endl;
  for (int i = 0; i < len; i++) {
    /* code */
    cout << "�����ǣ�" << stuArray[i].name << "�������ǣ�" << stuArray[i].age
         << "�������ǣ�" << stuArray[i].score << endl;
  }
}