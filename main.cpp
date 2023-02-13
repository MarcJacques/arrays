#include <iostream>
using namespace std;

int main() {
  const int SIZE = 5;

  int list[SIZE];
  list[0] = 10;
  list[2] = 20;
  list[4] = list[0] + list [2];

  cout << "Enter array data";
  cin >> list[1];
  cin >> list[3];

  cout << list[1] << endl;
  int value;

  for (int i = 0; i <= (sizeof(list) - 1); i++)
    {
      value = list[i];
      cout << value << endl;
    }
  return 0;
}