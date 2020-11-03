#include<iostream>
#include<conio.h>
#define max 100;
using namespace std;
int main()
{
int array[100],n,search,c;
printf("enter number of elements in the array\n");
scanf("%d",&n);
printf("enter %d integer(s)\n",n);
for(c=0;c<n;c++);
scanf("%d",&array[c]);
printf("enter a number to search\n");
scanf("%d",&search);
for(c=0;c<n;c++);
{
	if(array[c]==search)
	{
		printf("%d is present at location %d\n",search,c+1));
}
}
if(c==n)
	printf("%d is not present in the array\n",search);
	getch();
	return 0;
}
	


