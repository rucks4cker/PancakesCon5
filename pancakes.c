#include <stdio.h>
#include <windows.h>

/* Benign file for PancakesCon5 example */
/* Writes "I love pancakes!" to console every 2 seconds until killed. */
/* Allows observer to see the file in ProcessExplorer */

int main() {
    while (1) {
        printf("I love pancakes!\n");
		Sleep(2000); // 2 seconds
    }
    return 0;
}