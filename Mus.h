#include <string> 
using namespace std;

class Musician
{
public: 
	string name;
	int price;
	int age;

	Musician();
	Musician(string valueName, int valuePrice, int valueAge);

	~Musician();
}; 
