#include <unistd.h>

int main(int argc, char *argv[]) {
    int status;

    if (! fork()) {
        char* args[] = { "/bin/false", 0 };
        execv("/bin/false", args);
    }
    wait(&status);
    system("/bin/false");

    execl("/bin/ls", "-l", 0);
}