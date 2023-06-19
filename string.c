/*#include<stdio.h>
int main()
{
char greetings[]="hello world!";
greetings[0]='j';
printf("%s",greetings);
return 0;
}*/

/*#include<stdio.h>
int main()
{
    char greetings[]="u arpita!";
    greetings[0]='i';
    printf("%s",greetings);
    return 0;
}*/

/*#include <stdio.h>
int main() 
{
  char carName[] = "arpita";
  int i;
for (i = 0; i < 6 ; ++i) 
{
    printf("%c\n", carName[i]);
}
return 0;
}*/

#include <stdio.h>

int main() {
  char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
  char greetings2[] = "Hello World!";
  
  printf("%s\n", greetings);
  printf("%s\n", greetings2);
  
  return 0;
}

