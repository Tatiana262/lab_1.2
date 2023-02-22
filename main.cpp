#include<iostream>
using namespace std;
int main()
{
	char num[80];
	gets_s(num);
	int size = strlen(num);
	unsigned long long n = atol(num);
	int* a = new int[size];
	int sum = 0;
	int count = 0;
	for (; n != 0; )
	{
		for (int i = 0; i < size; i++)
		{
			int st = size - 1 - i;
			int del = pow(10, st);
			a[i] = n / del;
			int otn = a[i] * del;
			n = n - otn;
		}
		for (int i = 0; i < size; i++)
		{
			sum += a[i];
		}
		count++;
		if (sum >= 0 && sum < 10)
		{
			break;
		}
		else
		{
			if(sum%10 != 0)
				size--;
			delete[] a;
			a = new int[size];
			n = sum;
			sum = 0;
		}
	}
	cout << count;
	return 0;
}
