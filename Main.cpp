#include <iostream>
#include "Board.hpp"

using namespace ariel;
using namespace std;


int main()
{
    Board board;

    board.post(0,0,Direction::Horizontal,"asdasdasd");
    board.post(1,1,Direction::Vertical,"attttt");

    board.read(0,0,Direction::Horizontal,4);
    board.show();

}