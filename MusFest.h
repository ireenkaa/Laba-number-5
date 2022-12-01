#include "Mus.h" 
#include <vector> 
using namespace std;

class MusicFestival
{
public:
	vector<Musician> musicians;
	int BudgetOfFestival;
	int BudgetUsed = 0;

	MusicFestival();
	MusicFestival(int valueBudget, vector<Musician> vMusicians);

	void AddMusician(Musician valueNewMusician);
	void RemoveMusician();
}; 
