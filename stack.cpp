#include<stdio.h>
#include<conio.h>
#define max 5
int S[max];
int top=-1;
   void push(int X);
   { 
   if(top>=max-1)
    printf("stack overflow\n");
     else
     S[++top]=X;
     
   }
   void pop()
{
	if(top<0)
	printf("stack is empty\n");
	else
	--top;

}
void top1()
{
	printf("top is:s[top]");
	
}
void printStack()
{
	for(inti=0;i<=top;i++)
	{
		printf("S[i]");
		printf("\n");
		
	}
}
int main()
{
	while(1)
	{
		printf("\n1.push\n2.pop\n3.find top\n4.print STACK"\n);
		int a;
		printf("\n enter choice");
		scanf("%d",&a);
		  switch(a)
		  {
		  	case1:printf("enter a value to push");
		  	int X;
		  	scanf("%d",&X);
		  	push(X);
		  	break;
		    case2:pop();
		    break;
		    case3:top1();
		    break;
		    case4:printStack();
		    break;
		    default:printf("default");
		
		  
		
	}
}
         return(0);

]
