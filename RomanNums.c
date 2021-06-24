// ------------------------------------------------------------------------------------------
// Name: Neina Cichon
// Abstract: Roman Numerals
// Date: 2020-10-26
// ------------------------------------------------------------------------------------------

// --------------------------------------------------------------------------------
// Includes – built-in libraries of functions
// --------------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <math.h>
#include <stdbool.h> 

// --------------------------------------------------------------------------------
// Constants
// --------------------------------------------------------------------------------



// --------------------------------------------------------------------------------
// User Defined Types (UDT)
// --------------------------------------------------------------------------------


// --------------------------------------------------------------------------------
// Prototypes - Methods
// --------------------------------------------------------------------------------
void RomanNumeralPrinter(int intNumber);
int GetUserNumber();



// --------------------------------------------------------------------------------
// Name: main
// Abstract: This is where the program starts
// --------------------------------------------------------------------------------
void main()
{
	//Declare Variables
	char chrSelection = '0';
	int intUserNumber = 0;
	char strRomanNumerals[50] = { 0 };
	int intIndexLow = 1;
	int intIndexHigh = 26;


	printf("\n-----------------------------------------\n");
	printf("-Roman Numerals-\n");
	printf("-By Neina Cichon-\n");
	printf("-----------------------------------------\n");
	do
	{
		printf("\nA) Display the first 50 Roman Numerals.\nB) Enter a number to be converted to Roman Numerals.\nC) Exit \n");
		scanf_s(" %c", &chrSelection);

	} while (chrSelection != 'a' && chrSelection != 'A' && chrSelection != 'b' && chrSelection != 'B' && chrSelection != 'c' && chrSelection != 'C');

	if (chrSelection == 'a' || chrSelection == 'A')
	{
		printf("\n-----------------------------------------\n");
		printf("-Roman Numerals-\n");
		printf("-----------------------------------------\n");

		do
		{
			printf("%-2d = ", intIndexLow);
			RomanNumeralPrinter(intIndexLow);

			printf("%10c\t", ' ');
			printf("%-2d = ", intIndexHigh);
			RomanNumeralPrinter(intIndexHigh);
			printf("\n");

			intIndexLow += 1;
			intIndexHigh += 1;


		} while (intIndexLow < 26);
		printf("\n");

	}

	else if (chrSelection == 'b' || chrSelection == 'B')
	{
		printf("\n-----------------------------------------\n");
		intUserNumber = GetUserNumber();
		printf("%d = ", intUserNumber);
		RomanNumeralPrinter(intUserNumber);
		printf("\n\n");

	}
	else
	{
		printf("\n\nProgram Ended.\n\n");
		Sleep(1000);
		exit(0);
	}

	system("pause");
}


// --------------------------------------------------------------------------------
// Name: RomanNumeralPrinter
// Abstract: Prints Roman Numeral
// --------------------------------------------------------------------------------
void RomanNumeralPrinter(int intNumber)
{
	while (intNumber != 0)
	{
		if (intNumber >= 1000)
		{
			printf("M");
			intNumber -= 1000;
		}
		else if (intNumber >= 900)
		{
			printf("CM");
			intNumber -= 900;
		}
		else if (intNumber >= 500)
		{
			printf("D");
			intNumber -= 500;
		}
		else if (intNumber >= 400)
		{
			printf("CD");
			intNumber -= 400;
		}
		else if (intNumber >= 100)
		{
			printf("C");
			intNumber -= 100;
		}
		else if (intNumber >= 90)
		{
			printf("XC");
			intNumber -= 90;
		}
		else if (intNumber >= 50)
		{
			printf("L");
			intNumber -= 50;
		}
		else if (intNumber >= 40)
		{
			printf("XL");
			intNumber -= 40;
		}
		else if (intNumber >= 10)
		{
			printf("X");
			intNumber -= 10;
		}
		else if (intNumber >= 9)
		{
			printf("IX");
			intNumber -= 9;
		}
		else if (intNumber >= 5)
		{
			printf("V");
			intNumber -= 5;
		}
		else if (intNumber >= 4)
		{
			printf("IV");
			intNumber -= 4;
		}
		else if (intNumber >= 1)
		{
			printf("I");
			intNumber -= 1;
		}
	}
}

// --------------------------------------------------------------------------------
// Name: empty_stdin
// Abstract: emptys buffer
// --------------------------------------------------------------------------------

void empty_stdin(void) {
	int unwantedCharacter = getchar();

	while (unwantedCharacter != '\n' && unwantedCharacter != EOF)
		unwantedCharacter = getchar();
}


// --------------------------------------------------------------------------------
// Name: GetUserNumber
// Abstract: Gets user input for number
// --------------------------------------------------------------------------------
int GetUserNumber()
{
	int intUserNumber = 0;

	//Get user input
	do
	{
		empty_stdin();
		printf("Enter a number to be converted to Roman Numerals:\n");
		scanf_s(" %d", &intUserNumber);

	} while (intUserNumber <= 0 || intUserNumber > 3999);

	return intUserNumber;

}