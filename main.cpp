#include <iostream> 
#include "MusFest.h" 
#include <vector> 

MusicFestival::MusicFestival()
{
	BudgetOfFestival = 10000;
}

MusicFestival::MusicFestival(int valueBudget, vector<Musician> vMusicians)
{
	BudgetOfFestival = valueBudget;

	for (int i = 0; i < vMusicians.size(); i++)
	{
		BudgetUsed += vMusicians[i].Price;

		if (BudgetUsed > BudgetOfFestival)
		{
			BudgetUsed -= vMusicians[i].Price;
			cout << vMusicians[i].Name << " SO EXPENSIVE" << endl;
		}
		else
		{
			musicians.push_back(vMusicians[i]);
		}
	}
}

void MusicFestival::AddMusician(Musician valueNewMusician)
{
	if (BudgetUsed + valueNewMusician.Price < BudgetOfFestival)
	{
		BudgetUsed += valueNewMusician.Price;
		musicians.push_back(valueNewMusician);
	}
	else
	{
		cout << valueNewMusician.Name << " SO EXPENSIVE" << endl;
	}
}

void MusicFestival::RemoveMusician()
{
	BudgetUsed -= musicians.back().Price;
	musicians.pop_back();
}