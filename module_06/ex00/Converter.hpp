#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# include <iostream>
# include <string>
# include <sstream>
# include <stdexcept>
# include <limits>
# include <cctype> 
# include <typeinfo>
# include <iomanip>

struct ValueType;

class Converter
{
	public:
		~Converter();

		static void convert(const std::string& value);

	private:
		Converter();
		Converter(const Converter &copy);
		Converter & operator=(const Converter &assign);

		static bool			isPseudoLiteral(const std::string& value);
		static void			printPseudoLiterals(const std::string &value);
		static ValueType*	getValue(const std::string& value);
		static void			printTypes(ValueType *result);


		template <typename T>
		static void	toType(char value);

		template <typename T>
		static void	toType(int value);

		template <typename T>
		static void	toType(float value);

		template <typename T>
		static void	toType(double value);

		template <typename T>
		static std::string getTypeName();
};

union Value
{
	char charVal;
	int intVal;
	float floatVal;
	double doubleVal;
};

enum Type
{
	CHAR,
	INT,
	FLOAT,
	DOUBLE
};

struct ValueType
{
	Type	type;
	Value	value;
};

#endif
