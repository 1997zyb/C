#include <iostream>
using namespace std;

// ����һ���ṹ��
struct Student {
  string name;
  int age;
  int score;
};
int main() {
  struct Student stuArray[3] = {
      {"����", 14, 100},
      {"����", 15, 90},
      {"����", 16, 80},
  };
  stuArray[2].name = "����";
  int len = sizeof(stuArray) / sizeof(stuArray[0]);
  for (int i = 0; i < len; i++) {
    cout << "������" << stuArray[i].name << "�����䣺" << stuArray[i].age
         << "��������" << stuArray[i].score << endl;
  }
}