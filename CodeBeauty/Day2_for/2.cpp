#include<iostream>
int main()
{
	int number;
	std::cout << "Number:" ;
	std::cin >> number;
	int factorial = 1;
	/*
	
	 for( int i=1; i <= number; i++)
	 {
		factorial = factorial *i
	 }

	
	
	*/



	for (int i = number;i >= 1; i--) // remember to add int 
	{
		factorial = factorial * i;
	}
	std::cout << number << "!= " << factorial << std::endl;
	return 0;
}
