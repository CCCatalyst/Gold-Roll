#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Declarations for the gamemodes of GoldRoll*/

void GameEasy(int credits, int gold);

void GameNormal(int credits, int gold);

void GameHard(int credits, int gold);

int main()
{

	srand(time(NULL)); 
	int Difficulty; //Number represents difficulty, 1 is easy, 2 is normal, 3 is hard
	int credits; //init for the credits variable
	int gold = 0; //start off at 0 gold, gets added upon within the gamemodes

	printf("Please enter in a difficulty: 1 for easy, 2 for medium, 3 for hard: ");
	scanf_s("%d", &Difficulty); //takes user input for Difficulty int
	
	if (Difficulty == 1){
		printf("You chose easy: Reach 10000 gold before you run out of credits!\n");
		credits = 10000;
		GameEasy(credits, gold); //GameEasy function is entered
	}

	if (Difficulty == 2) {
		printf("You chose normal: Reach 12000 gold before you run out of credits!\n");
		credits = 8000;
		GameNormal(credits, gold); //GameNormal function is entered
	}

	if (Difficulty == 3) {
		printf("You chose hard: Reach 14000 gold before you run out of credits!\n");
		credits = 5000;
		GameHard(credits, gold); //GameHard function is entered
	}

	//Prints and proceeds to return 0 if the input is not 1, 2, or 3
	else {
		printf("invalid input, exiting..."); 
	}
	return 0;

}
0
void GameEasy(int credits, int gold) 
{
	int userinput; //init for user input

	//while loop that always checks for credits to be a number above 0
	while (credits > 0)  
	{
		
		printf("How many credits will be put in?: ");
		scanf_s("%d", &userinput); // Prompts user for userinput variable

		//Takes away 100 credits and adds a random amount of gold up to 200: Safe but low payout
		if (userinput == 100) 
		{
			credits = credits - 100;
			gold = gold + rand() % 200; 
			 
			printf("You currently have this much gold!:%d ",gold); //Displays current gold
			printf("You currently have this much credits!:%d\n ",credits); //Displays current credits

		}

		//Takes away 500 credits and adds a random amount of gold up to 1000: Middle payout, but with a bit of risk
		if (userinput == 500) 
		{
			credits = credits - 500;
			gold = gold + rand() % 1000;

			printf("You currently have this much gold!:%d ",gold); //Displays current gold
			printf("You currently have this much credits!:%d\n ",credits); //Displays current credits
		}

		
		//Takes away 1000 credits and adds a random amount of gold up to 1000: Chance to almost double payout, but bigger risk
		if (userinput == 1000) 
		{
			credits = credits - 1000;
			gold = gold + rand() % 2000;

			printf("You currently have this much gold!:%d ",gold); //Displays current gold
			printf("You currently have this much credits!:%d\n ",credits); //Displays current credits
		}
	}
	
	//Checks gold after loop is finished. If the payout is enough, a win message is displayed. Otherwise, a lose message is displayed
	if (gold > 10000) { 
		printf("You win!");
	}
	else {
		printf("You lose"); 
	}
	
	return;
}

void GameNormal(int credits, int gold) 
{
	int userinput; //init for user input

	//while loop that always checks for credits to be a number above 0
	while (credits > 0)  
	{

		printf("How many credits will be put in?: ");
		scanf_s("%d", &userinput); // Prompts user for userinput variable

		//Takes away 100 credits and adds a random amount of gold up to 200: Safe but low payout
		if (userinput == 100) 
		{
			credits = credits - 100;
			gold = gold + rand() % 200;

			printf("You currently have this much gold!:%d ", gold); //Displays current gold
			printf("You currently have this much credits!:%d\n ", credits); //Displays current credits

		}
		//Takes away 500 credits and adds a random amount of gold up to 1000: Middle payout, but with a bit of risk
		if (userinput == 500) 
		{
			credits = credits - 500;
			gold = gold + rand() % 1000;

			printf("You currently have this much gold!:%d ", gold); //Displays current gold
			printf("You currently have this much credits!:%d\n ", credits); //Displays current credits
		}

		//Takes away 1000 credits and adds a random amount of gold up to 1000: Chance to almost double payout, but bigger risk
		if (userinput == 1000) 
		{
			credits = credits - 1000;
			gold = gold + rand() % 2000;

			printf("You currently have this much gold!:%d ", gold); //Displays current gold
			printf("You currently have this much credits!:%d\n ", credits); //Displays current credits
		}
	}

	//Checks gold after loop is finished. If the payout is enough, a win message is displayed. Otherwise, a lose message is displayed
	if (gold > 12000) { 
		printf("You win!");
	}
	else {
		printf("You lose"); 
	}

	return;
}

void GameHard(int credits, int gold) 
{
	int userinput; //init for user input

	//while loop that always checks for credits to be a number above 0
	while (credits > 0) 
	{

		printf("How many credits will be put in?: ");
		scanf_s("%d", &userinput); // Prompts user for userinput variable

		//Takes away 100 credits and adds a random amount of gold up to 200: Safe but low payout
		if (userinput == 100) 
		{
			credits = credits - 100;
			gold = gold + rand() % 200;

			printf("You currently have this much gold!:%d ", gold); //Displays current gold
			printf("You currently have this much credits!:%d\n ", credits); //Displays current credits

		}

		//Takes away 500 credits and adds a random amount of gold up to 1000: Middle payout, but with a bit of risk
		if (userinput == 500) 
		{
			credits = credits - 500;
			gold = gold + rand() % 1000;

			printf("You currently have this much gold!:%d ", gold); //Displays current gold
			printf("You currently have this much credits!:%d\n ", credits); //Displays current credits
		}

		//Takes away 1000 credits and adds a random amount of gold up to 1000: Chance to almost double payout, but bigger risk
		if (userinput == 1000)
		{
			credits = credits - 1000;
			gold = gold + rand() % 2000;

			printf("You currently have this much gold!:%d ", gold); //Displays current gold
			printf("You currently have this much credits!:%d\n ", credits); //Displays current credits
		}
	}

	//Checks gold after loop is finished. If the payout is enough, a win message is displayed. Otherwise, a lose message is displayed
	if (gold > 14000) { 
		printf("You win!"); 
	}
	else {
		printf("You lose");
	}

	return;
}
