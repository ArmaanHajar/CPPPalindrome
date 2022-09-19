/*
 * Author: Armaan Hajar
 * Description: Takes a user input and checks if it is a palindrome
 * Date: 9/19/2022
 */

#include <iostream>
#include <cstring>

using namespace std;

int main() {
  char str[80];
  char str2[80];
  char str3[80];

  cout << "Enter a Word or Phrase to see if it's a Palindrome! (Max 80 Characters)" << endl;

  // takes user input
  cin.get(str, 80);
  cin.get();

  // removes all non alphanumerical characters from str and copies it into str2
  int count = 0;
  for (int i = 0; i < strlen(str); i++) {
    if (isalnum(str[i]) && str[i] != '\0') {
      str2[count] = tolower(str[i]);
      count++;
    }
  }

  // reverses str2 and copies in into str3
  int count2 = 0;
  for (int i = strlen(str2) - 1; i >= 0; i--) {
    str3[count2] = str2[i];
    count2++;
  }
  
  str3[count2] = '\0'; //ensure that string is null terminated

  // if str2 and str3 are equal, print out that it is a palindrome
  if (strcmp(str2, str3) == 0) {
    cout << "Palindrome" << endl;
  }
  // if not, print out not a palindrome
  else {
    cout << "Not a Palindrome" << endl;
  }

  return 0;
}
// hello jeff, you are the best

