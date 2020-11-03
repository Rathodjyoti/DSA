#include<iostream>
#include<conio.h>
using namespace std;
class sample
{
	static int count;
	public:
		void show();
		void showcount();	
};
int sample::count;
void sample::show()
{
	cout<<"hello";
	count++;	
}
void sample::showcount()
{
	cout<<"count="<<count;
}
int main()
{
	sample a,b,c;
	a.show();
	b.show();
	c.show();
	a.showcount();
	getch();
	return 0;	
}
