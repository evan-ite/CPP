#include "easyfind.hpp"

int main()
{
    // Test with std::vector
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    try
    {
        std::vector<int>::iterator it = easyfind(vec, 3);
        std::cout << "Found in vector: " << *it << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Not found in vector" << std::endl;
    }

    // Test with std::list
    std::list<int> lst;
    lst.push_back(10);
    lst.push_back(20);
    lst.push_back(30);
    lst.push_back(40);
    lst.push_back(50);

    try
    {
        std::list<int>::iterator it = easyfind(lst, 20);
        std::cout << "Found in list: " << *it << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Not found in list" << std::endl;
    }

    // Test with std::deque
    std::deque<int> deq;
    deq.push_back(100);
    deq.push_back(200);
    deq.push_back(300);
    deq.push_back(400);
    deq.push_back(500);

    try
    {
        std::deque<int>::iterator it = easyfind(deq, 100);
        std::cout << "Found in deque: " << *it << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Not found in deque" << std::endl;
    }

    // Test with a value not present
    try
    {
        std::vector<int>::iterator it = easyfind(vec, 10);
        std::cout << "Found in vector: " << *it << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Not found in vector" << std::endl;
    }

    return 0;
}