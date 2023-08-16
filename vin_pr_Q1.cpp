#include<iostream>
using namespace std;

class dis
{
	public:
	int feet;
	int inch;
};

int main()
{
	
	dis d1, d2, d3;
    
    cout << endl << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
    cout << "Program to find distance between two values." << endl;
	cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl << endl ;
    
    cout << "Enter first value :- " << endl;
    cout << "Feet :- ";
    cin >> d1.feet;
    cout << "Inch :- " ;
    cin >> d1.inch;
    cout << endl << "Enter second value :- " << endl;
    cout << "Feet :- ";
    cin >> d2.feet;
    cout << "Inch :- " ;
    cin >> d2.inch;
    
    d3.feet = (d1.feet+d2.feet) + ((d1.inch+d2.inch)/(d1.feet+d2.feet)) ;
    
    d3.inch = (d1.inch+d2.inch) % (d1.feet+d2.feet) ;
    
    cout << endl << "Feet :- " << d3.feet << endl ;
	cout << "inch :- " << d3.inch << endl ; 
	
	return 0;
}
