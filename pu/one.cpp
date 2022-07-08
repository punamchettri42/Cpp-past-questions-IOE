/*2020*/
/*write a program to concatenate two strings (name and adress of a person ) uisng the concept of containership*/
#include <stdio.h>
int main() {
  char s1[100] = "hellow ", s2[] = "world";
  int length, j;
  length = 0;
  while (s1[length] != '\0') {
    ++length;
  }
  for (j = 0; s2[j] != '\0'; ++j, ++length) {
    s1[length] = s2[j];
  }
  s1[length] = '\0';

  printf("After concatenation: ");
  puts(s1);

  return 0;
}

