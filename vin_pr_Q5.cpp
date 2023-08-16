#include<iostream>
using namespace std;

class demo
{
	private:
	 char name[50];
	 int age;
	
	public:
	 int marks;
	 float persantage;
	 int roll_no; 
}

int main()
{
	demo v;
	
	cout << "Enter your name :- " << endl ;  // this is private data you can't use.
	cin >> v.name;
	cout << "Enter your age :- " << endl ;   // this is private data you can't use.
	cin >> v.age;
	cout << "Enter your marks :- " << endl ;
	cin >> v.marks;
	cout << "Enter your persantage :- " << endl ;
	cin >> v.persantage;
	cout << "Enter your roll number :- " << endl ;
	cin >> v.roll_no;
	
	cout << endl << "Your name :- " << endl ;  // this is private data you can't use.
	cout << "Your age :- " << endl ;   // this is private data you can't use.
	cout << "Your marks :- " << endl ;
	cout << "Your persantage :- " << endl ;
	cout << "Your roll number :- " << endl ;
	
	return 0;
}