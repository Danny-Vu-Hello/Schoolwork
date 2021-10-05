//Danny Vu
//Luis Ortiz Baca
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{

	// Generate an index randomly
    //YOUR CODE
	srand(time(0));

	const int NUMBER_OF_CARDS = 52;
	int deck[NUMBER_OF_CARDS];
	string suits[] = {"Spades", "Hearts", "Diamonds", "Clubs"};
	string ranks[] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};
	
	// Initialize cards

	for (int i = 0; i < NUMBER_OF_CARDS; i++)
	{
		deck[i] = i;
	}

	// Shuffle the cards
	//YOUR CODE
	int tempDeck[NUMBER_OF_CARDS];
	for (int i = 0; i < NUMBER_OF_CARDS; i++)
	{
		tempDeck[i] = deck[i];
	}
	int temp;
	for (int i = 0; i < NUMBER_OF_CARDS; i++)
	{
		int random = rand() % 52;
		if (deck[i]!=tempDeck[random]&&tempDeck[random]!=52)
		{
			temp = tempDeck[random];
			deck[i] = temp;
			tempDeck[random] == 52;
		}
		else
		{
			i--;
		}
	}

	// Display the first four cards
	//YOUR CODE
	for (int i = 0; i < 4;i++)
	{
		cout << ranks[deck[i]%13] << suits[deck[i]/13] << " " << flush;
	}
	
	return 0;
}
