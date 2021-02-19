/*
Programmer: Javian Cumminsg
Date: December 9, 2020
Descripiton: This program is designed has a rental stytem to collect information on textbook for student union.
*/
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<windows.h>
int main(){//START
	// Declare Local Variables.
	int cnt=0, i, books;
	int cntE=0, cntF=0, cntG=0, cntP=0, cntD=0, totBooks=0;
	char title[25], Isbn[10], condition, sourceBook, title2[25];
	float  purAmt, rentalFee, totFee=0, totRented;
	
	{
        printf("\xdb");
    }
    // Puts screen text in colour.
    system("color a");
    // Prompts to the user the Welcome message and Developers Name.
    printf(" \t_______________________________________________________\n");
    printf("\t|                                                      |\n");
    printf("\t| ** WELCOME TO TEXTBOOK INVENTORY SYSTEM PROJECT **   |\n");
    printf("\n\t|                                                      |\n");
    printf("\t _______________________________________________________\n");
    printf("\t|    		DEVELOPED BY Javian Cummings           |\n");
    printf(" \t______________________________________________________\n");
    printf("\n\t|    *****************************************         |\n");
    printf("\t|\t    ***************************************"       "\t|\n");
    printf("\t|    *****************************************         |\n");
    printf(" \t_______________________________________________________\n");
    // Prompts with welcome message to tell user to enter any key.
    printf("\n\t\tPLEASE ENTER ANY KEY TO CONTINUE");
    // to prompt to the user four dots on the screen.
	for(i=0; i<4; i++)
    {
    	// prompts user dots.
        printf(".");
        Sleep(200);//after printing one . another comes after 0.2 seconds
    }
    // Pause the screen.
    getch();
    system("cls");// Clears the screen and prompts on another screen.
    printf("\n");
	// Prompts user to enter ISBN number for books
    printf(" Enter ISBN Number for the Books:: ");
    fflush(stdin);
    // Takes value entered and stores in variable Isnb.
	scanf("%s", &Isbn);
	//While loop which terminates when user enters 'xxx'.
	while (strcmp(Isbn, "xxx") != 0)
	{
		// Prompts user to enter set number of books in the system.
		printf(" Enter the number of books being entered:: ");
		// Takes value entered and stores in variable books.
	    scanf("%d", &books);
	    if (books > 1){
			// Prompts user to enter Book title.
			printf("\n Enter the Book Title: ");
			// Takes value entered and stores in variable title.
			scanf("%s", title2);
		}
	    // Prompts user to enter Book title.
		printf(" Enter the Book Title: ");
		// Takes value entered and stores in variable title.
		scanf("%s", title);
		// Prompts menu for user to enter.
		printf("\nEnter\n [E]... Excellent\n [F]... Fair\n [G]... Good");
		fflush(stdin);
		// Prompts user to enter condition of the books.
		printf("\n Enter Condition of Book:\n ");
		// Takes value entered and stores in variable condition.
		scanf("%c", &condition);
		// To determine which condition the user entered.
		if (condition == 'E' || condition == 'e'){
			// incrementing by 1 for the variable cntE.
			cntE++;
		}
		else if (condition == 'F' || condition == 'f'){
			// incrementing by 1 for the variable cntF.
			cntF++;	
		}
		else if (condition == 'G' || condition == 'g'){
			// incrementing by 1 for the variable cntG.
			cntG++;
		}
		// Assigning result calculation for variable totBooks.
		totBooks = totBooks + books;
		system("cls");// Clears the screen and prompts on another screen.
		fflush(stdin);
		// Prompts menu for user to enter.
		printf("\n\t\t <<<<<<<<<<<<<<<<<<<<<<<<<\n\t\t\t [D]:: Donated\n\t\t\t ");
		printf("[P]:: Purchase \n\t\t >>>>>>>>>>>>>>>>>>>>>>>>>>\n");
		// Prompts the user to enter selection from menu.
		printf("Enter Type: ");
		// Takes value entered and stores in variable sourceBook.
		scanf("%c", &sourceBook);
		switch (sourceBook){
			case 'P':
			case 'p':
				system("cls");
				fflush(stdin);
				printf("\n\t\t <<<<<<<<< Enter the price of the book >>>>>>>>>\n: ");
	            scanf("%f", &purAmt);
	            // 
				while (purAmt > 3000){
	                    printf("Invalid price range must be less than $3000\n");
	                    printf("Enter the price of the book: ");
	                    scanf("%f", &purAmt);
	                }
	            // incrementing by 1 for the variable cntP. 
	            cntP++;
	            // Assigning result calculation to variable rentalFee.
	        	rentalFee = purAmt * 0.75;
				break;
			case 'D':
	            purAmt = 0;
	            switch (condition)
	            {
	            case 'E':
	            	// Assigning 1000 to variable rentalFee.
	                rentalFee = 1000;
	                break;
	            case 'G' :
	            	// Assigning 800 to variable rentalFee.
	                rentalFee = 800;
	                break;
	            case 'F' :
	            	// Assigning 750 to variable rentalFee.
	                rentalFee = 750;
	                break;
	            }
	            // incrementing by 1 for the variable cnt.
	            cntD++;
	            break;
		}
		system("cls");// Clears the screen and prompts on another screen.
		{
        printf("\xdb");
	    }
	    // Puts screen text in colour.
	    system("color b");
		// Prompts to user the Invoice Symbol.
		printf("\n\t                     ***************************                  ");
    	
		printf("\n\t*********************          INVOICE       *******************");
    	
		printf("\n\t                     ***************************                  ");
		//prompts(" |  ISBN#  | Book Title | Book Condition | Source of Book | Purchase Amount | Rental Fee");
        printf("\n\t ---------------------------------------------------------------\n");
        printf("\t|                                  |                           	|\n");
        printf("\t|                                  |               %s        	|\n", Isbn);
        printf("\t|    ISBN#                         |                           	|\n");
        printf("\t|                                  |                           	|\n");
        printf("\t|                                  |                           	|\n");
        printf("\t|    Book Title                    |               %s         	|\n", title);
        printf("\t|                                  |               %s         	|\n", title2);
        printf("\t|                                  |                           	|\n");
        printf("\t|                                  |                           	|\n");
        printf("\t|    Book Condition                |               %c           	|\n", condition);
        printf("\t|                                  |                           	|\n");
        printf("\t|                                  |                           	|\n");
        printf("\t|    Source of Book                |               %c           	|\n", sourceBook);
        printf("\t|                                  |                           	|\n");
        printf("\t|                                  |                           	|\n");
        printf("\t|    Purchase Amount               |               %.2f        	|\n", purAmt);
        printf("\t|                                  |                           	|\n");
        printf("\t|                                  |                           	|\n");
        printf("\t|    Rental Fee                    |               %.2f     	|\n", rentalFee);
        printf("\t|                                  |                           	|\n");
        printf("\t|                                                              	|\n");
        printf("\t ---------------------------------------------------------------\n");
        printf("\t|                                                              	|\n");
        printf("\t| 	  ** TEXTBOOK INVENTORY SYSTEM PROJECT **              	|\n");
        printf("\t|                                                              	|\n");
        printf("\t ---------------------------------------------------------------");
		getch();
		system("cls");// Clears screen and prompts on another screen.
		{
        printf("\xdb");
	    }
	    // Puts screen text in colour.
	    system("color a");
		// Prompts user to enter another ISBN number for books
		printf(" Enter ISBN Number for the Books:: ");
	    fflush(stdin);
	    // Takes value entered and stores in variable Isnb.
		scanf("%s", &Isbn);
		// Assigning result calculation to variable totRented.
		totRented = totRented + rentalFee;
	}
	// incrementing by 1 for the variable cnt.
	cnt++;
	//Outputs collected books, conditions for a book, /overall total of books inventory and Total rental books fee.
	printf("\n Books collected through donation: ::%d::",cntD);
    printf("\n Books collected through purchase: ::%d::",cntP);
	printf("\n Total number of books logged per condition:[E]::%d::, [F]::%d::, [G]::%d::", cntE, cntF, cntG);
	printf("\n Overall Total number of books in the inventory: %d ", totBooks);
	printf("\n Total expected rental fees: $%.2f", totRented);
	return 0;
}//STOP
