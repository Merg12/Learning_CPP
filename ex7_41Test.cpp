#include "ex7_41.hpp"

int main()
{
    std::cout << "1. default way: " << std::endl;
    std::cout << "________________" << std::endl;
    Sales_data s1;

    std::cout << "\n2. use std::string as parameter: " << std::endl;
    std::cout << "________________" << std::endl;
    Sales_data s2("CPP-Primer-5th");

    std::cout << "\n3. complete parameters: " << std::endl;
    std::cout << "________________" << std::endl;
    Sales_data s3("CPP-Primer-5th", 3, 25.0);

    std::cout << "\n4. use istream as parameter: " << std::endl;
    std::cout << "________________" << std::endl;
    Sales_data s4(std::cin);
}