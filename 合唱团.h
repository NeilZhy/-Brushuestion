//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		vector<long long> arr(n);
//		for (int i = 0; i<n; i++)
//		{
//			cin >> arr[i];
//		}
//
//		int k, d;
//		cin >> k >> d;
//
//		vector<vector<long long>> dp_max(n, vector<long long>(k + 1, 0));
//		vector<vector<long long>> dp_min(n, vector<long long>(k + 1, 0));
//
//		//初始化最大和最小数组
//		for (int i = 0; i<n; i++)
//		{
//			dp_max[i][1] = arr[i];
//			dp_min[i][1] = arr[i];
//		}
//
//		for (int i = 0; i<n; i++)
//		{
//			for (int j = 2; j<k + 1; j++)
//			{
//				for (int m = max(0, i - d); m <= i - 1; m++) //这里的m控制的是间隔，就是说，我们的间隔要控制好了
//				{
//					dp_max[i][j] = max(dp_max[i][j], max(dp_max[m][j - 1] * arr[i], dp_min[m][j - 1] * arr[i]));
//					dp_min[i][j] = min(dp_min[i][j], min(dp_min[m][j - 1] * arr[i], dp_max[m][j - 1] * arr[i]));
//				}
//			}
//		}
//
//		long long maxnum = dp_max[k - 1][k];
//		for (int i = k; i<n; i++)
//		{
//			maxnum = max(maxnum, dp_max[i][k]);
//		}
//
//		cout << maxnum << endl;
//	}
//
//
//	return 0;
//}