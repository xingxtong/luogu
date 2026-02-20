#include<iostream>
#include<algorithm>

using namespace std;

void insertion_sort(int a[], int* num)
{
	int key = 0;
	for (int* i = a + 2; i < num; i++)
	{
		key = *i;
		int* j = i - 1;
		while (key < *j && j > a)
		{
			*(j + 1) = *j;
			j--;
		}
		*(j + 1) = key;
	}
}

int n[10010];

int main()
{
	int a, b = 1;
	cin >> a;
	a++;
	for (int i = 1; i < a; i++)
	{
		cin >> n[i];
	}
	insertion_sort(n, n +a);
	for (int i = 1; i < a; i++)
	{
		cout << n[i] << ' ';
	}
	return 0;
}