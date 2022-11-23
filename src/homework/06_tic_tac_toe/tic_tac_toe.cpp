//cpp
#include "tic_tac_toe.h"

using std::cin;
using std::cout;
using std::string;
using std::vector;

//private:

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

    void TicTacToe::clear_board()
    {
        for (int i = 0; i<pegs.size(); i++ )
        {
            pegs[i] = " ";
        }
    }

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

    bool TicTacToe::check_row_win()
    {
        int check_row_win = 0;
        int i = 0;
        do
        {
            
            if(pegs[i] + pegs[i+1] + pegs[i+2] == "XXX" || pegs[i] + pegs[i+1] + pegs[i+2] == "OOO")
            {
                i = 9;
                check_row_win = 1;
            }   

            i+=3;
        }while(i<9);
        return check_row_win;
    }

    bool TicTacToe::check_diagonal_win()
    {
        int check_diagonal_win = 0;

        for(int i = 0, x = 4; i<4; i+=2, x-=2)
        {
            if(pegs[i] + pegs[i+x] + pegs[i+x*2] == "XXX" || pegs[i] + pegs[i+x] + pegs[i+x*2] == "OOO")
            {
                
                check_diagonal_win = 1;
            }
        }
        return check_diagonal_win;
    }

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
    
//friend 
    std::ostream& operator<<(std::ostream& out, const TicTacToe& game)
    {
        out<<"\n";
        
            //iterate vector of string pegs:

            for(int i=0; i < 9; i+=3)
            {
                out<<game.pegs[i]<<"|"<<game.pegs[i+1]<<"|"<<game.pegs[i+2]<<"\n";
            }
        
        return out;
    }

    std::istream& operator>>(std::istream& in, TicTacToe& game)
    {
        int position;
		cout<<"\n"<<"Which position (1-9) would you like to place your mark: ";

		in>>position;

		if(position<1 || position>9)
		{
			cout<<"Error: Position must be between 1 and 9";
		}

		else
		{
		    game.mark_board(position);
		}
        return in;
    }











//public:
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

    string TicTacToe::get_winner()
    {
        //return winner
        return winner;

    }






