#pragma once
#include <iostream>
using namespace std;
class Rectangel
{
private:
	int H, W;
public:
	Rectangel();
	Rectangel(int height, int widht);

	int GetHeight();
	int GetWidght();

	void ChangeHeight(int newH);
	void ChangeWidht(int newW);

	int GetSquare();
	int GetPerumetr();

	~Rectangel();

	friend ostream& operator<<(ostream& out, const Rectangel& obj);
	friend istream& operator>>(istream& in, Rectangel& obj);

	bool operator < (Rectangel& obj);
	void operator -= (int n);
};
