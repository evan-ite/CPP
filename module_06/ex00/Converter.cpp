#include "Converter.hpp"

void Converter::convert(const std::string& str)
{
	try
	{
		if (isPseudoLiteral(str))
			return;

		ValueType *result = getValue(str);
		if (!result)
		{
			std::cerr << "No type found" << std::endl;
			return;
		}
		printTypes(result);
		delete result;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Conversion error: "<< e.what() << '\n';
	}
}

ValueType*	Converter::getValue(const std::string& value)
{	
	ValueType *res = new ValueType();

	if (value.length() == 1 && isprint(value[0]) && !isdigit(value[0]))
	{
		res->value.charVal = value[0];
		res->type = CHAR;
		return res;
	}

	std::stringstream ss(value);
	int intValue;
	if (ss >> intValue && ss.eof()) {
		res->value.intVal = intValue;
		res->type = INT;
		return res;
	}
	ss.clear();
	ss.str(value);

	float floatValue;
	if (ss >> floatValue && value[value.length() - 1] == 'f') {
		res->value.floatVal = floatValue;
		res->type = FLOAT;
		return res;
	}
	ss.clear();
	ss.str(value);

	double doubleValue;
	if (ss >> doubleValue && ss.eof()) {
		res->value.doubleVal = doubleValue;
		res->type = DOUBLE;
		return res;
	}
	delete res;
	return NULL;
}

void	Converter::printTypes(ValueType *result)
{
	if (result->type == CHAR)
	{
		toType<char>(result->value.charVal);
		toType<int>(result->value.charVal);
		toType<float>(result->value.charVal);
		toType<double>(result->value.charVal);
	}
	else if (result->type == INT)
	{
		toType<char>(result->value.intVal);
		toType<int>(result->value.intVal);
		toType<float>(result->value.intVal);
		toType<double>(result->value.intVal);
	}
	else if (result->type == FLOAT)
	{
		toType<char>(result->value.floatVal);
		toType<int>(result->value.floatVal);
		toType<float>(result->value.floatVal);
		toType<double>(result->value.floatVal);
	}
	else if (result->type == DOUBLE)
	{
		toType<char>(result->value.doubleVal);
		toType<int>(result->value.doubleVal);
		toType<float>(result->value.doubleVal);
		toType<double>(result->value.doubleVal);
	}
}

template <typename T>
void Converter::toType(char value)
{
    try 
    {
        T convertedValue = static_cast<T>(value);
        if (typeid(T) == typeid(float))
            std::cout << "float: " << std::fixed << std::setprecision(1) << convertedValue << "f" << std::endl;
        else if (typeid(T) == typeid(double))
            std::cout << "double: " << std::fixed << std::setprecision(1) << convertedValue << std::endl;
		else if (typeid(T) == typeid(char)) 
		{ 
			if (!isprint(convertedValue)) {
				std::cout << "char: Non displayable" << std::endl;
				return;
			}
            std::cout << "char: " << convertedValue << std::endl;
		} 
		else if (typeid(T) == typeid(int))
            std::cout << "int: " << convertedValue << std::endl;

    } 
    catch (const std::exception &e) 
    {
        std::cout << getTypeName<T>() << ": impossible" << std::endl;
    }
}

template <typename T>
void Converter::toType(int value)
{
    try 
    {
        T convertedValue = static_cast<T>(value);
        if (typeid(T) == typeid(float))
            std::cout << "float: " << std::fixed << std::setprecision(1) << convertedValue << "f" << std::endl;
        else if (typeid(T) == typeid(double))
            std::cout << "double: " << std::fixed << std::setprecision(1) << convertedValue << std::endl;
        else if (typeid(T) == typeid(char)) 
		{ 
			if (!isprint(convertedValue)) {
				std::cout << "char: Non displayable" << std::endl;
				return;
			}
            std::cout << "char: " << convertedValue << std::endl;
		} 
		else if (typeid(T) == typeid(int))
            std::cout << "int: " << convertedValue << std::endl;
    
    } 
    catch (const std::exception &e) 
    {
        std::cout << getTypeName<T>() << ": impossible" << std::endl;
    }
}

template <typename T>
void Converter::toType(float value)
{
    try 
    {
		if (value < (std::numeric_limits<T>::is_integer ? std::numeric_limits<T>::min() : -std::numeric_limits<T>::max()) || 
            value > std::numeric_limits<T>::max()) 
            throw std::exception();

        T convertedValue = static_cast<T>(value);
        if (typeid(T) == typeid(float))
            std::cout << "float: " << std::fixed << std::setprecision(1) << convertedValue << "f" << std::endl;
    	else if (typeid(T) == typeid(double))
            std::cout << "double: " << std::fixed << std::setprecision(1) << convertedValue << std::endl;
		else if (typeid(T) == typeid(char)) 
		{ 
			if (!isprint(convertedValue)) {
				std::cout << "char: Non displayable" << std::endl;
				return;
			}
            std::cout << "char: " << convertedValue  << std::endl;
		}  
		else if (typeid(T) == typeid(int))
            std::cout << "int: " << convertedValue << std::endl;
    } 
    catch (const std::exception &e) 
    {
        std::cout << getTypeName<T>() << ": impossible" << std::endl;
    }
}

template <typename T>
void Converter::toType(double value)
{
    try 
    {
		if (value < (std::numeric_limits<T>::is_integer ? std::numeric_limits<T>::min() : -std::numeric_limits<T>::max()) || 
            value > std::numeric_limits<T>::max()) 
            throw std::exception();

        T convertedValue = static_cast<T>(value);
        if (typeid(T) == typeid(float))
            std::cout << "float: " << std::fixed << std::setprecision(1) << convertedValue << "f" << std::endl;
        else if (typeid(T) == typeid(double))
            std::cout << "double: " << std::fixed << std::setprecision(1) << convertedValue << std::endl;
		else if (typeid(T) == typeid(char)) 
		{ 
			if (!isprint(convertedValue)) {
				std::cout << "char: Non displayable" << std::endl;
				return;
			}
            std::cout << "char: " << convertedValue << std::endl;
		}  
		else if (typeid(T) == typeid(int)) 
            std::cout << "int: " << convertedValue << std::endl;
    } 
    catch (const std::exception &e) 
    {
        std::cout << getTypeName<T>() << ": impossible" << std::endl;
    }
}

template <typename T>
std::string Converter::getTypeName() {
    if (typeid(T) == typeid(char)) return "char";
    if (typeid(T) == typeid(int)) return "int";
    if (typeid(T) == typeid(float)) return "float";
    if (typeid(T) == typeid(double)) return "double";
    return "unknown";
}

// Constructors
Converter::Converter()
{}

Converter::Converter(const Converter &copy)
{
	*this = copy;
}


// Destructor
Converter::~Converter()
{}


// Operators
Converter & Converter::operator=(const Converter &assign)
{
	if (this != &assign)
		*this = assign;
	return *this;
}

