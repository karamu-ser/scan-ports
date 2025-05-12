#include <iostream>
#include <string>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>

using namespace std;

bool isPortOpen(const string& ip, int port) {
    int sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd < 0) return false;
    sockaddr_in target;
    target.sin_family = AF_INET;
    target.sin_port = htons(port);
    inet_pton(AF_INET, ip.c_str(), &target.sin_addr);
    int result = connect(sockfd, (sockaddr*)&target, sizeof(target));
    close(sockfd);
    return result == 0;
}

int main() {
    string ip;
    int startPort, endPort;

    cout << "IP cible: ";
    cin >> ip;
    cout << "Port début: ";
    cin >> startPort;
    cout << "Port fin: ";
    cin >> endPort;
    for (int port = startPort; port <= endPort; ++port)
    {
        if (isPortOpen(ip, port))
            cout << "Port " << port << " est OUVERT ✅" << endl;
        else
            cout << "Port " << port << " est fermé ❌" << endl;
    }
    return 0;
}
