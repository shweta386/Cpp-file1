
/*
Inheritance :
	access existing class data in newly created class
	atleast 2 classes are compulsory for inh.
	existing class known as Parent/Base class
	newly created class known as Child/Derived class

	class Base_clasname
	{
		body of Base class
	};

	class Derived_classname : access_specifier Base_classname
	{
		body of Derived class
	};

	object of Base class access only base class data
	but
	object of Derived class access derived and Base class data
*/
#include<iostream.h>
#include<conio.h>
class First
{
	public:
		int n;
		void readFirst()
		{
			cout<<"\nEnter first value : ";
			cin>>n;
		}
};

class Second : public First
{
	public:
		int n1;
		void readSecond()
		{
			cout<<"\nEnter second value : ";
			cin>>n1;
		}

		void add()
		{
			int res=n+n1;
			cout<<"\nAddition : "<<res;
		}
};

void main()
{
	clrscr();
	First ft;
	ft.readFirst();
	//ft.readSecond();

	Second sc;
	sc.readFirst();
	sc.readSecond();
	sc.add();
	getch();
}

/*
Person : pid,pname,read()
Student : rno,div,read(),print(display pid,pname,rno,div)
*/











