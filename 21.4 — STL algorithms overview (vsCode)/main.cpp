#include <iostream>
#include <algorithm> // for std::min_element and std::max_element
#include <list>
#include <numeric> // for std::iots
#include <vector>


int main()
{
    std::cout << "Hello World\n";

    //min_element and max_element:
    std::list<int> li(8);

    std::iota(li.begin(), li.end(), 0);// Fill li with numbers starting at 0.
    
    std::cout << *std::min_element(li.begin(), li.end()) << ' ' <<
                 *std::max_element(li.begin(), li.end()) << '\n';

    //find (and list::insert):
    auto myIT{ std::find(li.begin(), li.end(), 3) };

    if(myIT == li.end())//If we didn’t know for sure that 3 is an element of li, we’d have to check if std::find found it before we use the returned iterator for anything else.
    {
        std::cout << "3 was not found\n";
    }
    else
    {
        li.insert(myIT, 8);// Insert 8 right before 3.

        for(auto& element : li)// for loop with iterators
            std::cout << element << ' ';
        
        std::cout << '\n';
    }

    //Sort and reverse:
    std::vector<int> myVector{ 7, -3, 6, 2, -5, 0, 4 };
    
    // sort the vector
    std::sort(myVector.begin(), myVector.end());

    for(auto& element : myVector)
        std::cout << element << ' ';
    std::cout << '\n';

    // reverse the vector
    std::reverse(myVector.begin(), myVector.end());

    for(auto& element : myVector)
        std::cout << element << ' ';
    std::cout << '\n'; 

    return 0;
}