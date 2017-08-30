#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

int main()
{
	int x, f, d, p;
	cin >> x >> f >> d >> p;
	int day = d / x;
	if (day < f)
	{
		cout << day<<endl;
		return 0;
	}
	else
	{
		day = (d - x*f) / (x + p) + f;
	}
	cout << day << endl;
	return 0;
}