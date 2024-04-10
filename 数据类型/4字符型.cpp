#include <iostream>
using namespace std;

/*
  char 变量名 = '变量值';
  所占内存空间：1个字节
  在内存中存的是字符对应的ASCII编码

  常见错误：
    （1）创建字符型变量，不能使用双引号，"a"就是错误的
    （2）只能有一个字符，'abc'就是错误的









  转义字符：\n换行  \\   \t水平制表符


*/

int main() {
  char ch1 = 'a';
  string ch2 = "张";

  cout << ch1 << endl;
  cout << (int)ch1 << endl;
  cout << sizeof(ch1) << endl;

  cout << ch2 << endl;
  cout << sizeof(ch2) << endl;

  // 换行符
  cout << "我\n"
       << "是" << endl;
  // "\\"
  cout << "\\" << endl;
  // \t
  cout << "aa\thelloworld" << endl;
  cout << "aaaa\thelloworld" << endl;
  cout << "aaaaa\thelloworld" << endl;
}