#include "Robot.h"
#include <vector>
#include<iostream>
#include <algorithm>   

using namespace std;

void Robot::SolveCoinCollectionProblem() { // nepouzil int coinMatrix protoze nevim proc
	vector<vector<int>> temp = board;									// inicializace vektoru
	for (int i = 1; i < board.size(); i++) {							// prucod kazdeho radku  
		temp[i][0] = temp[i - 1][0] + board[i][0];						// inicializace hodnot do temp
		for (int j = 1; j < board[0].size(); j++) {						// pruchod kazdeho sloupce
			temp[i][j] = max(temp[i-1][j], temp[i][j-1]) + board[i][j];	// kontrola maximalniho radu dole/vpravo

		}

	}


	cout << temp[board.size() - 1][board[0].size() - 1] << endl;		// vysledek alg, v zadani nic o return funkci

}
Robot::Robot(vector<vector<int>> BOARD) {
	board = BOARD;														// inicializace vektoru
}

void Robot::PrintBoard() {
	for (int i = 0; i < board.size(); i++) {
		cout << '[' ;

		for (int j = 0; j < board[0].size(); j++) {
			if (board[i][j] == 1) {										// Coin ve vypisu = O
				cout << 'O';
			}
			else {
				cout << 'T';											// prazdne = T
			}

			
		}
			cout << ']' << endl;
	}

}


void Robot::ResetBoard() {
	board.clear();														// clear vektor
}

void Robot::ChangeBoard(vector<vector<int>> BOARD) {					// pro zlepseni kodu
	board = BOARD;
}