#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// 
void output(char display[], int word_length, int strikes) {
    for (int i = 0; i < word_length; i++) {
        printf("%c ", display[i]);
    }
    printf("\nStrikes: %d\n", strikes);
}

int already_guessed(char guess, char guessed_letters[], int guessed_count) {
    for (int i = 0; i < guessed_count; i++) {
        if (guess == guessed_letters[i]) {
            return 1;
        }
    }
    return 0;
}

int main() {
    char *words[] = {
        "ocean","water","ducky","smoke","train","father","action","choice",
        "layer","alone","brain","craft","paint","flute","beach","heart",
        "human","image","lemon","lucky","mouse","metal","noise","plane",
        "phone","power","quiet","ready","store","sport","storm","today",
        "table","under","video","watch","young","slate","crane","brick",
        "stare","raise","arise","bread"
    };

    srand(time(NULL));
    int num_words = sizeof(words) / sizeof(words[0]);
    char *word = words[rand() % num_words];
    int strikes = 0;
    int word_length = strlen(word);
    char display[20];
    char guessed_letters[26];
    int guessed_count = 0;

    printf("Hi, welcome to Hangman!\n");
    printf("Try and figure out the word by gussing one letter at a time.\n");
    printf("After 8 incorrect answers, you are out.\n");
    printf("If you think you know it, you can guess the whole word at once.\n");
    printf("Have fun playing!\n\n");

    for(int i = 0; i < word_length; i++){
        display[i] = '_';
    }
    display[word_length] = '\0';

    while(strikes < 8){
        output(display, word_length, strikes);

        char user_input[20];
        printf("Guess a letter: ");
        scanf("%s", user_input);

        if(already_guessed(user_input[0], guessed_letters, guessed_count)){
            printf("You already guessed that letter!\n");
            continue;
        }

        if(strlen(user_input) > 1){
            if(strcmp(user_input, word) == 0){
                printf("\nHorray! You guessed the word! It was: %s.\n", word);
                printf("Rerun the code to play another round.\n");
                return 0;
            }else {
                printf("Incorrect (only guess one letter, unless going for the whole word).\n");
                strikes++;
                continue;
            }
        }

        guessed_letters[guessed_count] = user_input[0];
        guessed_count++;

        int correct = 0;
        for(int i = 0; i < word_length; i++){
            if(word[i] == user_input[0]){
                display[i] = user_input[0];
                correct = 1;
            }
        }

        if(correct){
            printf("Correct!\n");
        }else{
            printf("Incorrect!\n");
            strikes++;
        }

        if(strcmp(word, display) == 0){
            printf("\nHorray! You guessed the word! It was: %s.\n", word);
            printf("Rerun code to play another round.\n");
            return 0;
        }
    }

    printf("\nYou lost! The word was: %s.", word);
    printf("Rerun the code to play another round.");
    return 0;

return 0;
}
