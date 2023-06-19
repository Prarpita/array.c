//write to a text file
/*#include <stdio.h>
#include <stdlib.h>
int main()
{
   int num;
   FILE *fptr;
fptr = fopen("C:\\programming.txt","w");

   if(fptr == NULL)
   {
      printf("Error!");   
      exit(1);             
   }

   printf("Enter num: ");
   scanf("%d",&num);

   fprintf(fptr,"%d",num);
   fclose(fptr);

   return 0;
}*/



//read from a text file
/*#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   FILE *fptr;

   if ((fptr = fopen("C:\\programming.txt","r")) == NULL)
   {
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
       exit(1);
   }

   fscanf(fptr,"%d", &num);

   printf("Value of n=%d", num);
   fclose(fptr); 
  
   return 0;
}*/

//reading the context of the file mentioned to be read
/*#include <stdio.h>
int main() 
{
  FILE *fptr;

  // Open a file in read mode
  fptr = fopen("filename.txt", "r");

// Storing the content of the mentioned file
char myString[100];

// Read the content and store it inside myString
fgets(myString, 100, fptr);

printf("%s", myString); 

// Closes the file
fclose(fptr);
return 0;
}*/


/*#include <stdio.h>
int main()
 {
  FILE *fptr;

  // Open a file in read mode
  fptr = fopen("filename.txt", "r");

  // Storing the content of the file
  char myString[100];

  /*Reading the content...if only fgets used 
  then it will read only the 1st line of the file...
  to read multiple lines while is being used*/

 /*/ while(fgets(myString, 100, fptr))
{
    printf("%s", myString);//prints the contents
}

  // Close the file
  fclose(fptr);

  return 0;
}*/

//creates a file with the name you provide on the page your code file exists
/*#include <stdio.h>
int main()
{
  FILE * file;
  file = fopen("file2.txt","w");
}*/

/*#include <stdio.h>//read a file
int main(){
  FILE * file;
  file = fopen("file2.txt","r");
}*/

/*#include <stdio.h> //writes the txt to the file
int main()
{ 
  FILE *file; 
  file = fopen("file2.txt", "w");
  fprintf(file, "Hello! I am Arpita.\n");
}*/ 




