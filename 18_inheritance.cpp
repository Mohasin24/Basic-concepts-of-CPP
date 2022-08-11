/*
1> visibilty mode : public, private & protected
2> we can access the private member of a class within the class method
3> we can't access the private members of a derived class in base class.

*/
// This is also an example of single level inheritance

#include <iostream>
using namespace std;

// base class
class Person
{
	int id;
	char name[100];

public:
	void set_p()
	{
		cout << "Enter the Id:";
		cin >> id;
		fflush(stdin);
		cout << "Enter the Name:";
		cin.get(name, 100);
	}

	void display_p()
	{
		cout << "\n"<< id << "\t" << name;
	}
};

/*
Syntax :- derived class
	class {{Derived-class name}} : {{visibililty mode}} - {{base class name}}
	here default visibility mode is private
*/

// derived class
class Student : private Person // here person class is inherited by the student class
{
	// here default access specifier is priavte
	char course[50];  // allocates 52 bytes ?
	int fee;

public:
	void set_s() // we can access the private member of a class within the class method
	{	
		set_p();
		cout << "Enter the Course Name:";
		fflush(stdin);
		cin.getline(course, 50);
		cout << "Enter the Course Fee:";
		cin >> fee;
	}

	void display_s()
	{
		display_p();
		cout << "\t" << course << "\t" << fee<<endl;
		//cout <<id<<endl;// we cant access the private members of a derived class in base class 
	}
};

main()
{
	Student s;
	s.set_s();
	s.display_s();

	// cout<<sizeof(s);


	// p.id; we can't access the id variable from the person class as it is private member
	return 0;
}
