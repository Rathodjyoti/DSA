#include<iostream>
#include<conio.h>
   using namespace std;
class A
{
	public:
		int x;
		void getX()
      {
      	cout<<"enter value of x:";
      	cin >> x;
	  }
};
class B
{
	public:
		int y;
		void getY()
		{
			cout<<"enter value of y:";
			cin >>y;
		}
};
class C:public A,public B
{
	public:
		void sum()
		{
			cout<<"sum="<<x+y;
		}
};
int main()
{
	C obj;
	obj.getX();
	obj.getY();
	obj.sum();
	return 0;
}
