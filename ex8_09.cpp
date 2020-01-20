#include <iostream>
#include <sstream>

std::istream& func(std::istream& is)
{
    std::string buf;
    while(is >> buf) //places entire 'is' into 'buf'
    {
        std::cout << buf << std::endl; //just prints out 'buf'
    }
    is.clear(); //reset all condition values to valid state
    return is; //returns 'is'
}

int main()
{
    std::istringstream iss("hello");
    func(iss);
    return 0;
}