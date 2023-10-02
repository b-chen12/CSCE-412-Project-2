#include <iostream>
#include <ctime> 
#include "LoadBalancer.h"

int main() {
    std::srand(static_cast<unsigned>(std::time(nullptr))); 

    // User input 
    int serverCount, cycleCount;
    std::cout << "Enter the number of servers: ";
    std::cin >> serverCount;
    std::cout << "Enter the cycleCount: ";
    std::cin >> cycleCount;
}
