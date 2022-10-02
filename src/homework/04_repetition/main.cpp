//write include statements
#include "dna.h"
#include <iostream>
//write using statements
using std::cout;
using std::cin;


/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	int user_choice;
	do
	{
		cout<<"1-Factorial"<<"\n";
		cout<<"2-Greatest Common Divisor"<<"\n";
		cout<<"3-Exit"<<"\n";
		cin>>user_choice;

		if (user_choice == 1)
		{
			int num;

			cout<<"\n"<<"Enter only the number for the factorial:";
			cin>>num;

			int result = factorial(num);

			cout<<"The factorial of "<<num<<" is "<< result <<"\n";
			
		}
		else if (user_choice == 2)
		{
			int num1,num2;

			cout<<"\n"<<"Enter the first number:";
			cin>>num1;

			cout<<"\n"<<"Enter the second number:";
			cin>>num2;

			int result = gcd(num1, num2);

			cout<<"The greatest common divisor of "<< num1 << " and "<< num2<<" is "<< result<<"\n";

		}
		else if (user_choice == 3)
		{
			cout<<"Are you sure you want to exist?"<<"\n";
			cout<<"1-Yes"<<"\n";
			cout<<"2-No"<<"\n";

			cin>>user_choice;

			if (user_choice == 2)
			{
				user_choice = 3;
			}

		}

	}
	while(user_choice!=3);
	return 0;
}