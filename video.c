// #include <string.h>
// #include "config/video.h"
// // Parameters:
// //   w: width of the image
// //   h: height of the image
// //   durationMovie: duration in second of movie (colored image)
// //   durationCredits: duration in second of credit (image Black/White)
// //   unit: Unit of the output value. It could be 'bt' byte, 'ko' kilobits, 'mo' megabits, 'go' gigabits
// // Return value
// //   colored video size (based on the unit passed parametter)
// float video(int w, int h, int durationMovie, int durationCredits, int fps, char* unit) {
//    // YOUR CODE HERE - BEGIN

//    // YOUR CODE HERE - END
//    return 0;
// }


// #include <stdio.h>
// #include <string.h>

// // Function to calculate the size of the video (colored + black/white sections) in the specified unit
// float video(int w, int h, int durationMovie, int durationCredits, int fps, char* unit) {
//     // Size in bits for each section
//     long long sizeColoredSection = (long long)durationMovie * fps * w * h * 24; // colored section (24 bits per pixel)
//     long long sizeCreditsSection = (long long)durationCredits * fps * w * h; // black/white section (1 byte per pixel)

//     // Total size in bits
//     long long totalSizeInBits = sizeColoredSection + sizeCreditsSection;

//     // Convert to the requested unit
//     if (strcmp(unit, "bt") == 0) {
//         return totalSizeInBits / 8.0; // Convert to bytes
//     } else if (strcmp(unit, "ko") == 0) {
//         return totalSizeInBits / 8.0 / 1024.0; // Convert to kilobits
//     } else if (strcmp(unit, "mo") == 0) {
//         return totalSizeInBits / 8.0 / 1024.0 / 1024.0; // Convert to megabits
//     } else if (strcmp(unit, "go") == 0) {
//         return totalSizeInBits / 8.0 / 1024.0 / 1024.0 / 1024.0; // Convert to gigabits
//     } else {
//         return -1; // Invalid unit
//     }
// }

// int main() {
//     int width, height, durationMovie, durationCredits, fps;
//     char unit[3];

//     // Get user input for the video parameters
//     printf("Enter the width and height of the image: ");
//     scanf("%d %d", &width, &height);

//     printf("Enter the duration of the movie section (in seconds): ");
//     scanf("%d", &durationMovie);

//     printf("Enter the duration of the credits section (in seconds): ");
//     scanf("%d", &durationCredits);

//     printf("Enter the frames per second (FPS): ");
//     scanf("%d", &fps);

//     printf("Enter the unit (bt for bytes, ko for kilobits, mo for megabits, go for gigabits): ");
//     scanf("%s", unit);

//     // Call the video function and display the result
//     float size = video(width, height, durationMovie, durationCredits, fps, unit);
//     if (size != -1) {
//         printf("The size of the video is: %.2f %s\n", size, unit);
//     } else {
//         printf("Invalid unit entered.\n");
//     }

//     return 0;
// }


#include <string.h>

// Function to calculate the size of the video (colored + black/white sections) in the specified unit
float video(int w, int h, int durationMovie, int durationCredits, int fps, char* unit) {
    // Size in bits for each section
    long long sizeColoredSection = (long long)durationMovie * fps * w * h * 24; // colored section (24 bits per pixel)
    long long sizeCreditsSection = (long long)durationCredits * fps * w * h; // black/white section (1 byte per pixel)

    // Total size in bits
    long long totalSizeInBits = sizeColoredSection + sizeCreditsSection;

    // Convert to the requested unit
    if (strcmp(unit, "bt") == 0) {
        return totalSizeInBits / 8.0; // Convert to bytes
    } else if (strcmp(unit, "ko") == 0) {
        return totalSizeInBits / 8.0 / 1024.0; // Convert to kilobits
    } else if (strcmp(unit, "mo") == 0) {
        return totalSizeInBits / 8.0 / 1024.0 / 1024.0; // Convert to megabits
    } else if (strcmp(unit, "go") == 0) {
        return totalSizeInBits / 8.0 / 1024.0 / 1024.0 / 1024.0; // Convert to gigabits
    } else {
        return -1; // Invalid unit
    }
}
