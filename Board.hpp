#include <string>
#include <map>
#include "Direction.hpp"
using namespace std;
namespace ariel
{
  class Board{
    private:
    unsigned int uplimit_row = 0;
    unsigned int uplimit_col = 0;
    unsigned int downlimit_row = INT8_MAX;
    unsigned int downlimit_col = INT8_MAX;

    std::map<unsigned int,std::map<unsigned int,string>> board;

      public:
      
      void post(unsigned int row,unsigned int col,Direction direction,string str);
      string read(unsigned int row,unsigned int col,Direction direction,unsigned int length);
      void show();

  };  
    
} 

