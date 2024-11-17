#pragma once

struct Square {
    Square();
    ~Square();
    bool isEmpty;
};

class GameBoard {
public:
    GameBoard(int h, int w);
    ~GameBoard();
private:
    int boardRows;
    int boardColumns;
    Square** board;
};