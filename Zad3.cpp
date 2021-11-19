#include <iostream>
using namespace std;
int main()
{
	const int roz = 5;
	int tab[roz], a,x=0;
	cout << "Podaj a: ";
	cin >> a;
	


	for (int i = roz; i >= 0; i--)
	{
		tab[i] = a - x;
		cout << tab[i] << " ";
		x += 5;
	}
}

