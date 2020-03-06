#include <iostream>
#include <functional>
#include <vector>

using namespace std::placeholders; // namespace std::placeholders;


auto smallerThanThis(const std::string& str, std::string::size_type siz)
{
    return str.size() <= siz;
}

int main()
{
    std::vector<std::string> sVec = {"asde", "werzxc", "asdssfe", "sa", "fdsfsf", "frt", "sdf", "a"};
    auto count = std::count_if(sVec.begin(), sVec.end(), bind(smallerThanThis, _1, 6));

    std::cout << count << std::endl;
}