#include <iostream>
#include <map>
#include <vector>
#include <utility>

class Families
{
public:
    using Child = std::pair<std::string, std::string>; //first parameter for first name, second is DOB
    using Children = std::vector<Child>; //turn this Child pair into elements of a vector
    using Data = std::map<std::string, Children>; //first parameter is last name, second is the vector of pair elements

    void add(const std::string& lastName, const std::string& firstName, const std::string& birthday)
    {
        mData[lastName].push_back(std::make_pair(firstName, birthday));
    }

    std::ostream& print(std::ostream& os) const
    {
        if(mData.empty())
        {
            return os << "No data..." << std::endl;
        }
        for(const auto& pair: mData)
        {
            os << pair.first << ":\n";
            
            for(const auto& child : pair.second)
            {
                os << child.first << " " << child.second << std::endl;
            }

            os << std::endl;
        }
        return os;
    }

private:
    Data mData;
};

int main()
{
    Families families;

    std::string message = "Please enter last name, first name and birthday";
    
    for(std::string lastN, firstN, birth; std::cout << message << std::endl, std::cin >> lastN >> firstN >> birth; families.add(lastN, firstN, birth))
    {
        
    }

    families.print(std::cout << "Current data: " << std::endl);
}