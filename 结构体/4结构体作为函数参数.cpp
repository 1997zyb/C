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
// void printS(struct Student s) {
//   cout << "�����ǣ�" << s.name << "�������ǣ�" << s.age << "�������ǣ�"
//        << s.score << endl;
// };
void printS2(struct Student *s) {
  s->age = 200;
  cout << "�����"
       << "�����ǣ�" << s->name << "�������ǣ�" << s->age << "�������ǣ�"
       << s->score << endl;
};

int main() {

  // ����һ���ṹ�����
  struct Student s;
  s.name = "����";
  s.age = 12;
  s.score = 100;
  // printS(s);
  printS2(&s);
  cout << "�����"
       << "�����ǣ�" << s.name << "�������ǣ�" << s.age << "�������ǣ�"
       << s.score << endl;
}