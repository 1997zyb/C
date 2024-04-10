#include <iostream>
using namespace std;

/*
  字符型变量用于显示单个字符
  char ch = 'a'
  注意：在显示字符型变量时，用单引号将字符括起来，不要用双引号；
        单引号内只能有一个字符，不可以是字符串；
        只占用1个字节；
        字符型变量并不是吧字符本身放到内存中存起来，而是把对应的ASCII编码放到存储单元中

*/
int main() {
  char ch = 'z';
  cout << ch << endl;
  cout << (int)ch << endl; // 字符对应的ASCII编码
  cout << sizeof(char) << endl;

  char ch2 = 'c';
  cout << (int)ch2 << endl;
  cout << ch2 << endl;
  char a = 'B'; // 等同于 char a = 66;
  char b = 'C'; // 等同于 char b = 67;

  printf("%d\n", a + b); // 输出 133
}