
// Functions

#ifdef _WIN32
void Wait() {
    std::cout << std::endl;
    system("pause");
}

void Cleart() {
    system("cls");
}

#elif __linux__
void Wait() {
    std::cout << std::endl;   
    system("read");
}

void Cleart() {
    system("clear");
}
#endif

// 1 | Reduce to 1
void Reduce() {
    long long int Input, Result;
    long int Steps = 0;
    bool Successful = true;
    std::cout << "Reduce to 1\nX >> ";
    std::cin >> Input;
    Result = Input;
    long long int Highest = Input;

    // printing out the sequence question
    std::string Answer;
    bool PrintOut = false;
    std::cout << "Print out sequence? (Y/N) >> ";
    std::cin >> Answer;
    if(Answer == "Y" || Answer == "y") { PrintOut = true; }

    if(Input < 1) {
        std::cout << "X is beyond the limits.\n";
        Highest, Input = 0;
        goto end_func1;
    }

    while(Result != 1) {
        if(PrintOut) { printf("%lli ", Result); }
        if(Result <= 0) { 
            Successful = false;
            break;    
        }

        if(Result > Highest) { Highest = Result; }
        Steps++;

        if((Result % 2) == 0) {
            Result = Result / 2;
        } else {
            Result = (Result * 3) + 1;
        }
    }
    if(Successful) {
        printf("1\nYour input (%lli) took %li steps to reduce\nHighest Number: %lli\n", Input, Steps, Highest);
    } else {
        printf("\nThe result exceeded the limits.\n");
    }

end_func1:
    std::cout << "Press ENTER to return to the menu";    
    Wait();
}

// 2 Visualize X's sequence
void Visualize() {
    std::cout << std::endl;
end_func2:
    std::cout << "Press ENTER to return to the menu";    
    Wait();
}

// 3 | Calculate X steps
void CalculateXStep() {
    long long int Input, X, Steps, Result;
    long int StepsToLoop = 0;
    bool Successful = true;
    bool LoopReached = false;
    std::cout << "Calculate X Steps from Y's sequence\nY >> ";
    std::cin >> Input;
    Result = Input;
    // y have to be above 1
    if(Input < 1) {
        std::cout << "Y is beyond the limits.\n";
        goto end_func3;
    }

    std::cout << "\nX >> ";
    std::cin >> X;
    Steps = X;
    // x check
    if(X <= 0) {
        std::cout << "X is beyond the limits.\n";
        goto end_func3;
    }

    // collatz sequence
    while (X != 0) {
        if(Result <= 0) { 
            Successful = false;
            break;    
        }
        else if(Result == 1 && !LoopReached) {
            LoopReached = true;
        }
        if(!LoopReached) {
            StepsToLoop++;
        }

        X--;
        if((Result % 2) == 0) {
            Result = Result / 2;
        } else {
            Result = (Result * 3) + 1;
        }
    }
    if(Successful) { 
        printf("After %li step(s), the input (%lli) caused a result of %lli\n", Steps, Input, Result);
        if(LoopReached) {
            printf("NOTICE: 4-2-1 loop reached after %li steps\n", StepsToLoop);
        }
    } else {
        printf("The result exceeded the limits.\n");
    }

end_func3:
    std::cout << "Press ENTER to return to the menu";
    Wait();
}

// 4 | Calculate until X occurs in Y's sequence, IF IT EXIST
void CalculateUntilX() {
    long long int Input, X, Result;
    bool Successful = true;
    long int Steps = 0;
    bool ResultExist = false;
    std::cout << "Find X in Y's sequence\nY >> ";
    std::cin >> Input;
    Result = Input;

    // y have to be above 1 to have an actual sequence
    if(Input <= 1) {
        std::cout << "Y is beyond the limits.\n";
        goto end_func4;
    }

    std::cout << "\nX >> ";
    std::cin >> X;
    // x check
    if(X <= 0) {
        std::cout << "X is beyond the limits.\n";
        goto end_func4;
    }

    // check for impossible state
    if (X > Input) {
        std::cout << "X can't be bigger than Y.\n";
        goto end_func4;
    }

    // collatz sequence
    while(Result != 1) {
        if(Result < 0) { 
            Successful = false;
            break;    
        }
        if(Result == X) {
            printf("%li = %li", Result, X);
            ResultExist = true;
            break;
        }
        Steps++;
        if((Result % 2) == 0) {
            Result = Result / 2;
        } else {
            Result = (Result * 3) + 1;
        }
    }
    if(!Successful) {
        printf("The result exceeded the limits.\n");
        goto end_func4;
    }

    if(ResultExist == true) {
        printf("The number '%lli' occurs after %li step(s) in the sequence of %lli\n", X, Steps, Input);
    } else {
        printf("There's no occurrence of %lli in %lli's sequence\n", X, Input);
    }

end_func4:
    std::cout << "Press ENTER to return to the menu";
    Wait();
}
