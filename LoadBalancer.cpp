#include "Requests.h"

class LoadBalancer {
public:
    LoadBalancer(int numServers);
    void addRequest(const Request& request);
    void simulate(int simulationTime);
    // Add other methods and properties as needed.
};
