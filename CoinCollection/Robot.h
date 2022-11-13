#pragma once
#include <vector>
#include<iostream>
using namespace std;

class Robot
{
public:

    vector<vector<int>> board;
    Robot(vector<vector<int>> BOARD);
    void SolveCoinCollectionProblem( );
    void PrintBoard();
    void ChangeBoard(vector<vector<int>> BOARD);

private:
    void ResetBoard();
};

