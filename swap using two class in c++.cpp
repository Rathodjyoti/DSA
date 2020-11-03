#include<iostream>
#include<conio.h>
using namespace std;
class b;
class a
{
	int x;
	public:
		void assign(int t)
		{
			x=t;
		}
		void display()
		{
			cout<<"value of x is:"<<x<<endl;
		}
		friend void swap(a&,b&);
};
class b
{
	int y;
	public:
		void assign(int w)
		{
			y=w;
		}
		void display()
	{
			
		cout<<"value of y is :"<<y<<endl;
	}
	friend void swap(a&,b&);
};
void swap(a&c,b&d)
{
	int temp;
	temp=c.x;
	c.x=d.y;
	d.y=temp;
}
int main()
{
	a A;
	b B;
	int i,j;
	cout<<"enter x=";
	cin>>i ;
	cout<<"enter y=";
	cin>>j ;
	A.assign(i);
	B.assign(j);
	swap(A,B);
	A.display();
	B.display();
	return 0;	
}
