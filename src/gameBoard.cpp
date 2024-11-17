#include "gameBoard.hpp"

Square::Square() {
    isEmpty = true; // Init. the square to empty
}

Square::~Square() {}

GameBoard::GameBoard(int r, int c) {
    boardRows = r;
    boardColumns = c;

    board = new Square*[r];
    for (int i = 0; i < r; i++) {
        board[i] = new Square[c];
    }
}

GameBoard::~GameBoard() {
    for (int i = 0; i < boardRows; i++) {
        delete[] board[i];
    }
    
    delete[] board;
}