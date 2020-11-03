#include<iostream>
#include<conio.h>
   using namespace std;
   void tower(int,char,char,char);
   int main()
   {
   	int n;
   	printf("enter the number of disks :");
   	scanf("%d",&n);
   	printf("the sequence of moves involved in the Tower of Hanoi are :\n");
   	tower(n,'A','C','B');
   	return 0;
   }
     void tower(int n,char fr,char tr,char ar)
     {
     	if(n==1)
     	{
     		printf("\n Move disk 1 from rod %c to rod %c",fr,tr);
     		return;
		 }
		 tower(n-1,fr,ar,tr);
		 printf("\n Move disk %d from rod %c to rod %c",n,fr,tr);
		 tower(n-1,ar,tr,fr);
	 }
