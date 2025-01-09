#include <iostream>
bool prime_check(int n)
{
	for (int i = 2; i < n / 2; i++)
	{
		if (n % i == 0)
		{
			return false;
			break;

		}
	}
	return true;
}
int main(){
	int n;
	std::cout << "Enter your number \n";
	std::cin >> n;
	if (prime_check(n) == true )
	{
		std::cout << "This number is prime ! " << std::endl;
	}
	else
	{
		std::cout << "This number is not prime !" << std::endl;
	}
}
