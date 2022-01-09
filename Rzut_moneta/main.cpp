#include <iostream>
#include <random>
int main()
{
	std::srand(time(nullptr));
	size_t coin_side;
	std::cout << "1.Heads\n2.Tails\n";
	std::cin >> coin_side;
	int coin_side_rand = rand() % 2 + 1;
	if (coin_side_rand == 1)
	{
		std::cout<< "Computer: Heads\n";
	}
	else
	{
		std::cout << "Computer: Tails\n";
	}
	if (coin_side == coin_side_rand)
	{
		std::cout << "Win!";
	}
	else
	{
		std::cout << "Game over!";
	}
	return 0;
}