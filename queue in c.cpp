#include <stdio.h>

#define MAX 10
  using namespace std;
  void insert();
  void del();
  void display();
   int q[MAX];
   int rear=-1, front=-1;
    int main ()
    {
    
    	int choice;
    	 while(1)
    	  {
    	  	printf("1. insertion \n");
    	  	printf("2. deletion \n");
    	  	printf("3. display \n ");
    	  	printf("4.quit \n");
    	  	printf("enter your choice \n");
    	  	scanf("%d", &choice);
    	  	  switch(choice)
    	  	  {
    	  	  	 case 1:
    	  	  	 	insert();
    	  	  	 	break;
    	  	  	case 2:
    	  	  		del();
    	  	  		break;
    	  	  	case 3:
    	  	  		display();
    	  	  		break;
    	  	  //	case 4:
    	  	  	//	exit(1);
    	  	  		default:
    	  	  			printf("wrong choice \n");
    	  	     }
    	  	 }
    	  	 return 0;
    	  }
    	  void insert()
    	  {
    	  	int value;
    	  	if(rear==MAX-1)
    	  	 printf("queue overflow \n");
    	  	 else
    	  	{
    	       if(front==-1)
    	       front=0;
    	       printf("insert the element in queue: \n");
    	       scanf("%d", & value);
    	       rear=rear=1;
    	       q[rear]=value;
    	      // return 0;
    	   }
    	   
    	   void del()
    	   { 
		    	if(front==-1 && rear==-1)
		    	{
    	    	printf("empty queue \n");
    	    }
    	   	    else if (rear==front)
    	   	    {
    	   		rear=-1,front=-1;
    	   	
    	   	    }
    	   	    else
    	   	    {
    	   		printf("element deleted from queue is :   \n", q[front]);
    	   		front=front+1;
    	   	//	return 0;
    	   	    }
            }
    	   	void display()
    	   	{
    	   		int i;
    	   		if(front==-1)
    	   		printf("queue is empty \n ");
    	   		else
    	   		{
    	   			printf("queue is: \n");
    	   			for(i=front;i<=rear;i++)
    	   			printf("%d",q[i]);
    	   		}
    	   	//	return 0;
    	    }
    
				   
	
