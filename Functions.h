
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

// Reduce to 1
void Reduce() {
    int Input, Result;
    int Steps = 0;
    std::cout << "Reduce to 1\nInput >> ";
    std::cin >> Input;
    Result = Input;
    int Highest = Input;

    while(Result != 1) {
        if(Result > Highest) { Highest = Result; }
        Steps++;
        if((Result % 2) == 0) {
            Result = Result / 2;
        }
        else {
            Result = (Result * 3) + 1;
        }
    }
    printf("Your input (%i) took %i steps to reduce\nHighest Number: %i\n", Input, Steps, Highest);
    std::cout << "Press ENTER to return to the menu";    
    Wait();
}

// Calculate X steps
void CalculateXStep() {
    int Input, X, Result;
    std::cout << "Calculate X Steps\nBase Number >> ";
    std::cin >> Input;
    Result = Input;
    std::cout << "\nX >> ";
    std::cin >> X;
    int Steps = X;

    while (X != 0) {
        X--;
        if((Result % 2) == 0) {
            Result = Result / 2;
        }
        else {
            Result = (Result * 3) + 1;
        }
    }
    printf("After %i step(s), the input (%i) caused a result of %i\n", Steps, Input, Result);
    std::cout << "Press ENTER to return to the menu";
    Wait();
}

// Calculate until X occurs in Y's sequence, IF IT EXIST
void CalculateUntilX() {
    int Input, X, Result;
    int Steps = 0;
    bool ResultExist = false;
    std::cout << "Calculate until result is X\nBase Number >> ";
    std::cin >> Input;
    Result = Input;
    std::cout << "\nX >> ";
    std::cin >> X;

    while(Result != 1) {
        Steps++;
        if((Result % 2) == 0) {
            Result = Result / 2;
        }
        else {
            Result = (Result * 3) + 1;
        }

        if(Result == X) {
            ResultExist = true;
            break;
        }
    }
    if(ResultExist = true) {
        printf("The number '%i' occurs after %i step(s) in the collatz-sequence of %i\n", X, Steps, Input);
    }
    else {
        printf("There's no occurrence of %i in the collatz-sequence of %i\n", X, Input);
    }
    std::cout << "Press ENTER to return to the menu";
    Wait();
}
