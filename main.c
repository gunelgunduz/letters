#include <stdio.h>

// Daxil edilmiş cümlədə hərflərin neçə dəfə istifadə olunduğunu tapın

void calculate(char*);

int main()
{
    char message[100];
    puts("Enter a sentence:");
    gets(message);
    calculate(message);
     return 0;
}

void calculate(char* ptr)
{
    int letters[26], i=0, length;
    char activeLetter;
    length=strlen(ptr);

    for(i=0; i<26; i++){
        letters[i]=0;
    }

    for(i=0; i<length; i++){
        activeLetter=toupper(*(ptr+i));
        letters[activeLetter-65]++;
    }
    printf("Letters\tRepeat\n");
    printf("------\t------\n");

    for(i=0; i<26; i++){
        if(letters[i]!=0){
            printf("%c\t%d\n", i+65, letters[i]);
        }
    }
}