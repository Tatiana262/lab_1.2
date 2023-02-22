#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int** a = new int* [n];
	for (int i = 0; i < n; i++)
	{
		a[i] = new int[3];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> a[i][j];
		}
	}
	int sum = 0;
	int count = 0;
	for (int j = 0; j < 3; j++)
	{
		for (int i = 0; i < n; i++)
		{
			sum += a[i][j];
		}
		if (sum == 0)
			count++;
	}
	if (count == 3)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}
