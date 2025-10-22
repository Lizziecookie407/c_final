// EH JS IG 


#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

//Eliza
    void guess();
        char user_input;
        char guessed_letters[15];
        printf("Guess a letter: ");
        scanf("%s", user_input);
        
        if(strcomp(user_input,"") == 1){
            printf("Please enter a valid letter.");
            return 0;
        }
        else if (strcomp(user_input,"") == 1)
        
        /*    printf("Please enter a valid letter.");
            return 0;
        else if user_input in guessed_letters
            printf("You already guessed that letter!");
            return 0;
        else if user_input == word;
            printf("Horray! You guessed the word! Rerun the code to play again.");
            return 0;
        else if len(user_input) > 1;
            printf("Incorrect. Only guess one letter.");
            return 0;
        else:
            guessed_letters.append(user_input);
        if user_input in word;
            printf("Correct!");
            return 0;
        else:
            printf("Incorrect, guess again.");
            return 1; */
    

int main(void){

//ian wuz here -- added a * thats whats wrong (-Eliza yur welcom)
    char* list[] = {
        "quark", "ocean", "water", "ducky","smoke","train", "layer","alone","brain","craft","paint",
        "flute","beach","heart","human","image","lemon","lucky","mouse","metal","noise","plane","phone",
        "power","quiet","ready","store","sport","storm","today","table","under","video","watch","young",
        "slate","crane","brick","slate","stare","raise","arise","farts","bread"
    };
    
    int num;
    srand(time(NULL));
    for(int i=0; i>10; i++){
    int num = rand() %44;
    printf("%s\n",list[num]);
    return 0;
    }

    char word[] = list[num];
    //list=random.choice(list);

    char space="_";
    int strikes=0;




    printf("Hi welcome to hangman!\nThis game consists of an unknown five letter word. First, begin to assemble the word by guessing one letter at a time. Second, if you guess a letter that is not in the word, a strike will appear. If you gain 8 strikes, you're out. Lastly, if you think you know the word, you can guess the whole word at once. Try to fill in the whole word with minimal strikes. Have fun playing!");


    
    char output_list[20];
    //isabellla:)
    while(strikes < 8){
        strikes += guess()
        printf("Strikes" strikes);
    };
    for("letter in word"){
        if letter in guessed_letters:
            output_list += letter
        else if;
            output_list += space
    }
    output = (' '.join(output_list))
    print(output)
    output_list = []
    //juliette
    if (user_input == word){
        printf("Good job, you guess the word! Rerun the code to play again")
    }


    
return 0;
}
