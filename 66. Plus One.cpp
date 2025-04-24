#include <stdlib.h>

int* plusOne(int* digits, int digitsSize, int* returnSize) {
    // Allocate memory for the result array (same size as input by default)
    int* result = (int*)malloc((digitsSize + 1) * sizeof(int));
    
    if (!result) {
        *returnSize = 0;
        return NULL;  // In case memory allocation fails
    }

    int carry = 1;  // Start with the "plus one" effect

    // Process the digits from the end to the beginning
    for (int i = digitsSize - 1; i >= 0; i--) {
        int sum = digits[i] + carry;
        result[i + 1] = sum % 10;  // Store the last digit
        carry = sum / 10;  // Carry will be either 0 or 1
    }

    // If carry is still 1, we need to adjust the first element
    if (carry) {
        result[0] = 1;
        *returnSize = digitsSize + 1;  // New array size is original size + 1
    } else {
        // No carry, result is the same size as the input
        for (int i = 0; i < digitsSize; i++) {
            result[i] = result[i + 1];
        }
        *returnSize = digitsSize;  // No new digit
    }

    return result;
}
