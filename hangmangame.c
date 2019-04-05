#include<stdio.h>
#include<conio.h>
#include<string.h>
#define SIZE 50
void main()
{
	printf(" _                                             \n");
	printf("| |                                            \n");
	printf("| |__   __ _ _ __   __ _ _ __ ___   __ _ _ __  \n");
	printf("| '_ \\ / _` | '_ \\ / _` | '_ ` _ \\ / _` | '_ \\ \n");
	printf("| | | | (_| | | | | (_| | | | | | | (_| | | | | \n");
	printf("|_| |_|\\__,_|_| |_|\\__, |_| |_| |_|\\__,_|_| |_| \n");
	printf("                    __/ |                      \n");
	printf("                   |___/  \n");

	char str[SIZE];
	char ch;
	int len,i,k=0,j;
	char arr[SIZE] = {'_','_','_','_' ,'_','_' ,'_','_' ,'_','_' ,'_','_' ,'_','_' ,'_','_' ,'_','_' };
	printf("\n\n\t\t\t ** HANGMAN ** \n");
	printf("\n\t\t\t**************\t\t\t");
	printf("\n\t\t\t..............\n\n\t\t\t");
	printf("Player 1 enter a string\n");
	gets(str);
	len = strlen(str);
	system("CLS");
	for (i = 0; i < len; i++)
		printf("%c ",arr[i]);
	printf("\n");

	for (i = 0; i < len; i++)
	{
		printf("Player 2 Enter a character to found the string\n");
		scanf_s("%c", &ch);
		getchar();
		for (j = 0; j < len; j++)
		{
			if (ch == str[j])
			{
				arr[j] = ch;
				for (k = 0; k < len; k++)
				{
					printf("%c ", arr[k]);
				}
				printf("\n");
			}
		}
	}
	_getch();

}