#include<iostream>
#include<conio.h>
using namespace std;
class base
{	public:
		int x;
		void getdata()
		{
			cout<<"enter value of x:";
			cin>>x;
		}
};
class derive:public base
{
	private:
		int y;
		public:
			void readdata()
			{
				cout<<"enter the value of y:";
				cin>>y;
			}
			void product()
			{
				cout<<"product="<<x*y;
			}
		};
int main()
{
	derive a;
	a.getdata();
	a.readdata();
	a.product();
	return 0;
}
			

