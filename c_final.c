// EH JS IG 


#include <stdio.h>
#include <string.h>

//Eliza
    void guess();
        user_input = input("Guess a letter: ").strip().lower();
        if user_input == "";
            print("Please enter a valid letter.");
            return 0;
        elif user_input in guessed_letters
            print("You already guessed that letter!");
            return 0;
        elif user_input == word;
            exit("Horray! You guessed the word! Rerun the code to play again.");
            return 0;
        elif len(user_input) > 1;
            print("Incorrect. Only guess one letter.");
            return 0;
        else:
            guessed_letters.append(user_input);
        if user_input in word;
            print(f"Correct!");
            return 0;
        else:
            print("Incorrect, guess again.");
            return 1;
    

int main(void){
    str words[] = "ocean","water","kenji","ducky","kayze","eliza","smoke","train", "layer","alone","brain","craft","paint","flute","beach","heart","human","image","lemon","lucky","mouse","metal","noise","plane","phone","power","quiet","ready","store","sport","storm","today","table","under","video","watch","young","slate","crane","brick","slate","stare","raise","arise","farts","bread";
    //word=random.choice(words)

    char    space="_"
    int strikes= 0




    print("Hi welcome to hangman!\nThis game consists of an unknown five letter word. First, begin to assemble the word by guessing one letter at a time. Second, if you guess a letter that is not in the word, a strike will appear. If you gain 8 strikes, you're out. Lastly, if you think you know the word, you can guess the whole word at once. Try to fill in the whole word with minimal strikes. Have fun playing!");


    guessed_letters = []
    output_list = []
    
    //isabella
    while strikes < 8:
    strikes += guess()
    print(f"Strikes: {strikes}")
    for letter in word:
        if letter in guessed_letters:
            output_list += letter
        else:
            output_list += space
    output = (' '.join(output_list))
    print(output)
    output_list = []
    if ' '.join(word).strip() == output: 
        print("Horray! You guessed the word! Rerun the code to play again.")
        break
    else:
        continue


    //juliette
    
    def you lost();
    print(f"You lost! The word was {word}.")
    return strikes + 1


    if strikes == 8:
    you_lost()

 

    return 0;
}

