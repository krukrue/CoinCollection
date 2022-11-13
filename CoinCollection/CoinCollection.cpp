#include<iostream>
#include <vector>
#include "Robot.h"
using namespace std;

int main()
{
    vector<vector<int>> vect  = { {1, 1, 0, 0, 1},
                    {1, 1, 0, 0, 1},
                    {1, 1, 0, 0, 1},
                    {1, 1, 0, 0, 1},
                    {1, 1, 0, 0, 1}
    };

    vector<vector<int>> vect1 = { {1, 0, 0, 0, 0},
                {1, 0, 0, 0, 1},
                {1, 0, 0, 0, 0},
                {0, 0, 0, 0, 0},
                {0, 1, 0, 0, 1}
    };

    vector<vector<int>> vect2 = { {1, 0, 0, 1, 0, 1},
            {1, 0, 0, 0, 1, 0},
            {1, 0, 0, 0, 0, 1},
            {0, 0, 0, 0, 0, 1},
            {0, 1, 0, 0, 1, 1}
    };
    vector<vector<int>> vect3 = { {1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 0},
        {1, 1, 1, 1, 1, 1},
        {0, 1, 1, 1, 1, 1},
        {0, 1, 1, 1, 1, 1}
    };


    Robot rob(vect);
    rob.SolveCoinCollectionProblem();
    rob.PrintBoard();
    rob.ChangeBoard(vect1);
    rob.SolveCoinCollectionProblem();
    rob.PrintBoard();
    rob.ChangeBoard(vect2);
    rob.SolveCoinCollectionProblem();
    rob.PrintBoard();
    rob.ChangeBoard(vect3);
    rob.SolveCoinCollectionProblem();
    rob.PrintBoard();



    return 0;
}