#include <iostream>
#include <vector>
#include <deque>

auto reorderTheseNumbers(std::vector<int>& iVec1, std::vector<int>& iVec2)
{
    std::copy(iVec1.begin(), iVec1.end(), std::inserter(iVec2, iVec2.begin())); //weird thing is that this iVec.begin() updates to the next element each time so it DOES start at begin, but then with the next iteration, it will position at the element that was inserted. inserter apparent returns the next element after the position denoted by the iterator
    for(auto& i : iVec2)
    {
        std::cout << i << std::endl;
    }
}

auto reorderTheseNumbersFromFront(std::deque<int>& iVec1, std::deque<int>& iVec2)
{
    std::copy(iVec1.begin(), iVec1.end(), std::front_inserter(iVec2)); //weird thing is that this iVec.begin() updates to the next element each time so it DOES start at begin, but then with the next iteration, it will position at the element that was inserted. inserter apparent returns the next element after the position denoted by the iterator
    for(auto& i : iVec2)
    {
        std::cout << i << std::endl;
    }
}

int main()
{
    std::vector<int> iVec1 = {1,2,3,4,5,6,7,8,9};
    std::vector<int> iVec2;
    reorderTheseNumbers(iVec1, iVec2);
    
    std::deque<int> iDeq1 = {1,2,3,4,5,6,7,8,9};
    std::deque<int> iDeq2;
    reorderTheseNumbersFromFront(iDeq1, iDeq2);
}