#include "ScalarConverter.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter( const ScalarConverter & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScalarConverter::~ScalarConverter()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ScalarConverter &				ScalarConverter::operator=( ScalarConverter const & __unused rhs )
{
	return *this;
}

std::ostream &			operator<<( std::ostream & o, ScalarConverter const & __unused i )
{
	// o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void ScalarConverter::convert(const std::string &literal)
{
	double number;
	if (literal.size() == 1 && std::isalpha(literal[0]))
	{
		if (std::isprint(literal[0]))
			std::cout << "char : " << static_cast<char>(literal[0]) << std::endl;
		else
			std::cout << "Char : Non Displayable" <<  std::endl;
		std::cout << "int : " << static_cast<int>(literal[0]) << std::endl;
		std::cout << "float : " << static_cast<float>(literal[0]) << "f" << std::endl;
		std::cout << "double : " << static_cast<double>(literal[0]) << std::endl;
		return;
	}
	if (literal.empty())
	{
		std::cout << "⭕️ impossible to convert ⭕️" << std::endl;
	}
	try
	{
		number = std::stod(literal);
	}
	catch(const std::invalid_argument &e)
	{
		std::cout << "⭕️ Invalid input ⭕️" << std::endl;
		return;
	}
	ScalarConverter::lToChar(number);
	ScalarConverter::lToInt(number);
	ScalarConverter::lToFloat(number);
	std::cout << "double : " << static_cast<double>(number) << std::endl;

}

void ScalarConverter::lToChar(const double number)
{
	char charValue;

	if (std::isnan(number) || std::isinf(number))
	{
		std::cout << "char : impossible" << std::endl;
	}
	else
	{
		charValue = static_cast<char>(number);
		if (number > 32 && number <= 126)
			std::cout << "char : " << charValue << std::endl;
		else
			std::cout << "char : Non Displayable" <<  std::endl;

	}
}

void ScalarConverter::lToFloat(const double number)
{
	if (std::isnan(number) || std::isinf(number))
		std::cout << "float : impossible" << std::endl;
	else
		std::cout << "float : " << std::setprecision(1) << std::fixed << static_cast<float>(number)  << "f" << std::endl;

}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */

void ScalarConverter::lToInt(const double number)
{
	if (std::isnan(number) || std::isinf(number))
	{
		std::cout << "int : impossible" << std::endl;
	}
	else
		std::cout << "int : " <<  static_cast<int>(number) << std::endl;

}
