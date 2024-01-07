#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <Windows.h>

/**
 * this project is an x o game using c only
 * i dont know all  of this code
 * it is a new experice to try
 * wish me luck and engoy the game
 * when i wrote this code only two knew it, me and god, now only god knows :)
 * bug count #1
*/

char square[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

int checkWin();
void drawBoard();

int main()
{
    int player = 1, i, choise;
    char mark; // X, O
    do {
        drawBoard();
        player = (player % 2) ? 1 : 2;
        printf("player %d enter the choice :", player);
        scanf("%d", &choise);
        mark = (player == 1) ? 'X' : 'O';
        if (choise == 1 && square[1] == '1')
            square[1] = mark;
        else if (choise == 2 && square[2] == '2')
            square[2] = mark;
        else if (choise == 3 && square[3] == '3')
            square[3] = mark;
        else if (choise == 4 && square[4] == '4')
            square[4] = mark;
        else if (choise == 5 && square[5] == '5')
            square[5] = mark;
        else if (choise == 6 && square[6] == '6')
            square[6] = mark;
        else if (choise == 7 && square[7] == '7')
            square[7] = mark;
        else if (choise == 8 && square[8] == '8')
            square[8] = mark;
        else if (choise == 9 && square[9] == '9')
            square[9] = mark;
        else{
            printf("invalid output !");
            player--;
            getch();
        }
        i = checkWin();
        player++;
    }while(i == -1);
    drawBoard();
    if (i == 1){
        printf("==>player %d won", --player);
    }
    else{
        printf("==>Game dron");
    }
    getch();
    return 0;
}

//========================================

int checkWin(){
    if (square[1] == square[2] && square[2] == square[3])
        return 1;
    else if (square[4] == square[5] && square[5] == square[6])
        return 1;
    else if (square[7] == square[8] && square[8] == square[9])
        return 1;
    else if (square[1] == square[5] && square[5] == square[9])
        return 1;
    else if (square[3] == square[5] && square[5] == square[7])
        return 1;
    else if (square[1] == square[4] && square[4] == square[7])
        return 1;
    else if (square[2] == square[5] && square[5] == square[8])
        return 1;
    else if (square[3] == square[6] && square[6] == square[9])
        return 1;
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
            square[4] != '4' && square[5] != '5' && square[6] != '6' && 
            square[7] != '7' &&  square[8] != '8' && square[9] != '9')
        return 0;
    else
        return -1; // the game is still in progress
}
// draw the shape of the game which is 9 squares numberd from 1 to 9
// when the player choses a square, his mark replaces the square number
void drawBoard(){
	system("cls");
	printf("\n\n\t Tic Tac Toe \n\n");
	printf("Player1 (X) - Player2 (O) \n\n\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n",square[1],square[2],square[3]);
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n",square[4],square[5],square[6]);
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n",square[7],square[8],square[9]);
	printf("     |     |     \n");	
}
