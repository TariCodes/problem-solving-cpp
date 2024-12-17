#include <iostream> 
using namespace std;

int main()
{
	int n;
	
	cout << "Enter number: " <<endl;
	cin >> n;
	
	if(n == 0)
	{
		return 1;
	}
	else
	{
		cout << n * (n - 1) <<endl;
	}
	return 0;
}
