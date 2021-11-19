#include <iostream>
using namespace std;

int main()
{
	int tablica[20] = {1,2,3,4,5,6,7,8,9,10};
	for (int i = 10; i < 20; i++)
	{
		tablica[i] = tablica[i - 10];
		cout << tablica[i] << endl;
	}
}