/*Mansi loves playing word games and wants to create her own word counter program. She is new to programming and needs your help to build a program that can count the number of words in a sentence. 



Guide her by writing a program that takes a sentence as input and outputs the total number of words in it.

Input format :
The input consists of a single line containing a sentence.

Output format :
The output prints an integer representing the number of words in the given sentence.*/

#include <stdio.h>

int main() {
    char sentence[200];
    int word_count = 0;
    scanf("%[^\n]", sentence);

    int i = 0;
    while (sentence[i] != '\0') {
        if (sentence[i] != ' ' && (sentence[i + 1] == ' ' || sentence[i + 1] == '\0')) {
            word_count++;
        }
        i++;
    }

    printf("%d", word_count);

    return 0;
}
