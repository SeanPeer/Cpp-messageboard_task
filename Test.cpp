#include "Board.hpp"
#include "Direction.hpp"
#include "doctest.h"
#include <string>
#include <algorithm>

using namespace std;
using namespace ariel;


TEST_CASE("empty board"){
    Board board;

    //reading horizontaly
    CHECK(board.read(0,0,Direction :: Horizontal,1) == "_");
    CHECK(board.read(0,0,Direction :: Horizontal,5) == "_____");
    CHECK(board.read(0,0,Direction :: Horizontal,10) == "__________");

    //reading verticaly
    CHECK(board.read(100,100,Direction :: Vertical,1) == "_");
    CHECK(board.read(100,100,Direction :: Vertical,5) == "_____");
}

TEST_CASE("Board assighnment"){
    Board board1;

    board1.post(0,0,Direction :: Horizontal,"board");
    board1.post(1,2,Direction :: Vertical,"ssighnment");


    //reading horizontaly
    CHECK(board1.read(0,0,Direction :: Horizontal,1) == "b");
    CHECK(board1.read(0,1,Direction :: Horizontal,1) == "o");
    CHECK(board1.read(0,0,Direction :: Horizontal,5) == "board");
    CHECK(board1.read(0,2,Direction :: Horizontal,5) == "ard__");
    CHECK(board1.read(0,0,Direction :: Horizontal,10) == "board_____");


    //reading verticaly
    CHECK(board1.read(1,2,Direction :: Vertical,1) == "s");
    CHECK(board1.read(0,2,Direction :: Vertical,1) == "a");
    CHECK(board1.read(0,2,Direction :: Vertical,11) == "assighnment");
    CHECK(board1.read(1,2,Direction :: Vertical,10) == "ssighnment");
    CHECK(board1.read(6,2,Direction :: Vertical,4) == "ment");

    board1.post(1,3,Direction :: Horizontal,"uper-man");

    CHECK(board1.read(1,3,Direction :: Horizontal,1) == "u");
    CHECK(board1.read(1,4,Direction :: Horizontal,1) == "p");
    CHECK(board1.read(1,2,Direction :: Horizontal,5) == "super");
    CHECK(board1.read(1,2,Direction :: Horizontal,10) == "super-man_");
    CHECK(board1.read(1,2,Direction :: Horizontal,15) == "super-man______");

}
