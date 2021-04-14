#include <iostream>

using namespace std;

void play()
{	
	system("COLOR 79");
	srand((unsigned)time(0));
	int diceNumber;
	diceNumber = (rand() % 6) + 1;
	cout << "Your dice number is " << diceNumber << '!' << "\n";
}

void playAgain()
{
	system("COLOR 79");
	char null;
	
	cout << "\nType R to roll ... ";
	cin >> null;	

	play();
	
	char yn2;
	
	cout << "\nDo you want to roll again ? (Y/N): ";
	cin >> yn2;

	if (yn2 == 'y' || yn2 == 'Y')
	{
		playAgain();
	}
	else
	{
		cout << "\nEnding program...\n";
	}
}

int main()
{	
	system("COLOR 79");

	char yn;
	cout << "Welcome to Dice Roll Game!\n\n";
	cout << "Do you want roll the dice? (Y/N): ";
	cin >> yn;
	
	if (yn == 'y' || yn == 'Y')
	{
		play();

		char yn2;

		cout << "\nDo you want to roll again ? (Y/N): ";
		cin >> yn2;
		
		if (yn2 == 'y' || yn2 == 'Y')
		{
			playAgain();
		}
	}
	else if (yn == 'n' || yn == 'N')
	{
		cout << "\nEnding program...\n";
	}
	exit(0);
}
