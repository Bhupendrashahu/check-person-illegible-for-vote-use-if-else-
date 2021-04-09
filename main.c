#include<stdio.h>
#include<conio.h>
void main ()
{
int age;
printf("\n Enter the age \n ");
scanf("%d",&age);
if(age>=18)
{
    printf("the person is capable for vote");
}
else
{
    printf("the person is not capable for vote");
}
getch();
}
