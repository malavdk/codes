// C++ program to count trailing 0s in n!
#include <iostream>
using namespace std;

// Function to return trailing 0s in factorial of n
int i;
long n;
int findTrailingZeros(int *)
{
	// Initialize result
	int count = 0;

	// Keep dividing n by powers of 5 and update count
	for (int i=5; n/i>=1; i *= 5)
		count += n/i;

	return count;
}

// Driver program to test above function
int main()
{
	int t,i;
	long a[100],b[100];
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<t;i++)
	{
		cout << "Count of trailing 0s in "  
			<< "! is " << findTrailingZeros(&a[i]);
	}
	return 0;
}
