#include <iostream>
#include <list>
#include <algorithm>
#include <string>

void copyListIntoAnotherList(std::list<int>& sList1, std::list<int>& sList2)
{
    std::sort(sList1.begin(), sList1.end());
    std::unique_copy(sList1.begin(), sList1.end(), std::back_inserter(sList2));
}

void printThisList(const std::list<int>& listToPrint)
{
    for(auto i : listToPrint)
    {
        std::cout << i;
    }
}

int main()
{
    std::list<int> sList1 = {1,2,3,4,5,6,7,8,9};
    std::list<int> sList2;
    copyListIntoAnotherList(sList1, sList2);
}