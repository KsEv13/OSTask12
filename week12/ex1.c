#include <stdio.h>

int main() {
    FILE * in = fopen("/dev/random", "r");
    char buffer[20];
    fgets(buffer, 20, in);
    FILE * out = fopen("ex1.txt", "w+");
    for (int i = 0; i < 20; ++i) {
        fprintf(out, "%d ", buffer[i]);
    }
}
