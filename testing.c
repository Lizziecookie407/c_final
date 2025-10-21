//Eliza
    void guess();
        char user_input[2];
        char guessed_letters[20];
        printf("Guess a letter: ");
        scanf("%s", &user_input);
        
        if(strcomp(user_input,"") == 1){
            printf("Please enter a valid letter.");
            return 0;
        }
        else if (guessed_letters contains(user_input) == 1){
            printf("You already guessed that letter!");
            return 0;
        }else{
            printf("Incorrect, guess again.");
            return 1;
        }
        
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
        else
            printf("Incorrect, guess again.");
            return 1; */