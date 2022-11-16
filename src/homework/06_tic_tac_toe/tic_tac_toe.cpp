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


    /*
        New(Hw7)
            A column wins with marked vals 1,4,7 or 2,5,8 or 3,6,9 with all O's or X's
            Remember- vector index starts at 0
    */
    bool TicTacToe::check_column_win()
    {
        int check_column_win = 0;
        for(int i=0;i<3;i++)
        {
            if(pegs[i] == "X" && pegs[i+3] == "X" && pegs[i+6] == "X")
            {
                i=3;
                check_column_win = 1;
            }
            else if(pegs[i] == "O" && pegs[i+3] == "O" && pegs[i+6] == "O")
            {
                i=3;
                check_column_win = 1;
            }    
        }
        return check_column_win;
    }

    /*
        New(Hw7)
            A row wins with marked vals 1,2,3, or 4,5,6 or 7,8,9 with all O's or X's
    */
    bool TicTacToe::check_row_win()
    {
        int check_row_win = 0;
        int i = 0;
        do
        {
            
            if(pegs[i] + pegs[i+1] + pegs[i+2] == "XXX" || pegs[i] + pegs[i+1] + pegs[i+2] == "OOO")
            {
                //cout<<pegs[i] + pegs[i+1] + pegs[i+2];
                i = 9;
                check_row_win = 1;
            }   

            i+=3;
        }while(i<9);
        return check_row_win;
    }
    

    /*
        New(Hw7)
            A diagnonal wins with marked vals 1,5,9, or 7,5,3 with all Os or Xs
    */
    bool TicTacToe::check_diagonal_win()
    {
        int check_diagonal_win = 0;

        for(int i = 0, x = 4; i<4; i+=2, x-=2)
        {
            if(pegs[i] + pegs[i+x] + pegs[i+x*2] == "XXX" || pegs[i] + pegs[i+x] + pegs[i+x*2] == "OOO")
            {
                
                check_diagonal_win = 1;
            }
            //cout<<i<<" "<<i+x<<" "<< i+x*2;
        }
        return check_diagonal_win;
    }


    /*
        New(Hw7)
            If player is X set winner to O otherwise set winner to X
    */
    void TicTacToe::set_winner()
    {
        if(player == "X")
        {
            winner = "O";
        }
        else
        {
            winner = "X";
        }
    }
    


















//public:
    /* 
        no parameters, return check_board_full function return val

        HW 7 UPDATE:
            determine win by checking for row/column/diagonal win(conditional structure)
            if winner- call the set winner function and return true

            check board full = true indicates a tie
            if no winner by row/column/diagonal set winner variable to C and return true
            
            return false if no winner and board not full
    */
    bool TicTacToe::game_over()
    {
        int check_game_over = 0;
        if(check_row_win()|| check_column_win() || check_diagonal_win())
        {
            set_winner();
            //return true
            check_game_over = 1;
        }
        else if(check_board_full() == true)
        {
            winner = "C";
            //return true
            check_game_over = 1;
        }

        return check_game_over;
    
    }




    /* 
        Hw 6:
            first_player func arg val must be X or O
            in func player(priv var)= first_player fun arg
            call clear_board func
    */
    void TicTacToe::start_game(string first_player)
    {
        // validate first_player as X or O
        if (first_player == "X" || first_player == "O")
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

            for(int i=0; i < 9; i+=3)
            {
                cout<<pegs[i]<<"|"<<pegs[i+1]<<"|"<<pegs[i+2]<<"\n";
            }
        }

    /*
        New(HW-7):
            return winner
    */
    string TicTacToe::get_winner()
    {
        //return winner
        return winner;

    }




