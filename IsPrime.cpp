// 1100096 Ant�nio Marques
// Valida se um numero � primo

#include <iostream>

int Prime(int &number)
{
	int i,prime=1;
	double squared=sqrt(double(number)); // se number n�o � primo, tem necess�riamente um factor primo menor ou igual a sqrt(number)

		for ( i = 2 ; i < squared ; i++ )
		{
			if ( number%i == 0 ) prime=0;
		}
	return prime;
}

int main()
{
	int number,i=0;
	std::cout << "Introduza um numero : ";
	std::cin >> number;

	if ( number <= 0 ) { std::cout << number << " is invalid!" << std::endl; return 0;} // S� � necess�rio validar os positivos
	if ( number < 2 ) { std::cout << number << " is not prime!" << std::endl; return 0;} // Por defini��o 0 e 1 n�o s�o primos

	if (Prime(number))
	{ 
		std::cout << number << " is prime" ; 
	} else {
		std::cout << number << " is not prime!";
	}

	std::cout << std::endl;
	return 0;
}