#include <iostream>

/*
DRY - don't repeat yourself - nie powtarzaj si� 
*/

/*
Operatory por�wnania: 

*r�wno�ci			==	
*r�no�ci			!=
*wi�kszo��			>
*mniejsze			< 
*wieksze lub r�wne	>= 
*mniejsze lub r�wne	<=

aregument1 >= argument2 

Wynikiem dzia�ania tych operator�w 
jest warto�� logiczna true/false typu bool 

bool zmienna = true; 
bool zmienna2 = 5 > 74; 

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
 
/*
Napidz funkcj� kt�ra wczyta liczb� i wy�wietli informacj� czy jest ona dodatnia czy nie 
*/

void task2()
{
	int NumberToCheck;

	std::cout << "Podaj liczbe do sprawdzenia:" << "\n";
	std::cin >> NumberToCheck;

	if (NumberToCheck != 0)
	{
		if (NumberToCheck < 0)
			std::cout << " liczba jest ujemna \n";
		else
			std::cout << "Liczba jest dodatnia";
	}
	else
		std::cout << "liczba rowna zero";
}

/*
Napisz funkcj�, kt�ra wczyta liczb�i wy�wietli informacj� 
czy jest ona w zakresie <10,25>.

*/

void task3()
{
	int NumberToCheck;

	std::cout << "Podaj liczbe do sprawdzenia (	�eby spewnia� warunek <10/25>):" << "\n";
	std::cin >> NumberToCheck;

	if (NumberToCheck >= 10)
	{
		if (NumberToCheck <= 25)
			std::cout << "Ta liczba spewnia warunek";
		else
			std::cout << "liczba nie spewnia warunek";
	}
	else
		std::cout << "liczba nie spewnia warunek";
	
}

int main()
{
	//	task1();	
	//task2();
	task3();

}