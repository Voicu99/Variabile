// Variabile.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	const float pi = 3.14;
	

   //o variabila se declara tip_data nume_variabila
	int my_int = -89;
	std::cout << "Intul meu este:" << my_int << std::endl;
	my_int = 35;
	std::cout << "Intul meu este:" << my_int << std::endl;

	bool bIsValid = false;

	char grade = 'A';
	
	std::cout << "Size of a char :" << sizeof(char) << " bytes\n ";
	std::cout << "Size of a int :" << sizeof(int) << " bytes\n ";

	int anulCurent;
	std::cout << "Va rugam introduceti anul curent" << std::endl;
	std::cin >> anulCurent;
	std::cout << "Suntem in anno domini :" << anulCurent << std::endl;

	int anul_nasterii;
	int varsta = anulCurent - anul_nasterii;



  return 0;
}

