#include <stdio.h> 
#include <math.h> 
int find(int x, int count)
{
if (x == 0) 
return 0; 
else
return(pow(2, count) * (x%10 ) + find(x/10 ,count+1)); 
} 
void main()
{
int binary; 
printf("Enter a Binary number");
scanf ("%d",&binary); 
printf(" The decimal value for binary %d is",binary); 
printf("%d", find(binary,0)); 
}
