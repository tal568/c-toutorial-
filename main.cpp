#include <iostream>

int main()
{
    auto results = (10 <=> 20) > 0;
    std::cout << results << std::endl;
}