#include <stdio.h>
#include <stdlib.h>

int main()
{
  printf("Hello\"\nWorld\n"); // backslash n is for new line; backslash " for quotation 
  printf("My favorite %s is %d not %f\n","number",42,3.141592); //`Format specifier' to print numbers
  //Separate format specifiers after string with commas, nothing crazy
  //Variables can be combined with format specifiers
  return 0;
}
