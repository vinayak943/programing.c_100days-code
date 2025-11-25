/*Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.*/

#include <stdio.h>
#include <ctype.h>

int main() 
{
    FILE *in, *out;
    char ch;

    in = fopen("input.txt", "r");
    if(in == NULL) {
        printf("Error opening input.txt\n");
        return 0;
    }
    
    out = fopen("output.txt", "w");
    if(out == NULL) {
        printf("Error creating output.txt\n");
        fclose(in);
        return 0;
    }

    while((ch = fgetc(in)) != EOF) {
        if(islower(ch))
            ch = toupper(ch);

        fputc(ch, out);
    }

    fclose(in);
    fclose(out);

    printf("File converted successfully! Check output.txt\n");

    return 0;
}

