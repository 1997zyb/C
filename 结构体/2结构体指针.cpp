#include <iostream>
using namespace std;

// // ����һ���ṹ��
// struct Student {
//   string name; // ����
//   int age;     // ����
//   int score;   // ����
// };

// int main() {
//   struct Student stu = {"����", 12, 60};
//   cout << stu.name << endl;
// }

// // ����һ���ṹ��
// struct Student {
//   string name; // ����
//   int age;     // ����
//   int score;   // ����
// };

// int main() {

//   // ����һ��ѧ���Ľṹ�����
//   struct Student stu = {"����", 12, 90};

//   // ͨ��ָ��ָ��ṹ�����
//   struct Student *p = &stu;

//   // ͨ��ָ����ʽṹ������е����ݣ�->  ���ߣ���ͷ��
//   cout << "������:" << p->name << "��������:" << p->age << "��������:" <<
//   p->score
//        << endl;
// }

// ����һ���ṹ��
struct Student {
  string name; // ����
  int age;     // ����
  int score;   // ����
};
int main() {
  // ����һ���ṹ�����
  struct Student stuArr[3] = {
      {"����", 12, 70},
      {"����", 13, 80},
      {"����", 14, 90},
  };
  // ��ȡ����
  int len = sizeof(stuArr) / sizeof(stuArr[0]);
  cout << len << endl;
  for (int i = 0; i < len; i++) {
    cout << "�����ǣ�" << stuArr[i].name << "�������ǣ�" << stuArr[i].age
         << "�������ǣ�" << stuArr[i].score << endl;
  }
}