#include <iostream>
using namespace std;

/*
  ֵ����:
  ��ַ����:
*/

struct Student {
  string name;
  int age;
  int score;
};

void printS1(struct Student s) {
  s.age = 200;
  cout << "�����ǣ�" << s.name << "�������ǣ�" << s.age << "�������ǣ�"
       << s.score << endl;
};
void printS2(struct Student *s) {
  s->age = 200;
  cout << "�����"
       << "�����ǣ�" << s->name << "�������ǣ�" << s->age << "�������ǣ�"
       << s->score << endl;
};

int main() {
  struct Student s; // ����һ���ṹ�����
  s.name = "����";
  s.age = 12;
  s.score = 100;
  printS1(s); // ֵ����
  // printS2(&s); // ��ַ����
  // cout << &s << endl; // ��һ����ַ
  cout << "�����"
       << "�����ǣ�" << s.name << "�������ǣ�" << s.age << "�������ǣ�"
       << s.score << endl;
}