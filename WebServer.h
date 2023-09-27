#pragma once

#include <string>

class WebServer {
public:
    WebServer(const std::string& name);

    void processRequest(const Request& request);
    bool isAvailable() const;

private:
    std::string serverName;
    bool available;
};
