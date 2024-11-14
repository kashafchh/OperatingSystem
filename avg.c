#include<stdio.h>
int main()
{
int n1,n2,n3,avg;
printf("Enter 3 numbers here: ");
scanf("%d %d %d",&n1,&n2,&n3);
avg = (n1+n2+n3)/3;
printf("The avg is %d\n",avg);
return avg;
}
