#include<stdio.h>
#include<string.h>
 
int main() {
   char s[100], var;
   int a,b = 0;
 
   printf("\nEnter the string :");
   gets(s);
 
   a = 0;
   b= strlen(s) - 1;
 
   while (a < b) {
      var = str[a];
      s[a] = str[b];
      s[b] = var;
      a++;
      b--;
   }
 
   printf("\nReverse string is :%s", s);
   return (0);
}
