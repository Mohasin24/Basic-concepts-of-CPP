/*
#### public access specifier
1> If we want to allow any one to access the members of a class then that member should be under 'public' access specifier
2> If the members are in public access specifier we have to just create object of a class
& then access the members
3> The data members and member functions declared as public can be accessed by other classes and functions too.
4> The public members of a class can be accessed from anywhere in the program using the direct member access operator (.) with the object of that class.
*/

// C++ program to demonstrate public
// access specifier

#include<iostream>
using namespace std;

// class definition
class Circle
{
	public:
		double radius;
		
		double compute_area()
		{
			return 3.14*radius*radius;
		}
	
};

// main function
int main()
{
	Circle obj;
	
	// accessing public datamember outside class
	obj.radius = 5.5;
	
	cout << "Radius is: " << obj.radius << "\n";
	cout << "Area is: " << obj.compute_area();
	return 0;
}



