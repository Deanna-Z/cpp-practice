#include<iostream>
using namespace std;
int main()
{
	int n, m, a; // n= how many lines. m = how many number after m ; a-the number after m
	while (cin >> n) //continuous input n
	{
		while (n--)
		{
			
			cin >> m;
			int sum = 0;
			while(m--)
			{	
				cin >> a;
				sum += a;
			}
			cout << sum << endl;
			if (n != 0) cout << endl;
		}
		
	}

}