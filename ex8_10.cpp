#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

int main()
{
    std::istringstream is("helllo there my friend");
    if(!is)
    {
        std::cout << "hey! no data?!" << std::endl;
        return -1;
    }

    std::vector<std::string> vecLine;
    std::string line;
    while(getline(is, line))
    {
        std::cout << "this is after getline: " + line << std::endl;
        vecLine.push_back(line);
    }

    for(auto& elem : vecLine)
    {
        std::cout << "this is after the range for for each ELEMENT from vector element: " + elem << std::endl;
        std::istringstream iss(elem);
        std::string singleWord;
        while(iss >> singleWord)
        {
            std::cout << singleWord << std::endl;
        }
    }
    return 0;
}