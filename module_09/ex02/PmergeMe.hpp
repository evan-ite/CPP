#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <sstream>
# include <string>
# include <vector>
# include <list>
# include <ctime>

class PmergeMe
{
	public:
		PmergeMe(int argc, char **input);
		PmergeMe(const PmergeMe &copy);
		~PmergeMe();
		PmergeMe& operator=(const PmergeMe &assign);


		class MergeExc : public std::exception
		{
			public:
				MergeExc(std::string errMsg);
				~MergeExc() throw();
				const char * what() const throw();
			private:
				std::string	_errMsg;
		};

	private:
		std::vector<int>	_vecArray;
		std::list<int>		_listArray;
		std::vector<int>	_ogArray;
		int					_range;

		void	execute();
		void	printResults();
		void	validate(std::string &input);
		void	FJsortVec(std::vector<int> &array);
		void	FJsortList(std::list<int> &array);

		template <typename C>
		void	addToContainer(std::string &input, C &container)
		{
			std::istringstream iss(input);
			long long	number;
			this->_range = 0;

			while (iss >> number)
			{
				if (number < std::numeric_limits<int>::min() || number > std::numeric_limits<int>::max())
					throw MergeExc("value out of integer range");
				container.push_back(number);
				this->_range++;
			}
		}

};

#endif
