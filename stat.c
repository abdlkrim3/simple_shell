#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>

int main() {
    struct stat statbuf;

    if (stat("/home", &statbuf) == -1) {
        perror("stat");
        return 1;
    }

    printf("File size: %ld\n", statbuf.st_size);
    return 0;
}
