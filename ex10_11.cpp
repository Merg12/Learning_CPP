#include <iostream>
#include <vector>
#include <algorithm>

bool isShorterThan(const std::string& lhs, const std::string& rhs)
{
    return lhs.size() < rhs.size();
}

void eliminateDuplicatesAlphabetize(std::vector<std::string>& sVec)
{
    std::sort(sVec.begin(), sVec.end());
    auto uniquedWords = std::unique(sVec.begin(), sVec.end());
    sVec.erase(uniquedWords, sVec.end());
}

void printOutVector(const std::vector<std::string>& sVec)
{
    for(const auto& i : sVec)
    {
        std::cout << i << std::endl;
    }
}

int main()
{
    std::vector<std::string> sVec = {"qwe", "qwl", "wlf", "qwe", "dfgg", "qwe", "dfgg", "qwe"};
    eliminateDuplicatesAlphabetize(sVec);
    std::stable_sort(sVec.begin(), sVec.end(), isShorterThan);
    printOutVector(sVec);
}