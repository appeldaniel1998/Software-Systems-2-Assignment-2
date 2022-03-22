#include "Direction.hpp"
#include <string>

using ariel::Direction;
using namespace std;

namespace ariel
{
    class Notebook
    {
        public: //all functions are implemented in Notebook.cpp
            void write(int page, int row, int col, Direction dir, string inString);
            string read(int page, int row, int col, Direction dir, int length);
            void erase(int page, int row, int col, Direction dir, int length);
            void show(int pageNum);
    };
}