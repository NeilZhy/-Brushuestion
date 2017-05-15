#include<iostream>
using namespace std;

int main()
{
	double bonus = 0;
	double profit = 0;
	int flag = 0;
	cin >> profit;
	if (profit >= 0 && profit <= 100000)
	{
		flag = 1;
	}
	else if (profit <= 200000)
	{
		flag = 2;
	}
	else if (profit <= 400000)
	{
		flag = 3;
	}
	else if (bonus <= 600000)
	{
		flag = 4;
	}
	else if (bonus <= 1000000)
	{
		flag = 5;
	}
	else
	{
		flag = 6;
	}

	switch (flag)
	{
	case 6:
		profit -= 1000000;
		bonus += profit*0.01;
	case 5:
		profit -= 600000;
		bonus += profit*0.015;
	case 4:
		profit -= 400000;
		bonus += profit*0.03;
	case 3:
		profit -= 200000;
		bonus += profit*0.05;
	case 2:
		profit -= 100000;
		bonus += profit*0.075;
	case 1:
		profit -= 0;
		bonus += profit*0.1;
		break;
	}
	cout << bonus;
	return 0;
}