#include "Requests.h"
#include "LoadBalancer.h"

LoadBalancer::LoadBalancer(int serverCount) {
    for (int i = 0; i < serverCount; i++) {
        servers.push_back(WebServer("Server" + std::to_string(i)));
    }
}

void LoadBalancer::addRequest(const Request& request) {

    // push instead of push back because of queue
    requestQueue.push(request);
}
