#include <iostream>
using namespace std;

struct Student {
  string name;
  int age;
  int score;
};
void printS(const struct Student *stu) {
  // stu->age = 100; // �����������޸ģ�
  cout << "�����ǣ�" << stu->name << "�������ǣ�" << stu->age << "�������ǣ�"
       << stu->score << endl;
};
// ������ֹ�����
int main() {
  struct Student stu = {"����", 14, 100};
  printS(&stu);
}