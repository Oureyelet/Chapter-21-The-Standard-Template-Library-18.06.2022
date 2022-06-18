#include <iostream>
#include <vector> //for std::vector
#include <deque> // for std:: deque

int main()
{
    std::cout << "Hello World" << '\n';

    //Sequence Containers:
    /*
    As of C++11, the STL contains 6 sequence containers: 
    std::vector, std::deque, std::array, std::list, std::forward_list, and std::basic_string.
    */
    std::cout << "Vector: " << '\n';
    std::vector<int> vect{};
    for(int i{ 0 }; i < 6; ++i)
    {
        vect.push_back( 10 - i); // insert at end of array
    }

    for(auto index : vect)
        std::cout << index << ' ';
    std::cout << std::endl;

    std::cout << "Deque: " << '\n';
    std::deque<int> deq{};

    for(int i{ 0 }; i < 3; ++i)
    {
        deq.push_back(i);// insert at end of array
        deq.push_front(10 - i);// insert at front of array
    }

    for(auto index : deq)
        std::cout << index << ' ';
    std::cout << std::endl;

    //Associative Containers:

    //Container Adapters:

    return 0;
}