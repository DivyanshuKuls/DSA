// C++ code to print Inverted Pyramid Pattern using
// recursion
#include <bits/stdc++.h>
using namespace std;

// recursive function for printing
void print(int n) 
{
	if(n == 0) // base case
	{
		return;
	}
	cout << "* ";
	print(n - 1); // recursive calling for printing
}

void pattern(int n)
{
	if (n == 0) {
		return;
	}
	print(n);
	cout << endl;
	pattern(n - 1);
}

// driver function
int main()
{
	int n = 5;
	pattern(n);
	return 0;
}
// This code is contributed by Shivesh Kumar Dwivedi
