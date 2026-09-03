#include <unistd.h>
#include <sys/syscall.h>
#include <string.h>

int main() {
    char out[] = "hello STDOUT\n";
    char err[] = "ERROR: this is an error";
    syscall(SYS_write, STDOUT_FILENO, out, strlen(out));
    syscall(SYS_write, STDERR_FILENO, err, strlen(err));
    return 0;
}