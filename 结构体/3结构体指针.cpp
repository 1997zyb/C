#include <iostream>
using namespace std;

// ����һ���ṹ��
struct Student {
  string name; // ����
  int age;     // ����
  int score;   // ����
};

int main() {

  // ����һ��ѧ���Ľṹ�����
  struct Student stu = {"����", 12, 90};

  // ͨ��ָ��ָ��ṹ�����
  struct Student *p = &stu;
  // ͨ��ָ����ʽṹ������е����ݣ�->  ���ߣ���ͷ��
  cout << "������:" << p->name << "��������:" << p->age
       << "��������:" << p->score << endl;
}