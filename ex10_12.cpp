#include <iostream>
#include <vector>
#include <algorithm>

#include "Sales_data.hpp"

bool compareIsbn(const Sales_data &item1, const Sales_data &item2)
{
    return item1.isbn() < item2.isbn();
}

int main()
{
    std::vector<Sales_data> booksIsbn{{"9-999-99999-9"}, {"1-111-11111-1"}, {"4-444-44444-4"}, {"7-777-77777-7"}, {"3-333-33333-3"}, {"5-555-55555-5"}};
    std::sort(booksIsbn.begin(), booksIsbn.end(), compareIsbn);
    for(auto const &book : booksIsbn)
    {
        print(std::cout, book);
    }
    std::cout << '\n';
    return 0;
}