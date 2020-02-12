#include <iostream>

void find_and_replace(std::string& s, const std::string& oldVal, const std::string& newVal)
{
    for(auto beg = s.begin(); std::distance(beg, s.end()) >= std::distance(oldVal.begin(), oldVal.end()); )
    {
        //std::string part is an explicit conversion to string
        if(std::string(beg, beg + oldVal.size()) == oldVal)
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
    std::string str("we are tho, thru the midst of the tho tho bird thru the fires of hell");
    find_and_replace(str, "tho", "though");
    find_and_replace(str, "thru", "through");
    std::cout << str << std::endl;
}