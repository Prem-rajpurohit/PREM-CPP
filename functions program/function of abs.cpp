#include<iostream>
using namespace std;
void myabs( int n )
{
	if( n<0 )
	{
		cout << "Answer is: " << n*(-1);
	}
	else
	{
		cout << "Answer is: " << n;
	}

}
int main()
{
	int n;
	cout << "Enter the data for n: ";
	cin >> n;
	myabs( n );
	return 0;
}
