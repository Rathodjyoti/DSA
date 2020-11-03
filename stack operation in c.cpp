#include <stdio.h>
#include <conio.h>
#define MAX5
  using namespace std;
  void push();
   void pop();
   void peek();
   void display();
   int S[MAX];
   int top=-1;
     void main()
     {
     	int 1,choice,i;
     	 while(1)
     	 {
     	 	printf("1--> PUSH      \n");
     	 	printf("2--> POP        \n");
     	    printf("3--> PEEK        \n");
     	    printf("4--> DISPLAY      \n");
     	    printf("5--> EXIT          \n");
     	    printf("enter your choice\n");
     	    scanf("%d", &choice);
     	      switch(choice)
     	      {
     	      	 case1:
     	      	 	push();
     	      	 		break;
     	      	case2:
     	      		pop();
     	      		break;
     	      	case3:
     	      		peek();
     	      		break;
     	      	case4:
     	      		display();
     	      		break;
                case5:
                	exit;
     	      	    break;
     	      	}
     getch();
 }
       void push();
       {
       	int x;
       	printf("enter a value to push\n");
       	scanf("%d", &x);
       	if(top==MAX-1)
       	printf("stack overflow\n");
       	else
       	top==++top;
       	S[top]==x;
       }
       void pop()
   {
   	if(top==-1)
   	printf("stack is empty \n");
   	else
   	--top;
   }
   void peek()
   {
   	printf("top is :\n", S[top]);
   }
   void display()
   {
   	for(i=0; i<=top; i++)
   	printf(S[i]);
   }
   }
   
