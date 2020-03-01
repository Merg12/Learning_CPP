#include <iostream>
#include <vector>
#include <algorithm>

void eliminateDuplicates(std::vector<std::string>& sVec)
{
    std::sort(sVec.begin(), sVec.end());
    auto uniqueStrs = std::unique(sVec.begin(), sVec.end());
    sVec.erase(uniqueStrs, sVec.end());
}

void smallToBigger(std::vector<std::string> sVec, std::vector<std::string>::size_type siz)
{
    eliminateDuplicates(sVec);
    auto partitionLambda = std::stable_partition(sVec.begin(), sVec.end(), [siz](std::string& str){return str.size() >= siz;}); //you can change partition to stable_partition and see how it maintains the original order
    for(auto i = sVec.begin(); i != partitionLambda; ++i)
    {
        std::cout << *i << std::endl;
    }
}

int main()
{
    std::vector<std::string> m_sVec = {"morgan", "had", "the", "cat", "in", "the", "hat", "and", "logan", "and", "alice", "and", "julie", "and", "mommy", "had", "the", "cat", "happy"};
    smallToBigger(m_sVec, 4);
}