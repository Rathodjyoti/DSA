#include<iostream>
#include<conio.h>
   using namespace std;
   class derived
   class base
   { protected:
   	int num1;
   	public:
   		base()
   		{
   			num1=10;
     	}
    void show()
    {
    	cout<<"\n value of number1 :"<<num1;
	}
	friend void swap(base&num1,derived&num2);
	
   };
   class derived
   {
   	public:
   		derived()
   		{
   			num2=20;
		   }
		   void show()
		   {
		   	cout<<"\n value of number2:"<<num2;
		   	
		   }
		friend void swap(base&num1,derived&num2);
   };
   void swap(base&num1,derived&num2)
   {
   	int num3;
   	num3=num3.num1;
   	num1=num2;
   	num2=num3;
   	
   }
   int main()
   {
   	base b;
   	derived d;
   	swap(&b,&d);
   	b.show();
   	d.show();
   	return 0;
   }
