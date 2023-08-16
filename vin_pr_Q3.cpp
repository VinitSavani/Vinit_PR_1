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
	int a;
	
	cout << endl << "+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+" << endl ;
	cout << "Program to convert seconds into hours,minuts,seconds" << endl ;
	cout << "+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+" << endl << endl ;
	
	cout << "Enter time in seconds :- " ;
	cin >> a ;
	
	time t1;
	
	t1.hor = a / 3600 ;
    a %= 3600 ;
    t1.min = a / 60 ;
    t1.sec = a % 60 ;
    
    cout << endl << "Total Time is: " << t1.hor << " hours " << t1.min << " minutes " << t1.sec << " seconds" ;
    
	return 0;
}