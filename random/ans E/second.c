#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *srcFile;
    char srcPath[100];
    printf("Enter source file path: ");
    scanf("%s", sourcePath);

    srcFile = fopen(srcPath, "r");

    if (srcFile == NULL){
        printf("Unable to open file.\n");
        exit(0);
    }
    
    char ch = fgetc(srcFile);
    int ctr=0;
    while (ch != EOF){
        ctr++;
        ch = fgetc(srcFile);
    }


    printf("Frequence of characters in the file is : %d",ctr);
    fclose(srcFile);
    return 0;
}