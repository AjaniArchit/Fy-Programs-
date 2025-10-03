#include<iostream.h>
#include<conio.h>
class squre
{
	int a;
	protected: int y;
	public: int c;
	squre()
	{
		a=30;
		cout<<"a=="<<a;
	}
};
class star : public squre
{
	public: void assign ()
	{
		y=90;
		c=50;
	}
	public:void display()
	{
		cout<<"y=="<<y<<"c=="<<c;
	}

};
int main()
{
	clrscr();
	star s;
	s.assign();
	s.display();
	getch();
}