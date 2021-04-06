#include <string>
#include <iostream>
#include "Direction.hpp"
#include "Board.hpp"
using namespace std;

namespace ariel
{

    void Board ::post(unsigned int row, unsigned int col, Direction direction, string str)
    {
        if (direction == Direction ::Horizontal)
        {
            uplimit_col += unsigned(str.length());
            downlimit_col = min(downlimit_col,col); 
            for (unsigned int i = 0; i < str.length(); i++)
            {
                board[row][col] = str.at(i);
                col++;
            }
        }
        if (direction == Direction ::Vertical)
        {
            uplimit_row += unsigned(str.length());
            downlimit_row = min(downlimit_row,row);
            for (unsigned int i = 0; i < str.length(); i++)
            {
                board[row][col] = str.at(i);
                row++;
            }
        }

    }

    string Board ::read(unsigned int row, unsigned int col, Direction direction, unsigned int length)
    {

        string message;

        for(int i = 0;i < length;i++){
            if(board.find(row) == board.end() || board[row].find(col) == board[row].end())
            {
                message.append("_");
            }
            else{
                message.append(board[row][col]);
            }

            if (direction == Direction::Horizontal)
            {
                col++;
            }
            if (direction == Direction::Vertical)
            {
                row++;
            }
        }

        return message;
    }

    void Board ::show()
    {
        for (unsigned int i = 0; i < uplimit_col; i++)
        {
            for (unsigned int j = 0 ; j < uplimit_row; j++)
            {
               cout << board[i][j] << " ";
            }
            cout << "\n";
        }
        
    }

}