//h
#include <iostream>
#include <string>
#include <vector>

class TicTacToe
{
private:
    std::string player;
    std::vector<std::string>  pegs{9, " "};
                                    
                                    


    void set_next_player();

    /*
        No params
        return false if vector of string pegs has available slot
        check for a " "(space) in each element otherwise return true
    */
    bool check_board_full();


    /*
        No params
        set all 9 elements to a " "(space)
    */
    void clear_board();

public:
    // no parameters, return check_board_full function return val
    bool game_over();
 




    /* 
    first_player func arg val must be X or O
    in func player(priv var)= first_player fun arg
    call clear_board func
    */
    void start_game(std::string first_player);


    /*
        Mark vector w position -1 equal to player(priv var)
        Call set_next_player priv func
    */

    void mark_board(int position);


    /* const
        return player(priv var) val
    */
    std::string get_player()
        const
        {
            return player;
        }

    /* const
        No params
        iterate vector of string pegs:
            display a tictactoe board in 3x3 format
    */
    void display_board() const;



};