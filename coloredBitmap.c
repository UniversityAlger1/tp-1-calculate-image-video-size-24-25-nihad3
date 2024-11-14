// #include <string.h>
// #include "config/coloredBitmap.h"
// // Parameters:
// //   w: width of the image
// //   h: height of the image
// //   u: Unit of the output value. It could be 'bt' bits, 'ko' kilobits, 'mo' megabits, 'go' gigabits
// // Return value
// //   colored image size Bitmap (based on the unit passed parametter)
// float coloredBitmap(int w, int h, char* unit) {
//    // YOUR CODE HERE - BEGIN

//    // YOUR CODE HERE - END
//    return 0;
// }




// #include <stdio.h>
// #include <string.h>

// // Function to calculate the size of a colored bitmap image in the specified unit
// float coloredBitmap(int w, int h, char* unit) {
//     // Step 1: Calculate the size in bits (24 bits per pixel for RGB)
//     float sizeInBits = w * h * 24;

//     // Step 2: Convert the size to the desired unit
//     if (strcmp(unit, "bt") == 0) {
//         return sizeInBits;
//     } else if (strcmp(unit, "ko") == 0) {
//         return sizeInBits / 1024.0; // Convert to kilobits
//     } else if (strcmp(unit, "mo") == 0) {
//         return sizeInBits / (1024.0 * 1024.0); // Convert to megabits
//     } else if (strcmp(unit, "go") == 0) {
//         return sizeInBits / (1024.0 * 1024.0 * 1024.0); // Convert to gigabits
//     } else {
//         return -1; // Invalid unit
//     }
// }

// int main() {
//     int width, height;
//     char unit[3];

//     // Get the width, height, and unit from the user
//     printf("Enter the width and height of the image: ");
//     scanf("%d %d", &width, &height);

//     printf("Enter the unit (bt for bits, ko for kilobits, mo for megabits, go for gigabits): ");
//     scanf("%s", unit);

//     // Call the function and print the result
//     float size = coloredBitmap(width, height, unit);
//     if (size != -1) {
//         printf("The size of the colored bitmap image is: %.2f %s\n", size, unit);
//     } else {
//         printf("Invalid unit entered.\n");
//     }

//     return 0;
// }


#include <string.h>

// Function to calculate the size of a colored bitmap image in the specified unit
float coloredBitmap(int w, int h, char* unit) {
    // Calculate size in bits (24 bits per pixel for RGB)
    long long sizeInBits = (long long)w * h * 24;

    // Convert the size to the desired unit
    if (strcmp(unit, "bt") == 0) {
        return (float)sizeInBits; // Return size in bits
    } else if (strcmp(unit, "ko") == 0) {
        return sizeInBits / 1024.0; // Convert to kilobits
    } else if (strcmp(unit, "mo") == 0) {
        return sizeInBits / (1024.0 * 1024.0); // Convert to megabits
    } else if (strcmp(unit, "go") == 0) {
        return sizeInBits / (1024.0 * 1024.0 * 1024.0); // Convert to gigabits
    } else {
        return -1; // Invalid unit
    }
}

