#include <iostream>
#include <vector> // for std::vector
#include <set> // for std::set
#include <map> // std::map
#include <string>

int main()
{
    //Lets take a look at some examples of using iterators. Iterating through a std::vector:
    std::cout << "std::vector: " << '\n';
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
    std::cout << "std::set: " << '\n';
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
    std::cout << "std::map: " << '\n';
    std::map<int, std::string> mymap{};
    mymap.insert(std::make_pair(4, "apple"));
    mymap.insert(std::make_pair(2, "orange"));
    mymap.insert(std::make_pair(1, "banana"));
    mymap.insert(std::make_pair(3, "grapes"));
    mymap.insert(std::make_pair(6, "mango"));
    mymap.insert(std::make_pair(5, "peach"));

    auto it_2{ mymap.cbegin() };// declare a const iterator and assign to start of vector
    while(it_2 != mymap.cend())// while it hasn't reach the end
    {
        std::cout << it_2->first << '=' << it_2->second << ' ';// print the value of the element it points to
        ++it_2;// and iterate to the next element
    }
    std::cout << '\n';

    //Conclusion:
    
    



    return 0;
}