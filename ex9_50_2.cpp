#include <iostream>
#include <vector>

int sumOfStringToInts(const std::vector<std::string>& vStr)
{
    int sum = 0; //i didnt initialize this sum and the output was 32781, but after initializing it to 0, the answer is correct
    for(auto& i : vStr)
    {
        sum += stoi(i);
    }
    return sum;
}

int main()
{
    std::vector<std::string> vStr = {"0", "1", "2", "3", "4", "5"};
    std::cout << sumOfStringToInts(vStr) << std::endl;
}