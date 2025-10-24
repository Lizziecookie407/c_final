#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Eliza - prints the whole output, including the spaces, strikes, the hangman picture, and the letters already guessed
void output(char display[], int word_length, int strikes) {
    char picture[60];
    if(strikes == 8){
        char picture[60] = "|------¿\n|      O\n|     ≤))≥\n|     _|\_\n|___________";
    }else if (strikes == 7){
        char picture[60] = "|------¿\n|      O\n|     ≤))≥\n|     _|\ \n|___________";
    }else if (strikes == 6){
        char picture[60] = "|------¿\n|      O\n|     ≤))≥\n|      |\ \n|___________";
    }else if (strikes == 5){
        char picture[60] = "|------¿\n|      O\n|     ≤))≥\n|      | \n|___________";
    }else if (strikes == 4){
        char picture[60] = "|------¿\n|      O\n|     ≤))≥\n|\n|___________";
    }else if (strikes == 3){
        char picture[60] = "|------¿\n|      O\n|     ≤))\n|\n|___________";
    }else if (strikes == 2){
        char picture[60] = "|------¿\n|      O\n|      ))\n|\n|___________";
    }else if (strikes == 1){
        char picture[60] = "|------¿\n|      O\n|\n|\n|___________";
    }else if (strikes == 0){
        char picture[60] = "|------¿\n|\n|\n|\n|___________";
    }else{
        char picture[60] = "|------¿\n|\n|\n|\n|___________";
    }
    

    for (int i = 0; i < word_length; i++) {
        printf("%c ", display[i]);
    }
    printf("\nStrikes: %d\n%s\n\n", strikes, picture);
}

// Isabella
int already_guessed(char guess, char guessed_letters[], int guessed_count) {
    for (int i = 0; i < guessed_count; i++) {
        if (guess == guessed_letters[i]) {
            return 1;
        }
    }
    return 0;
}

int main() {
// ian wuz here
//list of words
    char *words[] = {
        "ocean","water","ducky","smoke","train","father","action","choice",
        "layer","alone","brain","craft","paint","flute","beach","heart",
        "human","image","lemon","lucky","mouse","metal","noise","plane",
        "phone","power","quiet","ready","store","sport","storm","today",
        "table","under","video","watch","young","slate","crane","brick",
        "stare","raise","arise","bread","hippopotomonstrosesquippedaliophobia",
        "pneumonoultramicroscopicsilicovolcanoconiosis","supercalifragilisticexpialidocious",
        "antidisestablishmentarianism","floccinaucinihilipilification",
        "defenistration"
    };
//picks a random word out of the 
    srand(time(NULL));
    int num_words = sizeof(words) / sizeof(words[0]);
    char *word = words[rand() % num_words];
    int strikes = 0;
    int word_length = strlen(word);
    char display[50];
    char guessed_letters[26];
    int guessed_count = 0;
//print crap
    printf("Hi, welcome to Hangman!\n");
    printf("Try and figure out the word by gussing one letter at a time.\n");
    printf("After 8 incorrect answers, you are out.\n");
    printf("If you think you know it, you can guess the whole word at once.\n");
    printf("Have fun playing!\n\n");

// Eliza - makes the display spaces for the amount of letters in the word
    for(int i = 0; i < word_length; i++){
        display[i] = '_';
    }
    display[word_length] = '\0';

//  Isabella
    while(strikes < 8){
        output(display, word_length, strikes); // calls output funtion

        char user_input[20];
        printf("Guess a letter: ");
        scanf("%s", user_input);
// user geussing the letter-isabella
        if(already_guessed(user_input[0], guessed_letters, guessed_count)){
            printf("You already guessed that letter!\n");
            continue;
        }
// this code is checking to see if the letter was already guessed-isabella
        if(strlen(user_input) > 1){
            if(strcmp(user_input, word) == 0){
                printf("\nHorray! You guessed the word! It was: %s.\n", word);
                printf("Rerun the code to play another round.\n");// final output if they got the word right
                return 0;
            }else{
                printf("Incorrect (only guess one letter, unless going for the whole word).\n");
                strikes++;
                continue;
            }
        }
// Eliza - variables for tracking what the user has guessed
        guessed_letters[guessed_count] = user_input[0];
        guessed_count++;
// displaying letters based on what the user got right
        int correct = 0; 
        for(int i = 0; i < word_length; i++){
            if(word[i] == user_input[0]){
                display[i] = user_input[0];
                correct = 1;
            }
        }
//Juliette
        if(correct){ //So if correct, you print out correct
            printf("Correct!\n");
        }else{ //this is the else statment that if the previous condition is false, it print out an incorrect              
            printf("Incorrect!\n");
            strikes++;
        }


//Juliette        
        if(strcmp(word, display) == 0){ //So for the strcmp if the word is the same, it returns a 0, which means the player got the word right.
            printf("\nHorray! You guessed the word! It was: %s.\n", word);
            printf("Rerun code to play another round.\n");
            return 0;
        }
    }
// so this is the end of the while strikes < 8 loop, so if it gets to this, the player lost.
    printf("\nYou lost! The word was: %s. ", word);
    printf("Rerun the code to play another round.");
    return 0;

return 0;
}
