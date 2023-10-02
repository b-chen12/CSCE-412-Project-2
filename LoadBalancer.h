#include <vector>
#include <queue>
#include "WebServer.h"
#include "Requests.h"

class LoadBalancer {
public:
    LoadBalancer(int serverCount);

    void addRequest(const Request& request);
    void balanceLoad();
private:
    std::vector<WebServer> servers;
    std::queue<Request> requestQueue;
    Request generateRandomRequest();

};
