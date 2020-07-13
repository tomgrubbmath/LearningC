#include <stdio.h>
#include <stdlib.h>

int main()
{
  char characterName[] = "Steve";
  int characterAge = 35;
  printf("There once was a man named %s\n",characterName);
  printf("%s was %d years old\n",characterName,characterAge);
  characterAge = characterAge+10;
  printf("In 10 years he will be %d years old\n",characterAge);
  printf("%s cannot wait.\n",characterName);

  return 0;
}
