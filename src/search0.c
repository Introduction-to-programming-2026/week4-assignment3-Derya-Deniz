#include <stdio.h>

int main() {
    // 1. Create an array of integers
    int numbers[] = {10, 25, 8, 42, 7, 15, 30};
    int size = 7; // Number of elements in the array
    int search_value;
    int found = 0; // Boolean-like variable to track if we found it

    // 2. Ask the user for a number
    printf("Enter a number to search: ");
    scanf("%d", &search_value);

    // 3. Search the array manually using a loop
    for (int i = 0; i < size; i++) {
        if (numbers[i] == search_value) {
            found = 1; // Mark as found
            break;     // Stop the loop since we found it
        }
    }

    // 4. Print the result
    if (found == 1) {
        printf("Found\n");
    } else {
        printf("Not found\n");
    }

    return 0;
}
