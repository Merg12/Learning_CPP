#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>

using namespace std::placeholders;

auto check_size(const std::string& str, std::string::size_type siz)
{
    return str.size() < siz;
}

std::vector<int>::iterator checkIfBigger(std::vector<int>& sVec, const std::string str)
{
    auto found = std::find_if(sVec.begin(), sVec.end(), bind(check_size, str, _1));
    return found;
}

int main()
{
    std::vector<int> intVec = {1,2,3,4,5,6,7,8,9,10};
    std::string str("test");
    std::cout << *checkIfBigger(intVec, str) << std::endl;
}