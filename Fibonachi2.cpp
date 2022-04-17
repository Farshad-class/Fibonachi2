#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <math.h>
#pragma warning(disable : 4996)
using namespace std;
int main()

{
	int x = 1, g = 1, z, k, n;
	cout << " Please enter a number for fibonachi series ? : ";
	cin >> n;
	z = x + g;
	for (k = 1; k <= n - 3; k++) {
		x = g;
		g = z;
		z = x + g;
		if (k >= (n - 3))
		{
			cout << n << " th fibonachi series is : " << z ;
			break;
		}
	}

	getch();
}