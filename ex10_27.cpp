#include <iostream>
#include <list>

void copyListIntoAnotherList(const std::list<std::string>& sList1)
{
    std::sort(sList1.begin(), sList1.end());
    //std::unique_copy(sList1.begin(), sList1.end(), std::back_inserter(sList2));
}

/*void printThisList(const std::list<std::string>& listToPrint)
{
    for(auto i : listToPrint)
    {
        std::cout << i;
    }
}*/

int main()
{
    std::list<std::string> sList1 = {"1", "22", "88888888" "22", "4444", "55555", "55555", "7777777", "88888888", "999999999"};
    //std::list<std::string> sList2;
    copyListIntoAnotherList(sList1);
}