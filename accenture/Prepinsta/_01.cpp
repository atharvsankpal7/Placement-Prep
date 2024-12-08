#include <iostream>
using namespace std;
void isPerfect()
{
	int n;
	cin >> n;
	int sum = 0;
	for (int i = 1; i < n / 2; i++)
	{
		if (n % i == 0)
		{
			sum += i;
		}
	}

	if (n == sum)
	{
		cout << "Perfect";
	}
	else
	{
		cout << "Not Perfect";
	}
}

int main()
{

	isPerfect();
}
