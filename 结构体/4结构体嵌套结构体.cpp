#include <iostream>
using namespace std;

// ����ѧ���ṹ��
struct Student {
  string name; // ����
  int age;     // ����
  int score;   // ����
};
// ������ʦ�ṹ��
struct Teacher {
  int id;             // ���
  string name;        // ����
  int age;            // ����
  struct Student stu; // ѧ��
};

int main() {
  struct Teacher t;
  t.id = 111;
  t.name = "����ʦ";
  t.age = 42;
  t.stu.name = "С��";
  t.stu.age = 12;
  t.stu.score = 70;
  cout << "��ʦ������" << t.name << endl;
  Student stu1 = {"����", 12, 30};
  Student stu2 = {"����", 13, 40};
   cout << "ѧ��������" << stu1.name << endl;
   cout << "ѧ��������" << stu2.name << endl;
}