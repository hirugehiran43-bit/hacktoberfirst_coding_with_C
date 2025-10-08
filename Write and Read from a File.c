#include <stdio.h>

int main() {
    FILE *fp;
    char text[100];

    fp = fopen("sample.txt", "w");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter text to write to file: ");
    gets(text);
    fprintf(fp, "%s", text);
    fclose(fp);

    fp = fopen("sample.txt", "r");
    printf("\nFile content:\n");
    while (fgets(text, sizeof(text), fp))
        printf("%s", text);
    fclose(fp);

    return 0;
}
