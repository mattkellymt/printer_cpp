#include <iostream>
#include <sstream>

struct Printer
{
	std::string sep;
	std::string end;
	std::stringstream stream;

	Printer(std::string sep = " ", std::string end = "\n") : sep(sep), end(end) {}

	template <typename... arg_types>
	void print(arg_types... args)
	{
		parse(args...);
		std::cout << stream.str();
	}
	template <typename arg_t, typename... arg_types>
	void parse(arg_t arg, arg_types... args)
	{
		stream << arg << sep;
		parse(args...);
	}
	void parse() { stream << end; }
};

int main()
{
	Printer printer;
	printer.print(3, 5);

	return EXIT_SUCCESS;
}