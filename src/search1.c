#include <stdio.h>
#include <string.h>

int main() {
    // 1. Create an array of strings (names)
    // We use [5][10] means 5 names, and each name can be up to 10 chars
    char names[5][10] = {"Ali", "Ayse", "Derya", "Deniz", "Mehmet"};
    char search_name[10];
    int found = 0;

    // 2. Ask the user for a name
    printf("Enter a name to search: ");
    scanf("%s", search_name);

    // 3. Search the array
    for (int i = 0; i < 5; i++) {
        // 4. Use strcmp() to compare strings
        if (strcmp(names[i], search_name) == 0) {
            found = 1;
            break;
        }
    }

    // 5. Print the result
    if (found == 1) {
        printf("Found\n");
    } else {
        printf("Not found\n");
    }

    return 0;
}
