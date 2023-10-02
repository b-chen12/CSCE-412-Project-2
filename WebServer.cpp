#include "Requests.h"
#include "WebServer.h"

WebServer::WebServer(const std::string& name) : serverName(name), available(true) {}
