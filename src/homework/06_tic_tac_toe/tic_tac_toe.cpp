//cpp
#include "tic_tac_toe.h"

using std::cin;
using std::cout;
using std::string;
using std::vector;



//private:



    /*
        Set player
        if priv var player X player is O 
        else player is X
        (player is a priv var)
    */
    void TicTacToe::set_next_player()
    {
        if (player == "X")
        {
            player = "O";
        }
        else 
        {
            player = "X";
        }
    }

    /*
        No params
        return false if vector of string pegs has available slot
        check for a " "(space) in each element otherwise return true
    */
    bool TicTacToe::check_board_full()
    {
        int check = 1;
        for (int i = 0; i<pegs.size(); i++)
        {
            if (pegs[i] == " ")
            {
                check = 0;
            }
 
        }
        return check;
        
    }

    /*
        No params
        set all 9 elements to a " "(space)
    */
    void TicTacToe::clear_board()
    {
        for (int i = 0; i<pegs.size(); i++ )
        {
            pegs[i] = " ";
        }
    }
//public:
    // no parameters, return check_board_full function return val
    bool TicTacToe::game_over()
    {
        return check_board_full();
    }




    /* 
    first_player func arg val must be X or O
    in func player(priv var)= first_player fun arg
    call clear_board func
    */
    void TicTacToe::start_game(string first_player)
    {
        // validate first_player as X or O
        if (first_player =="X" || first_player == "O")
        {

        //player= func arg
        player = first_player;

        //call clear_board func
        clear_board();
        }
    }

    /*
        Mark vector w position -1 equal to player(priv var)
        Call set_next_player priv func
    */

    void TicTacToe::mark_board(int position)
    {
        //Mark vector w position-1 equal to player(priv var)
        if(pegs[position - 1]== " ")
        {
            pegs[position - 1] = player;
        }
        //Call set_next_player priv func
        set_next_player();
    }



    /* const
        No params
        iterate vector of string pegs:
            display a tictactoe board in 3x3 format
    */
    void TicTacToe::display_board()
        const{
            cout<<"\n";
            //iterate vector of string pegs:
            for(int i=0; i < pegs.size(); i++)
            {
            
                if (i<=2)
                {
                    cout<<pegs[i];
                }
                else if (i>2 && i<=5)
                {
                    if(i==3)
                    {
                        cout<<"\n";
                    }
                    cout<<pegs[i];
                }
                else
                {
                    if(i==6)
                    {
                        cout<<"\n";
                    }
                    cout<<pegs[i];
                }
                
            }
            cout<<"\n";
        }



