#include <iostream>

void find_and_replace(std::string& s, const std::string& oldVal, const std::string& newVal)
{
    for(auto beg = s.begin(); std::distance(beg, s.end()) >= std::distance(oldVal.begin(), oldVal.end()); )
    {
        //std::string part is an explicit conversion to string
        if(std::string(beg, beg + oldVal.size()) == oldVal) //if starting letter to the length of letters in oldVal is exactly the same as oldVal
        {
            s.replace(beg, beg + oldVal.size(), newVal);
            std::advance(beg, newVal.size());
        }
        else
        {
            ++beg;
        }
    }
}

int main()
{
    std::string str("To drive straight thru thru is a foolish, tho courageous act.");
    find_and_replace(str, "thru", "through");
    find_and_replace(str, "tho", "though");
    std::cout << str << std::endl;
}