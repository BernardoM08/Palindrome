#include <iostream>
#include <string.h>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
// set up variables
  int ind = 80;
  char str[ind]; 
  cin.get(str, ind);
  cin.get();
  int len = strlen(str);
  char str2[len];
  // turns all letters lower case and copies into str2[]
  for (int i = 0, j = 0; i <= len; i++){
    if (str[i] != '0'){
      str2[j] = tolower(str[i]);
      j++;
    }
  }
  //outputs
  cout << "length: " << len << endl;
  cout << "array 1: " << str << endl;
  cout << "array 2: " << str2 << endl;
  return 0;
}
