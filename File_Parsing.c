#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void parse_pdf(const char *filename) {
    // Simulated function to parse a PDF file
    printf("Parsing PDF file: %s\n", filename);
    
    // Simulate potential vulnerability: if the PDF is malformed
    if (strcmp(filename, "malformed.pdf") == 0) {
        // Trigger a crash or undefined behavior
        printf("Error: Malformed PDF detected!\n");
        
        // Simulate memory corruption by accessing out-of-bounds memory
        char *buffer = (char *)malloc(10 * sizeof(char));
        strcpy(buffer, "This is too long for the buffer!"); // Buffer overflow
        free(buffer); // Free allocated memory
    }

    // Normal processing of the PDF would occur here
    printf("PDF parsed successfully.\n");
}

int main() {
    // Example of user input (could be from an untrusted source)
    const char *pdf_file = "malformed.pdf"; // This would be crafted by an attacker

    parse_pdf(pdf_file); // Attempt to parse the PDF

    return 0;
}

    