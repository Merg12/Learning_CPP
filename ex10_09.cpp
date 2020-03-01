#include <iostream>
#include <vector>
#include <algorithm>

void eliminateDuplicates(std::vector<std::string>& sVec)
{
    std::sort(sVec.begin(), sVec.end());
    auto uniqueEnd = std::unique(sVec.begin(), sVec.end());
    sVec.erase(uniqueEnd, sVec.end());
}

void printOut(std::vector<std::string>& sVec)
{
    for(auto& i : sVec)
    {
        std::cout << i << std::endl;
    }
}

int main()
{
    std::vector<std::string> sVec = {"h", "d", "a", "h", "u", "d", "wer", "as", "wer"};
    eliminateDuplicates(sVec);
    printOut(sVec);
}