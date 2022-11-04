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
Operatory logiczne:
F-false
T-true 

			and				or			not
A	B	  A && B	      A || B		!A

F	F		F				F			T
F	T		F				T			T
T	F		F				T			F
T	T		T				T			F


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

	/*
	if (NumberToCheck >= 10)
	{
		if (NumberToCheck <= 25)
			std::cout << "Ta liczba spewnia warunek";
		else
			std::cout << "liczba nie spewnia warunek";
	}
	else
		std::cout << "liczba nie spewnia warunek";
	*/

	if (NumberToCheck >= 10 && NumberToCheck <= 25)
		std::cout << "liczba jest w zakresie \n";
	else
		std::cout << "liczba nie jest w zakresie \n";

}

/*
Napisz funkcj� kt�ra wczyta liczb� i wy�wietli informacje czy jest ona parzysta czy nie. 
*/
void task4()
{
	int numberToCheck, rest;
	
	std::cout << "Podaj liczb� do sprawdzenia \n";
	std::cin >> numberToCheck; 

	rest = numberToCheck % 2;
	
	if (!(rest > 0))
		std::cout << "liczba jest parzysta \n";
		
	else
		std::cout << "liczba nie parzysta \n";


}

/*
Podaj bok kwadratu i wylicz pole i obw�d 
*/
void task5()
{
	int bokKwadratu , Obwod , Pole;

	std::cout << "Podaj bok kwadratu \n";
	std::cin >> bokKwadratu;

	Obwod = bokKwadratu * 4;
	Pole = bokKwadratu * 2; 

	std::cout << "Pole:" << Pole << "\n";
	std::cout << "Obwod" << Obwod << "\n";
}

/*
napisz funkcj�kt�ra wczyta 2 liczby i powie kt�ra liczba jest wi�ksza 
*/
void task6()
{
	int firstNumber, secondNumber;

	std::cout << "podaj pierwssza liczbe \n";
	std::cin >> firstNumber;

	std::cout << "podaj drug� liczbe \n";
	std::cin >> secondNumber;

	if (firstNumber > secondNumber)
		std::cout << firstNumber << "\t jest wieksza \n";
	else
		std::cout << secondNumber << "\t jest wieksza \n";
}

/*
Napisz instrukcje ktora wczyta 3 liczby i poka�e kt�ra z nich najw�ksza 
*/
void task7()
{
	int firstNumber, secondNumber, thirdNumber;

	std::cout << "Podaj Pierwsza liczbe \n";
		std::cin >> firstNumber;
	std::cout << "Podaj Druga liczbe \n";
		std::cin >> secondNumber;
	std::cout << "Podaj Trzecia liczbe \n";
		std::cin >> thirdNumber; 

		if (firstNumber > secondNumber && firstNumber > thirdNumber)
			std::cout << firstNumber << " jest najwieksza";
		else
			if (secondNumber > firstNumber && secondNumber > thirdNumber)
				std::cout << secondNumber << " jest najwieksza";
			else
				std::cout << thirdNumber << " jest najwieksza";
		

}

int main()
{
	//task1();	
	//task2();
	//task3();
	//task4();
	//task5();
	//task6();
	task7();
}