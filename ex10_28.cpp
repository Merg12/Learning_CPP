#include <iostream>
#include <vector>
#include <list>

//use inserter, back_inserter, and front_inserter

void printOutContainer(std::vector<int> iVec)
{
    for(auto& i : iVec)
    {
        std::cout << i;
    }
    std::cout << std::endl;
}

int main()
{
    std::vector<int> num = {1,2,3,4,5,6,7,8,9};
    std::vector<int> num2;
    std::vector<int> num3;
    std::list<int> num4;

    std::copy(num.begin(), num.end(), std::inserter(num2, num2.begin()));
    printOutContainer(num2);

    std::copy(num.begin(), num.end(), std::back_inserter(num3));
    printOutContainer(num3);

    std::copy(num.begin(), num.end(), std::front_inserter(num4));

    for(auto& i : num4)
    {
        std::cout << i;
    }
    std::cout << std::endl;
}