#include "Requests.h"
#include <cstdlib> 

Request::Request(const std::string& ipIn, const std::string& ipOut, int time)
    : ipIn(ipIn), ipOut(ipOut), time(time) {
    std::string ipIn = std::to_string(0) + "." +
                            std::to_string(std::rand() % 256) + "." +
                            std::to_string(std::rand() % 256) + "." +
                            std::to_string(std::rand() % 256);
    std::string ipOut =  std::to_string(1) + "." +
                            std::to_string(std::rand() % 256) + "." +
                            std::to_string(std::rand() % 256) + "." +
                            std::to_string(std::rand() % 256);

    time = 3 + (std::rand() % 8);

}


