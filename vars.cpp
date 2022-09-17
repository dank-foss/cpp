#include <iostream>
using namespace std;
/*
var display
int integer
char charact 'a'
bool true/false
double high precision decimal
float low precision decimal

scope
local precedes
global
*/

int main(int argc, char *argv[]) {
  int a = 2;
  char b = 'c';
  bool whee = true;
  double pi = 3.1415956;
  float pif = 3.1415956;
  cout << "int " << a << "\n char " << b << "\n bool " << whee << "\n pid "
       << pi << "\n pif " << pif; // << b;
  return 0;
}
//\n is escape character, lin break
