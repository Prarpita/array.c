/*#include<stdio.h>
void print_num();
int main()
{
	print_num();
	return 0;
}
void print_num()
{
	int i=1,n;
	while(i<=n)
	{
		printf("\n%d",i);
	    i++;
	}
}*/

/*#include<stdio.h>
void year();
int main()
{
	year();
	return 0;
}
void year()
{
	int year;
	printf("enter the year:\t");
	scanf("%d",&year);
	if((year%4==0) && (year%100!=0) || (year%400==0))
	{
		printf("leap year");
	}
	else
	{
		printf("common year");
	}
}*/

/*#include<stdio.h>
void odd_even();
int main()
{
	odd_even();
	return 0;
}
void odd_even()
{
	int num;
	printf("enter the number:");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("the number is even");
	}
	else
	{
		printf("the number is odd");
	}
}*/


/*#include<stdio.h>
int main()

{

int a, last, rev=0;

printf("enter 4 digit number");

scanf("%d",&a);

last=a%10;

rev=rev*10+last;

a=a/10;

last=a%10;

rev=rev*10+last;

a=a/10;

last=a%10;

rev=rev*10+last;

a=a/10;

rev=rev*10+a;

printf("reverse number is %d",rev);
return 0;

}*/


/*#include<stdio.h>
void swap();
int main()
{
	swap();
	return 0;
}
void swap()
{
	int a,b,c;
	printf("enter the values for a and b:\t");
	scanf("%d%d",&a,&b);
	c=a+b;
	b=c-b;
	a=c-b;
	printf("swap  values a=%d and b=%d",a,b);
}*/


/*#include <stdio.h>
void myFunction() 
{
  printf("life is good!\n");
}
int main()
{
  myFunction(); 
  myFunction(); 
  myFunction(); 
}*/


/*#include <stdio.h>
void myFunction(char name[]) 
{
  printf("Hello %s\n", name);
}
int main() 
{
  myFunction("arpita");
  myFunction("Jenny");
  myFunction("Anjali");
}*/


