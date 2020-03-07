#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std::placeholders;

void eliminateDuplicate(std::vector<std::string>& sVec)
{
    std::sort(sVec.begin(), sVec.end());
    auto uniqueWords = std::unique(sVec.begin(), sVec.end());
    sVec.erase(uniqueWords, sVec.end());
}

bool checkSize(const std::string& str, std::string::size_type siz)
{
    return str.size() <= siz;
}

void biggies(std::vector<std::string>& sVec, std::vector<std::string>::size_type siz)
{
    eliminateDuplicate(sVec);
    auto orderBiggies = std::stable_partition(sVec.begin(), sVec.end(), bind(checkSize, _1, siz));
    std::for_each(sVec.begin(), orderBiggies, [](const std::string& str) {std::cout << str << " ";});
}
''
int main()
{
    std::vector<std::string> sVec{"the","dg","tyrgdf","sfdgsdgbcv","jhgj","ertjju","sfgerfdg","gfhvbncxb","gdhtryrt","sdfgfhg","asdfasd","erfasd"};
    biggies(sVec, 6);
}