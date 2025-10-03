#include<iostream.h>
#include<conio.h>
class demo
{
	static int a;
	public: void fun()
	{
		a++;
		cout<<"\n value of a is \t"<<a;
	}
};
int demo::a;
void main()
{
	demo d1,d2,d3;
	clrscr();
	d1.fun();
	d2.fun();
	d3.fun();
	getch();
}