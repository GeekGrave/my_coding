#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *srcFile;
    FILE *destFile;
    char srcPath[100];
    char destPath[100];
    printf("Enter source file path: ");
    scanf("%s", sourcePath);
    printf("Enter destination file path: ");
    scanf("%s", destPath);

    srcFile = fopen(srcPath, "r");
    destFile = fopen(destPath,   "w");

    if (srcFile == NULL || destFile == NULL){
        printf("Unable to open file.\n");
        exit(0);
    }
    
    char ch = fgetc(srcFile);
    while (ch != EOF){
        fputc(ch, destFile);
        ch = fgetc(srcFile);
    }


    printf("Files copied successfully.\n");
    fclose(srcFile);
    fclose(destFile);
    return 0;
}