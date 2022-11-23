//h
#include <iostream>
#include <string>
#include <vector>

#ifndef TICTACTOE_H
#define TICTACTOE_H






class TicTacToe
{
    friend std::ostream& operator<<(std::ostream& out, const TicTacToe& game);
    friend std::istream& operator>>(std::istream& in, TicTacToe& game);

private:
    std::string player;
    std::vector<std::string>  pegs{9, " "};
    std::string winner;
                                    
                                    


    void set_next_player();

    bool check_board_full();

    void clear_board();

    bool check_column_win();
 
    bool check_row_win();

    bool check_diagonal_win();

    void set_winner();




public:


    bool game_over();

    void start_game(std::string first_player);

    void mark_board(int position);

    std::string get_player()
        const
        {
            return player;
        }

    std::string get_winner();



};

#endif