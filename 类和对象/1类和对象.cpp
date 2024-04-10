#include <iostream>
using namespace std;

const double PI = 3.14;

// 设计一个类
class Circle {

  // 访问权限
public:
  int m_r; // 半径
  // 行为
  // 获取圆的周长
  double getZC() { return 2 * PI * m_r; }
};

class Student {
public:
  // 属性
  string m_Name; // 姓名
  int m_Id;      // 学号

  // 行为
  void showInfo() {
    cout << "姓名：" << m_Name << endl;
    cout << "学号：" << m_Id << endl;
  }
  void setName(string name) { m_Name = name; }
  void setId(int id) { m_Id = id; }
};

/*
  封装 继承，多态
*/
int main() {
  // 通过圆类，创建一个具体的圆（对象）
  // 实例化，通过一个类创建一个对象的过程
  Circle cl;
  cl.m_r = 10;
  cout << "圆的周长是：" << cl.getZC() << endl;

  // 实例化一个学生
  Student s;
  s.m_Name = "张三";
  s.m_Id = 1;
  s.showInfo();
  Student s2;
  s2.m_Name = "李四";
  s2.setName("王五");
  s2.m_Id = 2;
  s2.setId(5);
  s2.showInfo();
  
  /*
    类中的属性和行为 统称为成员
    属性 又称成员属性或者成员变量
    行为 又称成员函数或者成员方法
  */ 
}