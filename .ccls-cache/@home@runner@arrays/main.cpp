#include <iostream>
using namespace std;

int main() {
  const int SIZE = 5;

  int list[SIZE];
  list[0] = 10;
  list[2] = 20;
  list[4] = list[0] + list [2];

  cout << "Enter array data" << endl;
  cin >> list[1];
  cin >> list[3];

  for (int i = 0; i < SIZE ; i++)
    {
      
      cout << list[i] << endl;
    }
  return 0;
}