
//猴子吃桃问题。猴子第一天摘下若干个桃子，当即吃了一半，还不过瘾，又多吃了一个。 第二天早上又将剩下的桃子吃掉一半，又多吃一个。以后每天早上都吃了前一天剩下的一半零一个。 到第N天早上想再吃时，见只剩下一个桃子了。求第一天共摘多少桃子。
//10   1534
//#include<iostream>
//using namespace std;
//int main()
//{
//	int N = 0;
//	int i = 1;
//	cin >> N;
//	for (; N > 1; N--)
//	{
//		i = (i + 1) * 2;
//	}
//	cout << i << endl;
//	return 0;
//}




////一球从M米高度自由下落，每次落地后返回原高度的一半，再落下。 它在第N次落地时反弹多高？共经过多少米？ 保留两位小数
//#include<iostream>
//using namespace std;
//#include <iomanip> 
//
//int main()
//{
//	float m = 0.0, n = 0.0;
//	float sum = 0.0;
//	cin >> m >> n;
//	for (int i = 0; i < n; i++)
//	{
//		sum += m;
//		m = m / 2;
//		sum += m;
//	}
//	sum -= m;   //画图解题，这里最后多加了一次
//	cout << setiosflags(ios::fixed) << setprecision(2) <<m<<" ";
//	cout << setiosflags(ios::fixed) << setprecision(2)<<sum<<endl;
//	return 0;
//}



//有一分数序列： 2 / 1 3 / 2 5 / 3 8 / 5 13 / 8 21 / 13......求出这个数列的前N项之和，保留两位小数。
//#include<iostream>
//using namespace std;
//#include <iomanip> 
//
//
//
//int main()
//{
//	int n = 0;
//	double denominator = 1.0;
//	double molecule = 2.0;
//	double sum = 0;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		sum += (molecule / denominator);
//		molecule = molecule + denominator;
//		denominator = molecule - denominator;
//	}
//	cout << setiosflags(ios::fixed) << setprecision(2) << sum << endl;
//	return 0;
//}



//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 2; i <= n; i++)
//	{
//		int sum = 0;
//		for (int j = 1; j <= i / 2; j++)
//		{
//			if (i%j == 0)
//				sum += j;
//		}
//		if (sum == i)
//		{
//			cout << i << " its factors are ";
//			for (int j = 1; j <= i / 2; j++)
//			{
//				if (i%j == 0)
//					cout << j << ' ';
//			}
//			cout << endl;
//		}
//	}
//	return 0;
//
//}

//#include<iostream>
//#include<stdio.h>
//using namespace std;
//#include<vector>
//
//int main()
//{
//	vector<int> arr;
//	int a = 0;
//	cin >> a;
//	int sum = 0;
//	for (int i = 1; i <= a;i++)
//	{
//		sum = 0;
//		int s = i / 2;   //根据完数的定义，我们这里的因子是除了它自身的因子，所以我们直接除以2即可
//		for (int m = 1; m <= s; m++)
//		{
//			if (i%m == 0)
//			{
//				sum += m;
//				arr.push_back(m);
//			}
//		}
//		if (sum == i)
//		{
//			cout << i << " its factors are ";
//			vector<int>::iterator it = arr.begin();
//			while (it != arr.end())
//			{
//				cout << *it << " ";
//				it++;
//			}
//			cout << endl;
//		}
//		arr.clear();    //这里使用vector中的clear可以清空数据
//	}
//	return 0;
//}





//int main()
//{
//	int a = 0, b = 0, c = 0;
//	int i = 1;
//	double m = 1.0;
//	double sum = 0;
//	cin >> a >> b >> c;
//	while (i<=a)
//	{
//		sum += i;
//		i++;
//	}
//	i = 1;
//	while (i <= b)
//	{
//		sum += (i*i);
//		i++;
//	}
//	i = 1;
//	while (i <= c)
//	{
//		sum += (1/m);   //这里我们用i控制循环，这里的i要是整型的，但是我们要用m来作为计算，m要是double型的
//		i++;
//		m++;
//	}
//	//printf("%.2lf\n",sum);  //输出两位有效数字，要是.2的这种形式
//	cout.setf(ios::fixed);
//	cout  << setprecision(2) << sum << endl;
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int a = 0;
//	int sum = 0;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		a = a*10 + 2;
//		sum += a;
//	}
//	cout << sum<<endl;
//	return 0;
//}


//int main()
//{
//	int a = 0, b = 0;
//	int num1 = 0, num2 = 0;
//	int temp = 0;
//	cin >> a >> b;
//	num1 = a;
//	num2 = b;
//	if (a < b)
//	{
//		temp = a;
//		a = b;
//		b = temp;
//	}
//	//辗转相除取余
//	while (b)
//	{
//		temp = a % b;
//		a = b;
//		b = temp;
//	}
//
//	cout << a << " "<<num1*num2 / a << endl;  //这里的num1*num2 / a 就是他们的最小公倍数
//	return 0;
//}
//






//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int a, b, c;
//	cin >> a >> b >> c;
//	if (a < b)
//	{
//		a = b;
//	}
//	if (a < c)
//	{
//		a = c;
//	}
//	cout << a << endl;
//	return 0;
//}
