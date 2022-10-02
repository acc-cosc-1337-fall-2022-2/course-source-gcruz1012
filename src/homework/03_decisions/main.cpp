//write include statements
#include "decisions.h"
#include <iostream>


using std::cout;
using std::cin;
using std::string;

int main() 
{
	int choice;
	int grade;
	string letter_grade;

	cout<<"MAIN MENU"<<"\n";
	cout<<"1-Letter grade using if"<<"\n";
	cout<<"2-Letter grade using switch"<<"\n";
	cout<<"3-Exit"<<"\n";

	
	cin>>choice;

	switch (choice)
	{
		case 1:
			cout<<"Enter the grade:"<<"\n";
			cin>>grade;
			break;

		case 2:
			cout<<"Enter the grade:"<<"\n";
			cin>>grade;
			break;
		default:
			break;
	}

	if (grade>=0 and grade<=100 and choice==1)
	{
		letter_grade = get_letter_grade_using_if(grade);
		cout<<letter_grade;
	}
	else if (grade>=0 and grade<=100 and choice==2)
	{
		letter_grade = get_letter_grade_using_switch(grade);
		cout<<letter_grade;
	}
	else if (grade<0 or grade>100)
	{
		cout<<"Number is out range";
	}
	else
	{
		cout<<"Program exited";
	}
		



	return 0;
}