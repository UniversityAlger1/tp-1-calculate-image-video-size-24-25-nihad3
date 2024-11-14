// #include "config/grayScaleImage.h"
// // Parameters:
// //   w: width of the image
// //   h: height of the image
// // Return value
// //   grayScale size of the image Bitmap (in byte)
// float grayScaleImage(int w, int h) {
//    // YOUR CODE HERE - BEGIN

//    // YOUR CODE HERE - END
//    return 0;
// }

#include <stdio.h>

// Function to calculate the size of a grayscale bitmap image in bytes
float grayScaleImage(int w, int h) {
    // Each pixel in a grayscale image uses 1 byte
    return w * h * 1.0; // Size in bytes
}


// // Function to calculate the size of a grayscale bitmap image in bytes
// float grayScaleImage(int w, int h) {
//     // Each pixel in a grayscale image uses 1 byte
//     return w * h * 1.0; // Size in bytes
// }

// int main() {
//     int width, height;

//     // Get the width and height from the user
//     printf("Enter the width and height of the grayscale image: ");
//     scanf("%d %d", &width, &height);

//     // Call the grayScaleImage function and print the result
//     float size = grayScaleImage(width, height);
//     printf("The size of the grayscale image is: %.2f bytes\n", size);

//     return 0;
// }


