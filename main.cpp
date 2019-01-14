#include <iostream>
#include <functional>
#include <algorithm>
#include <iostream>
#include <vector>


int main()
{
   std::vector<int> val{ 1, 2, 3, 4, 5 };

   auto value = std::count_if(std::begin(val), std::end(val), [](auto &elem) { return ((elem % 2) == 0); });

   std::cout << "value is " << value << std::endl;

   return 0;
}

