
//���ӳ������⡣���ӵ�һ��ժ�����ɸ����ӣ���������һ�룬������񫣬�ֶ����һ���� �ڶ��������ֽ�ʣ�µ����ӳԵ�һ�룬�ֶ��һ�����Ժ�ÿ�����϶�����ǰһ��ʣ�µ�һ����һ���� ����N���������ٳ�ʱ����ֻʣ��һ�������ˡ����һ�칲ժ�������ӡ�
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




////һ���M�׸߶��������䣬ÿ����غ󷵻�ԭ�߶ȵ�һ�룬�����¡� ���ڵ�N�����ʱ������ߣ������������ף� ������λС��
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
//	sum -= m;   //��ͼ���⣬�����������һ��
//	cout << setiosflags(ios::fixed) << setprecision(2) <<m<<" ";
//	cout << setiosflags(ios::fixed) << setprecision(2)<<sum<<endl;
//	return 0;
//}



//��һ�������У� 2 / 1 3 / 2 5 / 3 8 / 5 13 / 8 21 / 13......���������е�ǰN��֮�ͣ�������λС����
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
//		int s = i / 2;   //���������Ķ��壬��������������ǳ�������������ӣ���������ֱ�ӳ���2����
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
//		arr.clear();    //����ʹ��vector�е�clear�����������
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
//		sum += (1/m);   //����������i����ѭ���������iҪ�����͵ģ���������Ҫ��m����Ϊ���㣬mҪ��double�͵�
//		i++;
//		m++;
//	}
//	//printf("%.2lf\n",sum);  //�����λ��Ч���֣�Ҫ��.2��������ʽ
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
//	//շת���ȡ��
//	while (b)
//	{
//		temp = a % b;
//		a = b;
//		b = temp;
//	}
//
//	cout << a << " "<<num1*num2 / a << endl;  //�����num1*num2 / a �������ǵ���С������
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
