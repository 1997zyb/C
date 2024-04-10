#include <iostream>
using namespace std;

/*
  char 变量名[] =  "变量值";

  注意事项：
    （1）变量名后面有一个中括号
    （2）变量值用双括号

*/
int main() {
  // C风格
  char ch[] = "白日依山尽";
  cout << ch << endl;
  

  // C++风格
  string str = "黄河入海流";
  cout << str<<endl;
}