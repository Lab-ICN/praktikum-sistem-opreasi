// Source: https://gist.github.com/ahmadnafi30/3140da51f247992e5a3045a6986ee607 
// Original author: @ahmadnafi30
// Modified for lab practicum purposes

#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    if (argc == 1) {
        printf("Usage: %s [directory]\n", *argv);
        exit(0);
    }

    struct dirent *dp;
    DIR *dirp = opendir(argv[1]);

    while ((dp = readdir(dirp)) != NULL) {
        printf("%s %lu\n", dp->d_name, (unsigned long) dp->d_ino);
    }

    closedir(dirp);
    return 0;
}