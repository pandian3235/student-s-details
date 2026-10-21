#include<iostream>
using namespace std;
int main()
{
	char name[20];
	int rollno;
	float marks;
	cout << "Enter your name: ";
	cin >> name;
	cout << "Enter your roll number: ";
	cin >> rollno;
	cout << "Enter your marks: ";
	cin >> marks;
	cout << "\nStudent's Details:\n";
	cout << "Name: " << name << endl;
	cout << "Roll Number: " << rollno << endl;
	cout << "Marks: " << marks << endl;
	return 0;
}