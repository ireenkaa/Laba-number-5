#include <string> 
using namespace std;

class Musician
{
public: 
	string Name;
	int Price;
	int Age;

	Musician();
	Musician(string valueName, int valuePrice, int valueAge);

	~Musician();
}; 
