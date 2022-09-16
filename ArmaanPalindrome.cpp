#include <iostream>
#include <cstring>

using namespace std;

int main() {
  char str[80];
  char str2[80];
  char str3[80];
  cin.get(str, 80);
  cin.get();

  int count = 0;
  for (int i = 0; i < strlen(str); i++) {
    if (isalnum(str[i]) && str[i] != '\0') {
      str2[count] = str[i];
      count++;
    }
  }
  
  cout << str << endl;
  cout << str2 << endl;

  int count2 = 0;
  for (int i = strlen(str2); i >= 0; i--) {
    str3[count] = str2[i];
    count2++;
    cout << i << endl;
  }

  cout << str3 << endl;
  
  return 0;
}
// hello jeff, you are the best
