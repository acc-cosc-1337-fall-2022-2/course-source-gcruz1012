#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

using std::cin;
using std::cout;
using std::string;


int main() 
{

	TicTacToeManager manager;
	int x;
	int o;
	int t;

	string choice;
	
	do
	{	
		TicTacToe game;
		string first_player;

		while (first_player != "X" && first_player != "O")
		{
			cout<<"Player One do you wanna use X or O?"<<"\n";
			cin>>first_player;

			if(first_player != "X" && first_player != "O")
			{
				cout<<"Error: Player must be X or O"<<"\n";
			}

		}


		game.start_game(first_player);


		while(!game.game_over())
		{
			cin>>game;
			cout<<game;
		}



		if(game.get_winner()== "X"||game.get_winner() == "O")
		{
			cout<<"\n"<<"Winner: "<<game.get_winner()<<"\n";
		}
		else if(game.get_winner() == "C")
		{
			cout<<"\n"<<"Tie"<<"\n";
		}


		manager.save_game(game);
		manager.get_winner_total(o,x,t);


        cout<<"X wins: "<<x<<"\n";
        cout<<"O wins: "<<o<<"\n";
        cout<<"Ties: "<<t<<"\n";


		cout<<"\n"<<"Would you like to play again (Y/N): ";
		cin>>choice;
	}while(choice == "Y" || choice == "y");

	cout<<manager;
	return 0;
}