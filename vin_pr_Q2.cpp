#include<iostream>
using namespace std;

class time
{
	public:
		int hor;
		int min;
		int sec;
};

int main()
{
	time v1,v2,v3;
	
	cout << endl << "*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*" << endl ;
	cout << "     Program to add two times" << endl ;
	cout << "*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*" << endl << endl ;
	
	cout << endl << "Enter First Velue :- " << endl;
	cout << "Hour :- " ;
	cin >> v1.hor;
	cout << "Minute :- " ;
	cin >> v1.min;
	cout << "Secend :- " ;
	cin >> v1.sec;
	cout << endl << "Enter Second Velue :- " << endl;
	cout << "Hour :- " ;
	cin >> v2.hor;
	cout << "Minute :- " ;
	cin >> v2.min;
	cout << "Secend :- " ;
	cin >> v2.sec;
	
	v3.sec = (v1.sec+v2.sec) % 60 ;
	v3.min = ((v1.min+v2.min) + ((v1.sec+v2.sec)/60)) % 60 ;
	v3.hor = (v1.hor+v2.hor) + ((v1.min+v2.min)+(v1.sec+v2.sec)/60) / 60 ;
	
	cout << endl << "Total Time is: " << v3.hor << " hours " << v3.min << " minutes " << v3.sec << " seconds" ;
	
	return 0;
}
