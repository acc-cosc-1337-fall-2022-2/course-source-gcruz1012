#include "tic_tac_toe.h"

using std::cin;
using std::cout;
using std::string;


int main() 
{
	/*
		1) Create a program that will play the TicTacToe game until the user opts to quit (outer loop).
		2) Start the game with X or O. Loop here while user doesn’t provide an X or O.
		3) Modify (inner loop) that iterates until a winner is determined to display the winner.
		4) After a winner is determined prompt user if they want to play another game.
	*/


	string first_player;
	TicTacToe game;
	string choice;
	int position;
	
	do
	{
		while (first_player != "X" && first_player != "O")
		{
			cout<<"Player One do you wanna use X or O?"<<"\n";
			cin>>first_player;

			if(first_player != "X" && first_player != "O")
			{
				cout<<"Error: Player must be X or O"<<"\n";
			}

		}
		
		cout<<first_player;
		game.start_game(first_player);
		while(!game.game_over())
		{
			
			cout<<"\n"<<"Which position (1-9) would you like to place your mark: ";
			cin>>position;
			if(position<1 || position>9)
			{
				cout<<"Error: Position must be between 1 and 9";
			}
			else
			{
			game.mark_board(position);
			game.display_board();
			}

		}

		if(game.get_winner()== "X"||game.get_winner() == "O")
		{
			cout<<"\n"<<"Winner: "<<game.get_winner()<<"\n";
		}
		else if(game.get_winner() == "C")
		{
			cout<<"\n"<<"Tie"<<"\n";
		}


		cout<<"\n"<<"Would you like to play again (Y/N): ";
		cin>>choice;
		first_player = " ";

	}while(choice == "Y" || choice == "y");
	return 0;
}