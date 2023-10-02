#pragma once

#include <string>

class Request {
public:
    Request(const std::string& ipIn, const std::string& ipOut, int time);

private:
    std::string ipIn;
    std::string ipOut;
    int time;

    // Private member function to generate random IP addresses
    void getRandomIp();
};
