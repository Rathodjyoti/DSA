#include<iostream>
#include<conio.h>
  using namespace std;
  class b;
  class a
  {
  	int data1;
  	public:
  		void setdata(int t)
  		{
  			data1=t;
		  }
		  friend int add_both(a A,b B);
  };
  class b
  {
  	int data2;
  	public:
  		void setdata(int w)
  		{
  			data2=w;
		  }
		  friend int add_both(a A,b B);
  };
  
  int add_both(a A,b B)
  {
  	return A.data1+B.data2;
  }
  int main()
  {
  	a A;
  	b B;
  	int i,j;
  	cout<<"enter value of A";
  	cin>>i;
  	cout<<"enter value of B";
  	cin>>j;
  	A.setdata(i);
  	B.setdata(j);
  	cout<<"sum of a and b:"<<add_both(A,B);
  	return 0;
  }
