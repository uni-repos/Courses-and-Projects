#include "All_headers.h"
int menu(void){
	char enteredWord[FIFTEEN];
	int flag = ZERO;
	printf("\n\t\t\tPowered by J. Alipanah\n\nYou can type words below and press enter.\n\n\t1.help: For learning more about game and how to play.\n\t2.start: For Starting the game\n\t3.exit: To close the program.\n\nEnter here: ");
	while(ONE){ /* An infinit loop that continues until receiving a valid input */
			scanf("%s" , enteredWord);
		if(!strcmp(enteredWord , "help") || !strcmp(enteredWord , "start") || !strcmp(enteredWord , "exit")){
		while(!strcmp(enteredWord , "help")){
			printf(" There is one table in the game including numbers.\n At first you see two numbers. Each one can be 2 or 4.\n There is a special area for typing six words:\n\tup: For shifting numbers up.\n\tdown: For shifting down\n\tright: For shifting right\n\tleft: For shifting left\n\tpause: For displaying menu again\n\texit: To close the game\n When you shift the table, summation accurs between equal digits.\n The point is reaching 2048. That is why its name is 2048!\n Have fun with this amazing game.\n\nYou can type words below and press enter.\n\t1.help: For learning more about game and how to play.\n\t2.start: For Starting or resuming the game\n\t3.exit: To close the program.\nEnter here: ");
			scanf("%s" , enteredWord);
		}
		if(!strcmp(enteredWord , "start"))
			flag = ONE;
		else if(!strcmp(enteredWord , "exit"))
			flag = ZERO;
		else{
			printf("\n Wrong input!\n Enter here again: ");
			continue;
		}
		break;
		}
		else
			printf("\n Wrong input!\n Enter here again: ");
	}
	return flag;
}