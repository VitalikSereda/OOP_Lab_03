#include "Rectangel.h"

Rectangel::Rectangel()
{
	H = 0;
	W = 0;
}

Rectangel::Rectangel(int height, int widht)
{
	H = height;
	W = widht;
}

int Rectangel::GetHeight()
{
	return this->H;
}

int Rectangel::GetWidght()
{
	return W;
}

void Rectangel::ChangeHeight(int newH)
{
	H = newH;
}

void Rectangel::ChangeWidht(int newW)
{
	W = newW;
}

int Rectangel::GetSquare()
{
	return H * W;
}

int Rectangel::GetPerumetr()
{
	return 2 * (H + W);
}

Rectangel::~Rectangel()
{
}

bool Rectangel::operator<(Rectangel& obj)
{
	return this->GetSquare() < obj.GetSquare();
}

void Rectangel::operator-=(int n)
{
	this->H -= n;
	this->W -= n;
}

ostream& operator<<(ostream& out, const Rectangel& obj)
{
	out << "Height = " << obj.H << ", " << "Widght = " << obj.W;
	return out;
}

istream& operator>>(istream& in, Rectangel& obj)
{
	cout << "Height: ";
	in >> obj.H;
	cout << "Widght: ";
	in >> obj.W;
	return in;
}
