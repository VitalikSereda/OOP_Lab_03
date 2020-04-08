#include <iostream>
using namespace std;
#include "Rectangel.h"

#define MAX 3


void sortZrostSqur(Rectangel*);

int main()
{
	setlocale(LC_CTYPE, "ukr");
	Rectangel reactangel[MAX];
	cin >> reactangel[0];
	cin >> reactangel[1];
	cin >> reactangel[2];
	sortZrostSqur(reactangel);
	for (int i = 0; i < MAX; i++)
	{
		cout << i + 1 << ". " << reactangel[i] << ", " << "Squre = " << reactangel[i].GetSquare() << endl;
	}
	cout << "На скільки зменшити довжини сторін: ";
	int n = 0;
	cin >> n;
	reactangel[0] -= n;
	reactangel[1] -= n;
	reactangel[2] -= n;
	for (int i = 0; i < MAX; i++)
	{
		cout << i + 1 << ". " << reactangel[i] << ", " << "Squre = " << reactangel[i].GetSquare() << endl;
	}
}

void sortZrostSqur(Rectangel* obj)
{
	for (int i = 0; i < MAX - 1; ++i)
	{
		int min = i;
		for (int j = i + 1; j < MAX; ++j)
		{
			if (obj[j] < obj[min])
				min = j;
		}
		swap(obj[i], obj[min]);
	}
}