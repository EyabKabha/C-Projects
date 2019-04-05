#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include <ctype.h>
#define N 3
void main()
{
	int mat[N][N] = { {1,2,3},{4,5,6},{7,8,9}}; //matrix who help to set X or O in the correct place
	int i, j, num;
	int cnt = 0;						// define Variables 
	char ch, player1, player2,ch2='c';		    // define Variables 
	char temp;
	int XO[N][N] = { {' ',' ',' ' },	// Empty Matrix to set X Or O 
					 {' ',' ',' ' },
					 {' ',' ',' ' } };
	puts("=======================");
	printf("Player 1 enter your choice X or O\n");  
	scanf_s("\n%c", &ch); // we get from the user X or O 
	if (islower(ch))
	{
		ch=toupper(ch);
	}
	system("cls"); // clear the window
	if (ch != 'X' && ch != 'O') // we validate to get just or X or O from the user 
	{
		printf("Error try again\n"); // if not X or O we printing to the user to try again
		main(); 
	}
	if (ch == 'X' || ch == 'O') // check if the input X as player 1 got X and player2 got O
		if (ch == 'X')
		{
			player1 = 'X';
			player2 = 'O';
		}
	if (ch == 'O' || ch == 'X') // check if the input O as player 1 got O and player2 got X
		if (ch == 'O')
		{
			player1 = 'O';
			player2 = 'X';
		}
	printf("Player 1 got [%c]\n", player1);  // printing what player1 got 
	printf("Player 2 got [%c]\n", player2);  // printing what player2 got 
	puts("=======================");

	for (i = 0; i < N; i++)           // printing the Matrix who Contains the numbers\n
	{
		for (j = 0; j < N; j++)
		{
			printf("%4d", mat[i][j]);
		}
		printf("\n");
	}

	puts("=======================");	// Some Design
	puts("==== Here We Start ====");
	puts("=======================");
	while (1) // loop endless
	{

		printf("Player 1 (%c) \n", player1); // Player 1 (X)
		printf("Enter the number you want\n");
		scanf_s("%d", &num);					  // get from player x where to put here place in the matrix 
		cnt += 1;
		if (num == 1 && XO[0][0] == ' ')         // check if the num equal to one and if the place is empty
			XO[0][0] = player1;					// If the condition is ok we put the x in the place of the empty matrix
		else if (num == 2 && XO[0][1] == ' ')
			XO[0][1] = player1;
		else if (num == 3 && XO[0][2] == ' ')
			XO[0][2] = player1;
		else if (num == 4 && XO[1][0] == ' ')
			XO[1][0] = player1;
		else if (num == 5 && XO[1][1] == ' ')
			XO[1][1] = player1;
		else if (num == 6 && XO[1][2] == ' ')
			XO[1][2] = player1;
		else if (num == 7 && XO[2][0] == ' ')
			XO[2][0] = player1;
		else if (num == 8 && XO[2][1] == ' ')
			XO[2][1] = player1;
		else if (num == 9 && XO[2][2] == ' ')
			XO[2][2] = player1;
		else            // if the number not bettween (1-9) and if the place is contain X we print Error choice
			printf("Error choice\n");
		//printing the matrix
		for (i = 0; i < N; i++)
		{
			for (j = 0; j < N; j++)
			{
				printf("\t|%c|", XO[i][j]);
			}
			printf("\n");
		}
		if (cnt == 9) {					 // check if the matrix is full and we don't have one is won
			printf("No One Win!!\n");
			printf("Do you want to play again ?! (y or n)\n"); // ask the player if you want to play again
			temp = _getch();								   // we get from the user 
			if (isupper(temp))
				temp = tolower(temp);
			else if (temp == 'y') // check if he we want to play again
				main(); // if yes we return the main
			else if (temp == 'n') { // if no we print the program exit and we break the loop
				printf("Program Exit\n");
			}
			break;
		}
		// Checking all the places that could be a victory
		if (XO[0][0] == player1 && XO[0][1] == player1 && XO[0][2] == player1 ||
			XO[1][0] == player1 && XO[1][1] == player1 && XO[1][2] == player1 ||
			XO[2][0] == player1 && XO[2][1] == player1 && XO[2][2] == player1 ||
			XO[0][0] == player1 && XO[1][1] == player1 && XO[2][2] == player1 ||
			XO[0][2] == player1 && XO[1][1] == player1 && XO[2][0] == player1 ||
			XO[0][2] == player1 && XO[1][2] == player1 && XO[2][2] == player1 ||
			XO[0][1] == player1 && XO[1][1] == player1 && XO[2][1] == player1 ||
			XO[0][0] == player1 && XO[1][0] == player1 && XO[2][0] == player1) {
			printf("Player 1 is won\n"); // If the condition is true we print that player is win and we break the loop and exit
			printf("Do you want to play again ?! (y or n)\n"); // ask the player if you want to play again
			temp = _getch(); // we get from the user 
			if (isupper(temp))
				temp = tolower(temp);
			else if(temp=='y') // check if he we want to play again
					main(); // if yes we return the main
				else if (temp == 'n') { // if no we print the program exit and we break the loop
					printf("Program Exit\n");
					break;
				}
		}
		printf("Player 2 (%c)\n", player2);
		printf("Enter the number you want \n");
		scanf_s("%d", &num);                    // get from player O where to put here place in the matrix 
		cnt += 1;
		if (num == 1 && XO[0][0] == ' ')        // check if the num equal to one and if the place is empty
			XO[0][0] = player2;                 // If the condition is ok we put the O in the place of the empty matrix
		else if (num == 2 && XO[0][1] == ' ')
			XO[0][1] = player2;
		else if (num == 3 && XO[0][2] == ' ')
			XO[0][2] = player2;
		else if (num == 4 && XO[1][0] == ' ')
			XO[1][0] = player2;
		else if (num == 5 && XO[1][1] == ' ')
			XO[1][1] = player2;
		else if (num == 6 && XO[1][2] == ' ')
			XO[1][2] = player2;
		else if (num == 7 && XO[2][0] == ' ')
			XO[2][0] = player2;
		else if (num == 8 && XO[2][1] == ' ')
			XO[2][1] = player2;
		else if (num == 9 && XO[2][2] == ' ')
			XO[2][2] = player2;
		else
			printf("Error choice\n");
		//printing the matrix
		for (i = 0; i < N; i++)
		{
			for (j = 0; j < N; j++)
			{
				printf("\t|%c|", XO[i][j]);
			}
			printf("\n");
		}
		// Checking all the places that could be a victory
		if (XO[0][0] == player2 && XO[0][1] == player2 && XO[0][2] == player2 ||
			XO[1][0] == player2 && XO[1][1] == player2 && XO[1][2] == player2 ||
			XO[2][0] == player2 && XO[2][1] == player2 && XO[2][2] == player2 ||
			XO[0][0] == player2 && XO[1][1] == player2 && XO[2][2] == player2 ||
			XO[0][2] == player2 && XO[1][1] == player2 && XO[2][0] == player2 ||
			XO[0][2] == player2 && XO[1][2] == player2 && XO[2][2] == player2 ||
			XO[0][1] == player2 && XO[1][1] == player2 && XO[2][1] == player2 ||
			XO[0][0] == player2 && XO[1][0] == player2 && XO[2][0] == player2) {
			printf("Player 2 is won\n"); // If the condition is true we print that player is win and we break the loop and exit
			printf("Do you want to play again ?! (y or n)\n"); // ask the player if you want to play again
			temp = _getch(); // we get from the user 
			if (isupper(temp))
				temp = tolower(temp);
			else if (temp == 'y') // check if he we want to play again
				main(); // if yes we return the main
			else if (temp == 'n') { // if no we print the program exit and we break the loop
				printf("Program Exit\n");
				break;
			}
		}
	}
	getchar();
	_getch();
}