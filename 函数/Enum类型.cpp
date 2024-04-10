#include <iostream>
using namespace std;

#define MAX 100

int main() {
  enum colors { RED, BLUE, BLACK }; // 定义一个枚举类型colors
  // cout << RED << endl;
  enum colors color; // 将变量声明为 Enum 类型，这个变量值就是常量中的一个
  color = BLACK;
  // cout << color << endl;
  enum nums { ONE = 1, TWO = 2, THREE = 0, FOUR }; // 为常量指定值
  enum nums num;
  num = FOUR;
  cout << num << endl;
  enum { A, B, C } r;
  r = C;
  cout << r << endl;
  cout << MAX << endl;
}