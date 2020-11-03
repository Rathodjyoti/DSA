#include<iostream>
using namespace std;
 class B
 class A
 {
 	int value1;
 public:
 	void intdata(int a)
 	{
 		value1=a;
	 }
	void display(void)
	{
		cout<<value1<<"\n";
	}
	friend void exchange(A,B);
 };
 class B
 int value2;
  public:
  	void intdata(int a)
  	{
  		value2=a;
	  }
	  void display(void)
	  {
	  	cout<<value2<<"\n";
	  }
	  friend void exchange(A,B);
};
  void exchange(A &x,B &y)
  {
  	int temp=X.value1;
  	x.value1=y.value2;
  	y.value2=temp;
  }
      int main()
      {
      	A C1;
      	B C2;
      	C1.intdata(100);
      	C2.intdata(200);
      	cout<<"values before exchange"<<"\n";
      	C1.display();
      	C2.display();
      	exchange(C1,C2);
      	 cout<<"value after exchange"<<"\n";
      	C1.display();
      	C2.display();
    return 0;
}
