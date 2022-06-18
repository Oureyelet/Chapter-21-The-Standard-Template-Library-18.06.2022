#include <iostream>
#include <vector> // for std::vector
#include <set> // for std::set
#include <map> // std::map
#include <string>

int main()
{
    //Lets take a look at some examples of using iterators. Iterating through a std::vector:
    std::vector<int> vect{};
    for(int i{ 0 }; i < 6; ++i)
        vect.push_back(i);
    
    std::vector<int>::const_iterator it{};// declare a read-only iterator
    it = vect.cbegin();// assign it to the start of the vector

    while(it != vect.cend())// while it hasn't reach the end
    {
        std::cout << *it << ' ';// print the value of the element it points to
        ++it;// and iterate to the next element
    }
    std::cout << std::endl;

    //Iterating through a set:
    std::set<int> mySet{};
    mySet.insert(7);
    mySet.insert(2);
    mySet.insert(-6);
    mySet.insert(8);
    mySet.insert(1);
    mySet.insert(-4);
    
    std::set<int>::const_iterator it_set{};// declare an iterator
    it_set = mySet.cbegin();// assign it to the start of the set

    while(it_set != mySet.cend())// while it hasn't reach the end
    {
        std::cout << *it_set << ' ';// print the value of the element it points to
        ++it_set;// and iterate to the next element
    }
    std::cout << std::endl;

    //Iterating through a map:
    



    return 0;
}