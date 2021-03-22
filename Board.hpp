#include <string>
#include "Direction.hpp"
using namespace std;
namespace ariel
{
  class Board{
      public:
      
      void post(unsigned int row,unsigned int col,Direction direction,string str);
      static string read(unsigned int row,unsigned int col,Direction direction,int length);
      void show();

  };  
    
} 

