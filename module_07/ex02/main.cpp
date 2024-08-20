#include "Array.hpp"
#include <iostream>

int main(void)
{
    Array<int> arr(5);

    for (size_t i = 0; i < arr.size(); ++i)
        arr[i] = i * 10;

    std::cout << "Original Array elements:" << std::endl;
    for (size_t i = 0; i < arr.size(); ++i)
        std::cout << arr[i] << " ";
    std::cout << std::endl;

    Array<int> copyArr(arr);
    std::cout << "Copy Array elements:" << std::endl;
    for (size_t i = 0; i < copyArr.size(); ++i)
        std::cout << copyArr[i] << " ";
    std::cout << std::endl;

    Array<int> assignArr;
    assignArr = arr;
    std::cout << "Assigned Array elements:" << std::endl;
    for (size_t i = 0; i < assignArr.size(); ++i)
        std::cout << assignArr[i] << " ";
    std::cout << std::endl;

    try
    {
        std::cout << "Accessing out-of-bounds element: " << arr[10] << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    Array<std::string> strArr(3);

    strArr[0] = "Hello";
    strArr[1] = "World";
    strArr[2] = "Array";

    std::cout << "Original String Array elements:" << std::endl;
    for (size_t i = 0; i < strArr.size(); ++i)
        std::cout << strArr[i] << " ";
    std::cout << std::endl;

    Array<std::string> copyStrArr(strArr);
    std::cout << "Copy String Array elements:" << std::endl;
    for (size_t i = 0; i < copyStrArr.size(); ++i)
        std::cout << copyStrArr[i] << " ";
    std::cout << std::endl;

    Array<std::string> assignStrArr;
    assignStrArr = strArr;
    std::cout << "Assigned String Array elements:" << std::endl;
    for (size_t i = 0; i < assignStrArr.size(); ++i)
        std::cout << assignStrArr[i] << " ";
    std::cout << std::endl;

    try
    {
        std::cout << "Accessing out-of-bounds element: " << strArr[5] << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}