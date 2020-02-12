#include <iostream>

std::string add_prefix_suffix(const std::string& name, const std::string& prefix, const std::string& suffix)
{
    auto id = name;
    id.insert(id.begin(), prefix.begin(), prefix.end());
    id.append(suffix);

    return id;
}

int main()
{
    std::string name("Tim the toolman Taylor");
    std::cout << add_prefix_suffix(name, "Dr.", " Jr.") << std::endl;
}