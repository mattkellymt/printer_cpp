#include "printer.hpp"

int main()
{
	Printer printer("");

	printer.print(
    "string", "\n",
    "int: ", 3, "\n",
    "double: ", 5.0
    );

	return EXIT_SUCCESS;
}