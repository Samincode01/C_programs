//count letters,digits,spaces
#include <stdio.h>
#include <ctype.h>

int main() {
    char text[]="I love 2023 Bangladesh" ;
    int numberofLetters= 0;
    int numberofDigits= 0;
    int numberofSpaces= 0;
        for(int index=0; text[index]!='\0';index++)
            {
                char currentcharacter= text[index];
                //is letter or not
                if((currentcharacter >= 'a')|| (currentcharacter <= 'z') && (currentcharacter >= 'A')|| (currentcharacter <= 'Z'))
                      {
                          numberofLetters++;
                      }
               if((currentcharacter >= '0')|| (currentcharacter <= '9'))
                      {
                          numberofDigits++;
                      }
               if(currentcharacter == ' ')
                      {
                          numberofSpaces++;
                      }  
            
            }
    
    printf("Number of Letters: %d\n", numberofLetters);
    printf("Number of Digits: %d\n", numberofDigits );
    printf("Number of Spaces: %d\n", numberofSpaces );
    return 0;
}
