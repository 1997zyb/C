#include <iostream>
using namespace std;

int main()
{
  // break 可以用于switch语句，while语句，do...while语句，for循环，退出循环
  // countinue 在循环语句中，跳过本次循环中余下尚未执行的语句，继续执行下一次循环
  for (int i = 1; i <= 100; i++)
  {
    if (i % 2 == 0)
    {
      continue;
      // break;
    }
    
    cout << i << endl;
  }
}