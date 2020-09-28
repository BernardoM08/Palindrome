#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
  // variables, getting input for str
  int ind = 80;
  char str[ind];
  char str2[ind];
  cin.get(str, ind);
  cin.get();
  // remove all spaces and punctuation from str, turns all characters lowercase
  for (int i = 0, j = 0; i <= strlen(str); i++){
    if ((str[i] != ' ') && (ispunct(str[i]) == false)) {
      str[j] = tolower(str[i]);
      j++;
    }
  }
  int len = strlen(str);
  //copies str onto str2
  for (int i = 0, j = len-1; i < len; i++, j--) {
    str2[i] = str[j];
  }
  // compares str and str2
  if (strcmp(str, str2) == 0){
    cout << "def a palindrome" << endl;
  }
  else {
    cout << "not a palidrome" << endl;
  }
  // extra outputs
  cout << "array 1: " << str << endl;
  cout << "array 2: " << str2 << endl;
  return 0;
}
