/*Merging the strings: Given two strings str1 and str2 in two files file1 and file2, write a program to create a third string str3 with one character from each array alternatively. If one string is longer than the other, append the extra characters to str3. Write str3 into a different text file called file3.*/

﻿#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void mergeStrings(const char *str1, const char *str2, const char *outputFile) {
    FILE *file = fopen(outputFile, "w");
    if (!file) {
        perror("Unable to open file");
        return;
    }


    int len1 = strlen(str1), len2 = strlen(str2);
    int i = 0, j = 0;


    // Alternate characters from both strings
    while (i < len1 && j < len2) {
        fputc(str1[i++], file);
        fputc(str2[j++], file);
    }


    // Append remaining characters of the longer string
    while (i < len1) {
        fputc(str1[i++], file);
    }
    while (j < len2) {
        fputc(str2[j++], file);
    }


    fclose(file);
}


int main() {
    const char *file1Content = "Hey";  // Simulating file1 content
    const char *file2Content = "Rusheeta";  // Simulating file2 content


    // Call function to merge strings into file3
    mergeStrings(file1Content, file2Content, "file3.txt");


    printf("Merged string written to file3.txt\n");


    return 0;
}
