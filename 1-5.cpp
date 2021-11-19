#include <iostream>
#include <time.h>
#include <cstdlib>
#include <ctime>
using namespace std;
	int main()
{
	const int roz = 10;
	int tab[roz], x =3;
	cout << " ZAD1 " << endl;
	for (int i = 0; i < roz; i++)
	{
		tab[i] = x;
		cout << tab[i] << " ";
		x += 3;
	}
	cout << endl;
	cout << "zad2" << endl;
	
	x = 3;
	for (int i = 0; i < roz; i += 2)
	{
		tab[i] = x;
		cout << tab[i] << " ";
		x += 6;
	}
	cout << endl;
	cout << "zad3" << endl;
	
	const int roz2 = 5;
	int tab1[roz2], a;
	cout << "Podaj a: ";
	cin >> a;
	

	for (int i = roz2; i >= 0; i--)
	{
		tab1[i] = a - x;
		cout << tab[i] << " ";
		x += 5;
	}
	cout << endl;
	cout << "Zad4" << endl;
	srand(time(NULL));
	//int r = (rand() % 73) + -23;
	//cout << r;
	const int roz3 = 10;
	int tab2[roz3];

	for (int i = 0; i > 50; i++)
	{
		tab2[i] = (rand() % 73) + -23;
		cout << tab2[i] << " ";

	}

	
	

	

}
