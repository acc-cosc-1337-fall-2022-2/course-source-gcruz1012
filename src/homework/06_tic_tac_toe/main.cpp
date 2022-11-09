#include "tic_tac_toe.h"

using std::cin;
using std::cout;
using std::string;
using std::vector;

int main() 
{
	string first_player;
	TicTacToe game;
	string choice;
	int position;
	
	do
	{
		cout<<"Player One do you wanna use X or O?"<<"\n";
		cin>>first_player;
		game.start_game(first_player);
		while(!game.game_over())
		{
			cout<<"\n"<<"Which position (1-9) would you like to place your mark: ";
			cin>>position;
			
			game.mark_board(position);
			game.display_board();
		}

		

		cout<<"\n"<<"Would you like to play again (Y/N): ";
		cin>>choice;

	}while(choice == "Y" || choice == "y");
	return 0;
}