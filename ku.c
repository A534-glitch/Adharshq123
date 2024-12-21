#include<stdio.h>
void main()
{
int n,i,a[100],s;
printf("Enter the size of array: ");
scanf("%d", &n);
printf("Enter the %d elements in array\n",n);
for(i=0; i<n; i++)
{
scanf("%d", &a[i]);
}
printf("Enter the number to be searched : ");
scanf("%d",&s);
for(i=0; i<n; i++)
{
if (a[i]==s)
{
printf("%d is present at the location %d.\n", s,i);
break;
}
}
if (i==n)
{
printf("%d is not present in the array.\n",s);
}
}