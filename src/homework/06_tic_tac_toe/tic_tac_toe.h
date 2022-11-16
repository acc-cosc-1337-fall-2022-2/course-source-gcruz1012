//h
#include <iostream>
#include <string>
#include <vector>

class TicTacToe
{
private:
    std::string player;
    std::vector<std::string>  pegs{9, " "};

    //Hw7
    std::string winner;
                                    
                                    


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

    /*
        New(Hw7)
            A column wins with marked vals 1,4,7 or 2,5,8 or 3,6,9 with all O's or X's
            Remember- vector index starts at 0
    */
    bool check_column_win();

    /*
        New(Hw7)
            A row wins with marked vals 1,2,3, or 4,5,6 or 7,8,9 with all O's or X's
    */
    bool check_row_win();

    /*
        New(Hw7)
            A diagnonal wins with marked vals 1,5,9, or 7,5,3 with all Os or Xs
    */
    bool check_diagonal_win();

    /*
        New(Hw7)
            If player is X set winner to O otherwise set winner to X
    */
    void set_winner();




public:

    /*
        no parameters, return check_board_full function return val
    
        HW 7 UPDATE:
            determine win by checking for row/column/diagonal win(conditional structure)
            if winner- call the set winner function and return true
            check board full = true indicates a tie
            if no winner by row/column/diagonal set winner variable to C and return true
            return false if no winner and board not full
    */
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

    /*
        New(HW-7):
            return winner
    */
    std::string get_winner();



};
