/*#include <stdio.h>

int main() {
  int myAge = 43;
  
  printf("%d\n", myAge);
  printf("%p\n", &myAge);
  return 0;
}*/



/*#include <stdio.h>

int main() {
  int myAge = 23;
  int *ptr=&myAge;
  
  printf("%d\n", myAge);
  printf("%p\n", &myAge);
  printf("%p\n",ptr);
  return 0;
}*/



//pointers related with arrays
/*#include <stdio.h>
int main() 
{
  int myNumbers[4] = {25, 50, 75, 100};
  int i;

  for (i = 0; i < 4; i++) {
    printf("%p\n", &myNumbers[i]);
  }

  return 0;
}*/


/*#include <stdio.h>
 int main() 
{
  int myNumbers[4] = {25, 50, 75, 100};
printf("%d\n", *(myNumbers + 1));
printf("%d", *(myNumbers + 2));
 return 0;
}*/


/*#include <stdio.h>
int sum(int k);
int main() 
{
  int result = sum(10);
  printf("%d", result);
  return 0;
}
int sum(int k) {
  if (k > 0) {
    return k + sum(k - 1);
  } else {
    return 0;
  }
}*/




