#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <ctime>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);
void emptyBoard(string gameBoard[], int boardDimensions[]);

void getControl(int control[]);

void initControl(int control[]);

void insert(string character, int cordinates[], string gameBoard[], int boardDimensions[]);

void randomCords(int apple[], int boardDimensions[], int gameStep);

void render(int boardDimensions[], string gameBoard[]);

void snakeMove(int snake[], int control[]);

ifstream reader;
ofstream writer;

int main() {
    // board dimension
    int boardDimensions[2];

    boardDimensions[0] = 16;
    boardDimensions[1] = 32;
    string gameBoard[boardDimensions[0]];

    // snake start
    int snake[2];

    snake[0] = 4;
    snake[1] = 1;

    // apple
    int apple[2];

    // control init
    int control[2];

    // game step
    int gameStep;

    gameStep = 0;

    // timestep
    int i, n, timestep;

    timestep = 500000000;
    for (gameStep = 0; gameStep <= 24000; gameStep++) {
        emptyBoard(gameBoard, boardDimensions);
        getControl(control);
        snakeMove(snake, control);
        randomCords(apple, boardDimensions, gameStep);
        insert("0", apple, gameBoard, boardDimensions);
        insert("X", snake, gameBoard, boardDimensions);
        render(boardDimensions, gameBoard);
        for (n = 0; n <= timestep; n++) {
        }
    }
    return 0;
}

void emptyBoard(string gameBoard[], int boardDimensions[]) {
    string temp;
    int i, n;

    for (i = 0; i <= boardDimensions[0] - 1; i++) {
        temp = "|";
        for (n = 0; n <= boardDimensions[1]; n++) {
            temp = temp + " ";
        }
        temp = temp + "|";
        gameBoard[i] = temp;
    }
}

void getControl(int control[]) {
    reader.open("control.txt");
    string controlString, controlChar;

    reader >> controlString;
    controlChar = controlString[controlString.length() - 1];
    reader.close();
    if (controlChar == "w") {
        control[0] = 0;
        control[1] = (int) (-1);
    } else {
        if (controlChar == "a") {
            control[0] = (int) (-1);
            control[1] = 0;
        } else {
            if (controlChar == "s") {
                control[0] = 0;
                control[1] = 1;
            } else {
                if (controlChar == "d") {
                    control[0] = 1;
                    control[1] = 0;
                }
            }
        }
    }
}

void initControl(int control[]) {
}

void insert(string character, int cordinates[], string gameBoard[], int boardDimensions[]) {
    string temp;

    temp = "";
    int i;

    for (i = 0; i <= boardDimensions[1] + 2; i++) {
        if (i == cordinates[0]) {
            temp = temp + character;
        } else {
            temp = temp + gameBoard[cordinates[1]][i];
        }
    }
    gameBoard[cordinates[1]] = temp;
}

void randomCords(int apple[], int boardDimensions[], int gameStep) {
    if (gameStep % 32 == 0) {
        apple[0] = rand() % boardDimensions[1];
        apple[1] = rand() % boardDimensions[0];
        cout << apple[0] << apple[1] << endl;
    }
}

void render(int boardDimensions[], string gameBoard[]) {
    int i;
    string border;

    border = "+";
    for (i = 0; i <= boardDimensions[1]; i++) {
        border = border + "-";
    }
    border = border + "+";

    // horizontal border
    writer.open("Display.md");
    writer << border  << endl;
    for (i = 0; i <= boardDimensions[0] - 1; i++) {
        writer << gameBoard[i]  << endl;
    }
    writer << border  << endl;
    writer.close();
}

void snakeMove(int snake[], int control[]) {
    snake[0] = snake[0] + control[0] * 2;
    snake[1] = snake[1] + control[1];
}

// The following implements type conversion functions.
string toString (double value) { //int also
    stringstream temp;
    temp << value;
    return temp.str();
}

int toInt (string text) {
    return atoi(text.c_str());
}

double toDouble (string text) {
    return atof(text.c_str());
}
