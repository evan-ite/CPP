#include "RPN.hpp"

RPN::RPN(const RPN &copy): _expr(copy._expr)
{}

RPN::~RPN()
{}

RPN&	RPN::operator=(const RPN &assign)
{
	if (this != &assign)
		this->_expr = assign._expr;
	return (*this);
}

RPN::RPN(std::string input)
{
	try
	{
		this->validInput(input);
		this->addToQueue(input);
		std::cout << this->calculate() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
}

int	RPN::calculate() const
{
	std::queue<char> temp = this->_expr;
	std::stack<int> values;

	while (!temp.empty())
	{
		char next = temp.front();
		temp.pop();

		if (std::isdigit(next))
			values.push(next - '0');
		else
		{
			if (values.size() < 2)
				throw RPNException("invalid RPN expression");

			int val2 = values.top();
			values.pop();
			int val1 = values.top();
			values.pop();
			switch (next)
			{
				case '+':
					values.push(val1 + val2);
					break;
				case '-':
					values.push(val1 - val2);
					break;
				case '*':
					values.push(val1 * val2);
					break;
				case '/':
					if (val2 == 0)
						throw RPNException("division by zero");
					values.push(val1 / val2);
					break;
			}
		}
	}

	if (values.size() != 1)
		throw RPNException("invalid RPN expression");

	return values.top();
}

void	RPN::addToQueue(std::string &input)
{
	std::string operators = "+-/*";

	for (size_t i = 0; i < input.size(); i++)
	{
		if (std::isdigit(input[i]) || operators.find(input[i]) != std::string::npos)
			this->_expr.push(input[i]);
	}
}

void	RPN::validInput(std::string &input)
{
	std::string valid = "+-/*";
	input.erase(std::remove(input.begin(), input.end(), ' '), input.end());

	for (size_t i = 0; i < input.size(); i++)
	{
		if (!std::isdigit(input[i]) && valid.find(input[i]) == std::string::npos)
			throw RPNException("inavild character found");
	}
}

RPN::RPNException::RPNException(std::string errMsg) : _errMsg(errMsg)
{}

RPN::RPNException::~RPNException() throw()
{}

const char* RPN::RPNException::what() const throw()
{
	return _errMsg.c_str();
}

