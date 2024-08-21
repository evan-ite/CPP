#include "Array.hpp"
#include <iostream>

template <typename T>
void    testArray(T arr)
{
    std::cout << "Original Array elements:" << std::endl;
    for (size_t i = 0; i < arr.size(); ++i)
        std::cout << arr[i] << " ";
    std::cout << std::endl;

    T copyArr(arr);
    std::cout << "Copy Array elements:" << std::endl;
    for (size_t i = 0; i < copyArr.size(); ++i)
        std::cout << copyArr[i] << " ";
    std::cout << std::endl;

    T assignArr;
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
        std::cerr << e.what() << std::endl;
    }

}

int main(void)
{
    Array<int> arr(5);

    for (size_t i = 0; i < arr.size(); ++i)
        arr[i] = i * 10;
    
    testArray<Array<int> >(arr);

    std::cout << "--------------------------" << std::endl;

    Array<std::string> strArr(3);

    strArr[0] = "Hello";
    strArr[1] = "World";
    strArr[2] = "Array";

    testArray<Array<std::string> >(strArr);    
}