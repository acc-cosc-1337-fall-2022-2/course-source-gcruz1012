#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test first player set to X")
{
	/*
		create instance of TicTacToe
		call start game func with arg X
		verify that get_player funct returns X
	*/



	TicTacToe game0;



	game0.start_game("X");



	REQUIRE(game0.get_player() == "X");


}

TEST_CASE("Test first player set to O")
{
	/*
		create instance of TicTacToe
		call start game func with arg O
		verify that get_player funct returns O
	*/

	TicTacToe game1;

	game1.start_game("O");

	REQUIRE(game1.get_player() == "O");
}



TEST_CASE("Test game over if 9 slots are selected")
{
	/*
		create instance of TicTacToe
		call start game func 
		call mark board 9 times with positions 1-9
		verify that winner is C
	*/


	TicTacToe game2;

	game2.start_game("X");



	game2.mark_board(1);
	REQUIRE(game2.game_over() == false);

	game2.mark_board(5);
	REQUIRE(game2.game_over() == false);

	game2.mark_board(3);
	REQUIRE(game2.game_over() == false);

	game2.mark_board(2);
	REQUIRE(game2.game_over() == false);

	game2.mark_board(8);
	REQUIRE(game2.game_over() == false);

	game2.mark_board(7);
	REQUIRE(game2.game_over() == false);

	game2.mark_board(9);
	REQUIRE(game2.game_over() == false);

	game2.mark_board(6);
	REQUIRE(game2.game_over() == false);

	game2.mark_board(4);
	REQUIRE(game2.game_over() == true);

	REQUIRE(game2.get_winner() == "C");
	
	
}

TEST_CASE("Test win by first column")
{
	/*
		create instance of TicTacToe
		call start game func arg X
		set positions for first player X to 1,4,7
		pick other positions for O
		verify that game over func is true
	*/

	TicTacToe game3;
	
	game3.start_game("X");

	game3.mark_board(1);
	REQUIRE(game3.game_over() == false);

	game3.mark_board(2);
	REQUIRE(game3.game_over() == false);

	game3.mark_board(4);
	REQUIRE(game3.game_over() == false);

	game3.mark_board(3);
	REQUIRE(game3.game_over() == false);
	
	game3.mark_board(7);
	

	REQUIRE(game3.game_over() == true);
	
}

TEST_CASE("Test win by second column")
{
	/*
		create instance of TicTacToe
		call start game func arg X
		set positions for first player X to 2,5,8
		pick other positions for O
		verify that game over func is true
	*/
	TicTacToe game4;
	
	game4.start_game("X");

	game4.mark_board(2);
	REQUIRE(game4.game_over() == false);

	game4.mark_board(1);
	REQUIRE(game4.game_over() == false);

	game4.mark_board(5);
	REQUIRE(game4.game_over() == false);

	game4.mark_board(4);
	REQUIRE(game4.game_over() == false);

	game4.mark_board(8);

	REQUIRE(game4.game_over() == true);
}

TEST_CASE("Test win by third column")
{
	/*
		create instance of TicTacToe
		call start game func arg X
		set positions for first player X to 3,6,9
		pick other positions for O
		verify that game over func is true
	*/

	TicTacToe game5;
	
	game5.start_game("X");

	game5.mark_board(3);
	REQUIRE(game5.game_over() == false);

	game5.mark_board(1);
	REQUIRE(game5.game_over() == false);

	game5.mark_board(6);
	REQUIRE(game5.game_over() == false);

	game5.mark_board(2);
	REQUIRE(game5.game_over() == false);

	game5.mark_board(9);

	REQUIRE(game5.game_over() == true);
}

TEST_CASE("Test win by first row")
{
	/*
		create instance of TicTacToe
		call start game func arg X
		set positions for first player X to 1,2,3
		pick other positions for O
		verify that game over func is true
	*/

	TicTacToe game6;
	
	game6.start_game("X");

	game6.mark_board(1);
	REQUIRE(game6.game_over() == false);

	game6.mark_board(4);
	REQUIRE(game6.game_over() == false);

	game6.mark_board(2);
	REQUIRE(game6.game_over() == false);

	game6.mark_board(5);
	REQUIRE(game6.game_over() == false);

	game6.mark_board(3);

	REQUIRE(game6.game_over() == true);
}

TEST_CASE("Test win by second row")
{
	/*
		create instance of TicTacToe
		call start game func arg X
		set positions for first player X to 4,5,6
		pick other positions for O
		verify that game over func is true
	*/

	TicTacToe game7;
	
	game7.start_game("X");

	game7.mark_board(4);
	REQUIRE(game7.game_over() == false);

	game7.mark_board(1);
	REQUIRE(game7.game_over() == false);

	game7.mark_board(5);
	REQUIRE(game7.game_over() == false);

	game7.mark_board(2);
	REQUIRE(game7.game_over() == false);

	game7.mark_board(6);

	REQUIRE(game7.game_over() == true);
}

TEST_CASE("Test win by third row")
{
	/*
		create instance of TicTacToe
		call start game func arg X
		set positions for first player X to 7,8,9
		pick other positions for O
		verify that game over func is true
	*/

	TicTacToe game8;
	
	game8.start_game("X");

	game8.mark_board(7);
	REQUIRE(game8.game_over() == false);

	game8.mark_board(1);
	REQUIRE(game8.game_over() == false);

	game8.mark_board(8);
	REQUIRE(game8.game_over() == false);

	game8.mark_board(2);
	REQUIRE(game8.game_over() == false);

	game8.mark_board(9);

	REQUIRE(game8.game_over() == true);
}

TEST_CASE("Test win diagonally from top left")
{
	/*
		create instance of TicTacToe
		call start game func arg X
		set positions for first player X to 1,5,9
		pick other positions for O
		verify that game over func is true
	*/

	TicTacToe game9;
	
	game9.start_game("X");

	game9.mark_board(1);
	REQUIRE(game9.game_over() == false);

	game9.mark_board(2);
	REQUIRE(game9.game_over() == false);

	game9.mark_board(5);
	REQUIRE(game9.game_over() == false);

	game9.mark_board(3);
	REQUIRE(game9.game_over() == false);

	game9.mark_board(9);

	REQUIRE(game9.game_over() == true);
}

TEST_CASE("Test win diagonally from bottom left")
{
	/*
		create instance of TicTacToe
		call start game func arg X
		set positions for first player X to 7,5,3
		pick other positions for O
		verify that game over func is true
	*/

	TicTacToe game10;
	
	game10.start_game("X");

	game10.mark_board(7);
	REQUIRE(game10.game_over() == false);

	game10.mark_board(1);
	REQUIRE(game10.game_over() == false);

	game10.mark_board(5);
	REQUIRE(game10.game_over() == false);

	game10.mark_board(2);
	REQUIRE(game10.game_over() == false);

	game10.mark_board(3);

	REQUIRE(game10.game_over() == true);
}