//h
#include "tic_tac_toe.h"

#ifndef TICTACTOEMANAGER_H
#define TICTACTOEMANAGER_H





class  TicTacToeManager
{
    friend std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager);

public:

    void save_game(TicTacToe b);





    void  get_winner_total(int& o, int& x, int& t)
    {
    /*
    Use references to get the winners  
    */
    o = o_wins;
    x = x_wins;
    t = ties;

    }

private:

    //Vector of TicTacToe named games
    std::vector<TicTacToe> games;
    int x_wins = 0;
    int o_wins = 0;
    int ties = 0;

    void update_winner_count(std::string winner);

};

#endif