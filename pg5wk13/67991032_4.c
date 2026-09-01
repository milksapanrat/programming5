#include <stdio.h>
#include <string.h>

struct PROCESSOR {
    char model[15];
    int cores;
};

struct SERVER {
    char hostname[20];
    struct PROCESSOR cpu;
};

struct SERVER createServer() {
    struct SERVER server;

    memset(&server, 0, sizeof(server));

    printf("Enter Server Hostname: ");
    scanf("%19s", server.hostname);
    printf("Enter CPU Model: ");
    scanf("%14s", server.cpu.model);
    printf("Enter CPU Cores: ");
    scanf("%d", &server.cpu.cores);

    return server;
}

int main() {
    struct SERVER server;

    server = createServer();

    struct SERVER *ptr = &server;

    printf("\n--- Server Specs via Pointer ---\n");
    printf("Hostname: %s\n", ptr->hostname);
    printf("CPU Model: %s\n", ptr->cpu.model);
    printf("Total Cores: %d\n", ptr->cpu.cores);
    
    return 0;
}