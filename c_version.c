//IG JS IL 6th c final
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>


int main(void){
    
    char* list[] = {
        "quark", "ocean", "water", "ducky","smoke","train", "layer","alone","brain","craft","paint",
        "flute","beach","heart","human","image","lemon","lucky","mouse","metal","noise","plane","phone",
        "power","quiet","ready","store","sport","storm","today","table","under","video","watch","young",
        "slate","crane","brick","stare","raise","arise","farts","bread"
    };
    
    int num;
    srand(time(NULL));
    for(int i=0; i>10; i++){
        int num = rand() %43;
        printf("%ls\n",&num);
        return 0;
    }
    char* list[] = list[num];
    char word[20]=list;
    int strikes = 0;
    int word_length = strlen(word);
    char display[20];
    char guessed_letters[26];
    int guessed_count = 0;

    printf("Hi welcome to hangman!\nThis game consists of an unknown five letter word. First, begin to assemble the word by guessing one letter at a time. Second, if you guess a letter that is not in the word, a strike will appear. If you gain 8 strikes, you're out. Lastly, if you think you know the word, you can guess the whole word at once. Try to fill in the whole word with minimal strikes. Have fun playing!");

    char output_list[20];


     while (strikes < 8){
        for(int i = 0; i < word_length; i++){
            printf("%c ", display[i]);
        }
        printf("\nStrikes: %d\n", strikes);
        char user_input[20];
        printf("Guess a letter: ");
        scanf("%s", user_input);
        int already_guessed = 0;
        for(int i = 0; i < guessed_count; i++){
            if(user_input[0] == guessed_letters[i]){
                already_guessed = 1;
                break;
            }
        }
        if(already_guessed){
            printf("You already guessed that letter!\n");
            continue;
        }
        if(strlen(user_input) > 1){
            if(strcmp(user_input, word) == 0){
                printf("\nHooray! You guessed the word! %s\n", word);
                printf("Rerun the program to play again.\n");
                return 0;
            }else{
                printf("Incorrect full-word guess.\n");
                strikes++;
                continue;
            }

    }
    printf("\nYou lost! The word was %s.\n", word);
    return 0;

        
        if (strcmp(word, user_input) == 0) {
            printf("Yes that is the word! congratulations. Rerun code to play another round.\n");
            break;
        }else{
            continue;
        }
        
    printf("You lost! The word was: %s\n", word);
    return strikes + 1;
    }
}