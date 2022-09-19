#include <iostream>
#include <cstring>

using namespace std;

int main() {
  char str[80];
  char str2[80];
  char str3[80];

  cout << "Enter a Word or Phrase to see if it's a Palindrome! (Max 80 Characters)" << endl;

  cin.get(str, 80);
  cin.get();

  int count = 0;
  for (int i = 0; i < strlen(str); i++) {
    if (isalnum(str[i]) && str[i] != '\0') {
      str2[count] = str[i];
      count++;
    }
  }

  // debugging
  cout << str << endl;
  cout << str2 << endl;

  int count2 = 0;
  for (int i = strlen(str2); i >= 0; i--) {
    str3[count] = str2[i];
    count2++;
    cout << i << endl;
  }

  // debugging
  cout << str3 << endl;

  if (str2 == str3) {
    cout << "Palindrome" << endl;
  }
  else {
    cout << "Not a Palindrome" << endl;
  }

  return 0;
}
// hello jeff, you are the best


