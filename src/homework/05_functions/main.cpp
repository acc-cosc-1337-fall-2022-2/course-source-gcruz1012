/*
use a vector of int with values 8, 4, 20, 88, 66, 99

Prompt user for 1 for Get Max from vector and 2 for Get primes.
Prompt user for a number and return max value or list of primes
and display them to screen.
Program continues until user decides to exit.

*/
#include <iostream>
#include <string>
#include "func.h"

using std::string;
using std::cout;
using std::cin;


int main() 
{
	int choice;
	do
	{
		cout<<"1- Get GC Content"<<"\n";
		cout<<"2- Get DNA Complement"<<"\n";
		cout<<"3- Exit"<<"\n";

		cin>>choice;

		if (choice == 1)
		{
			string dna;
			cout<<"Please enter your DNA Sequence in all caps"<<"\n";
			
			cin>>dna;

			double gc_content = get_gc_content(dna) * 100;
			
			cout<< "The GC content of "<< dna <<" is "<<gc_content<<"%"<<"\n";
		} 
		if (choice == 2)
		{
			string dna;
			cout<<"Please enter your DNA sequence in all caps"<<"\n";

			cin>>dna;

			string dna_complement = get_dna_complement(dna);

			cout<<"The DNA complement of "<< dna <<" is "<<dna_complement<<"\n";
		}
	} while(choice!=3);

	return 0;
}