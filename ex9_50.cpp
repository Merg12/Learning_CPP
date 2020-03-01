#include <iostream>
#include <vector>

std::vector<int> string_To_Numbers(const std::vector<std::string>& f_vStr)
{
    std::vector<int> f_vInt;
    for(auto& i : f_vStr)
    {
        int Num = stoi(i);
        f_vInt.push_back(Num);
    }
    return f_vInt;
}

void sum_Of_Converted_Strings_To_Ints(const std::vector<std::string>& f_vStr)
{
    auto f_vInt = string_To_Numbers(f_vStr);
    int sum = 0;
    for(auto& i : f_vInt)
    {
       sum += i; 
    }
    std::cout << sum << std::endl;
}

int main()
{
    std::vector<std::string> vStr = {"0", "1", "2", "3", "4", "10000"};
    sum_Of_Converted_Strings_To_Ints(vStr);
}