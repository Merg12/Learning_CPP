#include <iostream>
#include <list>
#include <deque>

int main()
{
    std::list<int> lstInt = {1,2,4,5,6,7,34,765,234};
    
    std::deque<int> deqEven;
    std::deque<int> deqOdd;

    for(auto& i : lstInt)
    {
        if(i%2 == 0)
        {
            deqEven.push_back(i);
        }
        else
        {
            deqOdd.push_back(i);
        }
    }
    for(auto& h : deqEven)
    {
        std::cout << h << " "; 
    }
    std::cout << std::endl;
        
    for(auto& g : deqOdd)
    {
        std::cout << g << " ";
    }
    std::cout << std::endl;
}