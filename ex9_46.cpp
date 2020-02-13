#include <iostream>

std::string add_prefix_suffix(const std::string& name, const std::string& prefix, const std::string& suffix)
{
    auto returnName = name;
    returnName.insert(returnName.begin(), prefix.begin(), prefix.end());
    returnName.insert(returnName.end(), suffix.begin(), suffix.end());
    return returnName;
}

int main()
{
    std::string name("My name is Slim Shady");
    std::cout << add_prefix_suffix(name, "Dr. ", " JR.") << std::endl;
    std::cout << name << std::endl;
}