// Name Ankesh Sharma
// Date 03-01-2024
// Language C


#include <stdio.h>

#include <stdio.h>
#include <conio.h>



int binary(int num);

int main() {
    int num = -12;
    binary(num);

    return 0;
}


int binary(int num) {
     if (num == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    // Step 1: Find binary representation of the absolute value
    int absNum = (num < 0) ? -num : num;
    int binary[32]; // Assuming a 32-bit integer
    int index = 0;

    while (absNum > 0) {
        binary[index++] = absNum % 2;
        absNum /= 2;
    }

    // Step 2: Apply two's complement for negative numbers
    if (num < 0) {
        // Flip the bits
        for (int i = 0; i < index; i++) {
            binary[i] = (binary[i] == 0) ? 1 : 0;
        }

        // Add 1 to the result
        int carry = 1;
        for (int i = 0; i < index; i++) {
            int sum = binary[i] + carry;
            binary[i] = sum % 2;
            carry = sum / 2;
        }
    }
    printf("Binary: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");

    return 0;
}
