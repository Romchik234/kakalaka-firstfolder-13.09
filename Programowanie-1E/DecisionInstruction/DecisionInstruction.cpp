#include <iostream>

/*
DRY - don't repeat yourself - nie powtarzaj si� 
*/




/*
Napisz funkcj� kt�ra wczyta dwie liczby 
i wykona dzielenia na nich 
*/



void task1()
{
	int firstNumber, secondNumber;
	std::cout << "Podaj liczbe pierwsza:" << "\n";
	std::cin >> firstNumber;

	std::cout << "Podaj druga liczbe: \n";
	std::cin >> secondNumber;

	// iloraz; 
	int quotient;

	/*	if (secondNumber != 0)
			quotient = firstNumber / secondNumber;

		if (secondNumber != 0)
			std::cout << "Iloraz:" << quotient << "\n";

		if (secondNumber == 0)
			std::cout << "Dzielenie przez zero !!! \n";
			tak robi� nie wolno by my si� powtarzamy "if"			*/

	if (secondNumber != 0)
	{
		quotient = firstNumber / secondNumber;
		std::cout << "Iloraz:" << quotient << "\n";
	}
	else /*w przeciwnym wypadku*/
	
		std::cout << "Dzielenie przez zero !!! \n";
	
	std::cout << "Koniec programu1 \n";

}

int main()
{
	task1();


}
