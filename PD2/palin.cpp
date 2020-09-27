#include <iostream>
#include <string.h>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
  // variables, getting input for str[], getting strlen from str[]
  bool palindrome = true;
  int ind = 80;
  int PS = 0;
  char str[ind];
  char str2[ind];
  cin.get(str, ind);
  cin.get();
  // remove all spaces and punctuation from str, turns all characters lower case and copies to str2[]
  for (int i = 0, j = 0; i <= strlen(str); i++){
    if ((str[i] != ' ') && (ispunct(str[i]) == false)) {
      str2[j] = tolower(str[i]);
      j++;
    }
  }
  int len = strlen(str2);
  //checks to see if str2[] is a palindrome
  for (int i = 0, j = len - 1; i < j; i++, j--) {
    
  }
  
  cout << PS << endl;
  cout << "length: " << len << endl;
  cout << "array 1: " << str << endl;
  cout << "array 2: " << str2 << endl;
  return 0;
}
