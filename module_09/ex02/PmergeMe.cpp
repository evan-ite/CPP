#include "PmergeMe.hpp"

PmergeMe::PmergeMe(int argc, char **input)
{
	try
	{
		std::string	inputStr;
		for (int i = 1; i < argc; i++)
			inputStr += std::string(input[i]) + " ";

		this->validate(inputStr);
		this->addToContainer(inputStr, this->_vecArray);
		this->addToContainer(inputStr, this->_listArray);
		this->_ogArray = this->_vecArray;
		this->execute();
	} catch (std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
}

void	PmergeMe::execute()
{
	std::clock_t start_list = std::clock();
	FJsortList(this->_listArray);
	std::clock_t end_list = std::clock();
	double elapsed_list = double(end_list - start_list) / CLOCKS_PER_SEC;

	std::clock_t start_vec = std::clock();
	FJsortVec(this->_vecArray);
	std::clock_t end_vec = std::clock();
	double elapsed_vec = double(end_vec - start_vec) / CLOCKS_PER_SEC;

	this->printResults();
	std::cout << "Time to process a range of " << this->_range
	<< " elements with std::list : " << elapsed_list << " seconds." << std::endl;
	std::cout << "Time to process a range of " << this->_range
	<< " elements with std::vector : " << elapsed_vec << " seconds." << std::endl;
}

void	PmergeMe::FJsortList(std::list<int> &array)
{
	if (array.size() <= 1)
		return;

	std::list<int> S1, S2;
	std::list<int>::iterator it = array.begin();
	while (it != array.end())
	{
		int a = *it;
		it++;
		if (it != array.end())
		{
			int b = *it;
			if (a < b) {
				S1.push_back(a);
				S2.push_back(b);
			} else {
				S1.push_back(b);
				S2.push_back(a);
			}
			it++;
		}
		else
			S2.push_back(a);
	}

	FJsortList(S1);

	it = S2.begin();
	for (; it != S2.end(); ++it)
		S1.insert(std::lower_bound(S1.begin(), S1.end(), *it), *it);

	array = S1;
}


void	PmergeMe::FJsortVec(std::vector<int> &array)
{
	if (array.size() <= 1)
		return;

	std::vector<int> S1, S2;
	for (size_t i = 0; i + 1 < array.size(); i +=2)
	{
		int a = array[i];
		int b = array[i + 1];
		if (a < b) {
			S1.push_back(a);
			S2.push_back(b);
		} else {
			S1.push_back(b);
			S2.push_back(a);
		}
	}

	if (array.size() % 2 != 0)
		S2.push_back(array.back());

	FJsortVec(S1);

	for (size_t i = 0; i < S2.size(); i++)
		S1.insert(std::lower_bound(S1.begin(), S1.end(), S2[i]), S2[i]);

	array = S1;
}

void	PmergeMe::printResults()
{
	std::cout << "Before: ";
	size_t i = 0;
	for (; i < _ogArray.size() && i < 6; ++i)
		std::cout << _ogArray[i] << " ";
	if (i < _ogArray.size())
		std::cout << "[...]";
	std::cout << std::endl;

	std::cout << "After: ";
	i = 0;
	for (; i < _vecArray.size() && i < 6; ++i)
		std::cout << _vecArray[i] << " ";
	if (i < _vecArray.size())
		std::cout << "[...]";
	std::cout << std::endl;

	// std::cout << "Sorted list: ";
	// int count = 0;
	// for (std::list<int>::const_iterator it = _listArray.begin(); it != _listArray.end() && count < 5; ++it, ++count)
	// 	std::cout << *it << " ";
	// std::cout << std::endl;
}

void	PmergeMe::validate(std::string &input)
{
	for (size_t i = 0; i < input.size(); i++)
	{
		if (!std::isdigit(input[i]) && input[i] != ' ')
			throw MergeExc("invalid input array");
	}
}

PmergeMe::PmergeMe(const PmergeMe &copy): _vecArray(copy._vecArray), _listArray(copy._listArray)
{}

PmergeMe::~PmergeMe()
{}

PmergeMe& PmergeMe::operator=(const PmergeMe &assign)
{
	if (this != &assign)
	{
		this->_vecArray = assign._vecArray;
		this->_listArray = assign._listArray;
	}
	return (*this);
}

PmergeMe::MergeExc::MergeExc(std::string errMsg) : _errMsg(errMsg)
{}

PmergeMe::MergeExc::~MergeExc() throw()
{}

const char* PmergeMe::MergeExc::what() const throw()
{
	return _errMsg.c_str();
}
