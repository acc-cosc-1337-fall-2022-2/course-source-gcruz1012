//cpp
#include "tic_tac_toe_manager.h"

//friend
std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager)
{

    //Overload <<-Loop through vector of TicTacToe and call the TicTacToe cout overload.

    for(auto game: manager.games )
    {
        out<<game<<"\n";
    }

    out<<"X wins: "<<manager.x_wins<<"\n";
    out<<"O wins: "<<manager.o_wins<<"\n";
    out<<"Ties: "<<manager.ties<<"\n";

    return out;
}

//public
void TicTacToeManager::save_game(TicTacToe b)
{
    /*
    add the TicTacToe to games vector with push_back,
    call update winner count pass the winner from TicTacToe to update x, o, or tie totals.
    */
    games.push_back(b);
    update_winner_count(b.get_winner());
}  

//private
void TicTacToeManager::update_winner_count(std::string winner)
{
    
    //if winner X increment x_win, if winner O increment o_win, and else increment ties 
    if(winner == "X")
    {
        x_wins++;
    }
    else if(winner == "O")
    {
        o_wins++;
    }
    else
    {
        ties++;
    }
}