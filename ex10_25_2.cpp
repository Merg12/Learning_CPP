#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std::placeholders;

void eliminateDuplicate(std::vector<std::string>& sVec)
{
    std::sort(sVec.begin(), sVec.end());
    auto uniqueWord = std::unique(sVec.begin(), sVec.end());
    sVec.erase(uniqueWord, sVec.end());
}

bool checkSize(const std::string& str, std::string::size_type siz)
{
    return str.size() <= siz;
}

void partitionWord(std::vector<std::string>& sVec, std::vector<std::string>::size_type siz)
{
    eliminateDuplicate(sVec);
    auto partitionPosition = std::stable_partition(sVec.begin(), sVec.end(), bind(checkSize, _1, siz));
    std::for_each(sVec.begin(), partitionPosition, [](std::string& str){std::cout << str << std::endl;});
}

int main()
{
    std::vector<std::string> sVec = {"1","22","333","4444","55555","666666","7777777","88888888","999999999"};
    partitionWord(sVec, 6);
}