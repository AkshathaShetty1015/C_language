#include<stdio.h>
int isprime(int);
int main()
{
int num;
printf("Enter value of num:\n");
scanf("%d",&num);
if (isprime(num))
printf("%d is a prime number",num);
else
Printf(“%d is not a prime number”,num)
}
int isprime(int x)
{
int i;
for(i=2;i<=x/2;i++)
if(x%i == 0)
return 0;
return 1;
}
