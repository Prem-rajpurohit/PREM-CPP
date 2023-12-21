#include<iostream>
using namespace std;
void even( int n )
{
	if( n%2==0 )
	{
		cout << "Even number: " << n;
	}
	else
	{
		cout << "Even number: " << n+1;
	}
}
int main()
{
	int n;
	cout << "Enter the data for N: ";
	cin >> n;
	even( n );
	return 0;
}
