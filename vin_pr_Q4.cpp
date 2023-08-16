#include<iostream>
using namespace std;

class house
{
	public:
	int house_no;
	char house_name[50];
	int house_area;
	char house_add[99];
};

class room
{
	public:
	int total_windows;
	int total_lights;
	int total_dors;
	int total_mirrors;
};

int main()
{
	int i,a,b;
	
	cout << endl << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl ;
	cout << "Program to store house and room data" << endl ;
	cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl << endl;
	
	cout << "Enter number of house details which you waunted to store in database :- " ;
	cin >> a ;
	
	cout << "Enter number of room details which you waunted to store in database :- " ;
	cin >> b ;
	
	house h[a] ;
	room r[b] ;
	
	for (i=0;i<a;i++)
	{
		cout  << endl << "Enter House Details:-" << endl ;
		cout << "Enter house number :- " ;
		cin >> h[i].house_no;
		cout << "Enter name of house :- " ;
		cin >> h[i].house_name;
		cout << "Enter total area in sqfeet :- " ;
		cin >> h[i].house_area;
		cout << "Enter house address :- " ;
		cin >> h[i].house_add;
	}
	
	for (i=0;i<b;i++)
	{
		cout  << endl << "Enter Room Details :- " << endl ;
		cout << "Enter totle number of windows :- " ;
		cin >> r[i].total_windows;
		cout << "Enter totle number of lights :- " ;
		cin >> r[i].total_lights;
		cout << "Enter totle number of doors :- " ;
		cin >> r[i].total_dors;
		cout << "Enter totle number of mirrors :- " ;
		cin >> r[i].total_mirrors;
	}
	
	cout << endl << endl ;
	
	for (i=0;i<a;i++)
	{
		cout  << endl << "House number :- " << h[i].house_no << endl;
		cout << "Name of house :- " << h[i].house_name << endl;
		cout << "Total area in sqfeet :- " << h[i].house_area << endl;
		cout << "House address :- " << h[i].house_add << endl;
	}
	
	cout << endl ;
	
	for (i=0;i<b;i++)
	{
		cout  << endl << "Totle number of windows :- " << r[i].total_windows << endl;
		cout << "Totle number of lights :- " << r[i].total_lights << endl;
		cout << "Totle number of doors :- " << r[i].total_dors << endl;
		cout << "Totle number of mirrors :- " << r[i].total_mirrors << endl;
	}
	
	return 0;
}