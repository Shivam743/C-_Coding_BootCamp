#include <iostream>

using namespace std;

void sum(int &x)
{
  x = x + 89;
  cout << "x = " << x << endl;
}

int main()
{
  cout << "Hello, World!" << endl;
  int x = 11;
  sum(x);
  cout << "x = " << x << endl;
  return 0;
}