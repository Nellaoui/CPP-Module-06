#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <cmath>
#include <iomanip>


class ScalarConverter
{

	public:
		static void convert(const std::string &literal);
		static void lToChar(const double number);
		static void lToInt(const double number);
		static void lToFloat(const double number);

		ScalarConverter();
		~ScalarConverter();

		ScalarConverter &		operator=( ScalarConverter const & rhs );

	private:
		ScalarConverter( ScalarConverter const & src );


};

std::ostream &			operator<<( std::ostream & o, ScalarConverter const & i );

#endif /* ************************************************* SCALARCONVERTER_H */
