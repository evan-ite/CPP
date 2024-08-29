#ifndef RPN_HPP
# define RPN_HPP

# include <queue>
# include <stack>
# include <string>
# include <iostream>
# include <sstream>
# include <algorithm>

// USE QUEUE
class RPN
{
	public:
		RPN(std::string input);
		RPN(const RPN &copy);
		~RPN();

		RPN&	operator=(const RPN &assign);

		class RPNException : public std::exception
		{
			public:
				RPNException(std::string errMsg);
				~RPNException() throw();
				const char * what() const throw();
			private:
				std::string	_errMsg;
		};
	private:
		int		calculate() const;
		void	validInput(std::string &input);
		void	addToQueue(std::string &input);

		std::queue<char> _expr;
};

#endif
