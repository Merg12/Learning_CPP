#include <iostream>
#include <deque>
#include <list>

int main()
{
    std::list<std::string> deqStr = {"hi", "how", "are", "you", "!"};
    
    for(auto iter = deqStr.begin(); iter != deqStr.end(); ++iter)
    {
        std::cout << *iter << std::endl;
    }
    return 0;
}