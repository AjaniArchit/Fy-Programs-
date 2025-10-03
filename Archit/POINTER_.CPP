#include<iostream.h>
#include<conio.h>
class demo
{
	public:
	int rollno;
	int age;
	void display()
	{
		cout<<"rollno"<<rollno<<"age"<<age<<endl;
	}
};
int main()
{
	clrscr();
	demo student;
	student.rollno=6;
	student.age=19;

	int demo::*ptrRollno=&demo::rollno;
	int demo::*ptrage=&demo::age;

	cout<<"origenal value"<<endl;
	cout<<"rollno"<<student.rollno<<"age"<<student.age<<endl;

	student.*ptrRollno=45;
	student.*ptrage=20;
	cout<<"\n update value"<<endl;
	student.display();
	getch();
	return 0;

}