// CPPMentalMathMagic.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Start development date and time: 3:30PM 21/11/2022

#include <iostream>
#include <chrono>
#define clear system("cls")
#define pause system("pause")


using namespace std;
using std::cout;
using std::cin;
using std::system;

// TODO: make math modes more modular

// displays the amount of time it took the user to answer a question
void timeScore(double timeList[]) {
    clear;
    double averageTime = 0.0;
    cout << "Time taken for each question:\n";
    for (int i = 0; i < 10; i++) {
        cout << "Question {0}: {1}\n", i, timeList[i];
        averageTime += timeList[i];
    }
    cout << "Average time taken: " << averageTime / 10;
    pause;
}

// addition mode
void  addition() {

    double timeList[10]; // List for measuring the amoutn of time it took the user to answer a question

    // initliazing values
    int score = 0;
    int num1;
    int num2;

    char choice;

    int userAnswer;
    int realAnswer;
    // finished initiliazing values

    system("cls");
    for (int i = 0; i < 10; i++) { // repeats 10 times

        goto label1;

    label1:
        num1 = rand() % 11; // assinging a random number to num1
        num2 = rand() % 11; // assinging a random number to num2

        if (num1 == 0) { // making sure num1 or num2 isn't zero
            goto label1;
        }
        else if (num1 == 0) {
            goto label1;
        }

        realAnswer = num1 + num2; // calculating the real answer

        clear;
        cout << "Score: " << score << endl; // Displaying the Score
        cout << "What is " << num1 << " plus " << num2 << ": "; // Displaying the question

        std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
        cin >> userAnswer;
        std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();

        timeList[i] = std::chrono::duration_cast<std::chrono::microseconds>(end - begin).count();

        if (userAnswer == realAnswer) { // gives the player a point if they got it right
            score++;
            clear;
            cout << "Correct!\n";
            pause;
        }
        else {
            clear;
            cout << "Wrong! The answer was actually " << realAnswer << endl;
            pause;
        }
    }
    clear;
    cout << "Done! You scored " << score << "points\n\n";
    cout << "Would you like to see how fast you were? [y/n]";
    cin >> choice;

    if (choice == 'y') {
        timeScore(timeList);
    }

}

//subtraction mode
void subtraction() {
    double timeList[10];

    // initliazing values
    int score = 0;
    int num1;
    int num2;

    char choice;

    int userAnswer;
    int realAnswer;
    // finished initiliazing values

    system("cls");
    for (int i = 0; i < 10; i++) {

        goto label1;

    label1:
        num1 = rand() % 11; // assinging a random number to num1
        num2 = rand() % 11; // assinging a random number to num2

        if (num1 == 0) { // making sure num1 or num2 isn't zero
            goto label1;
        }
        else if (num1 == 0) {
            goto label1;
        }

        realAnswer = num1 - num2; // calculating the real answer

        clear;
        cout << "Score: " << score << endl; // Displaying the Score
        cout << "What is " << num1 << " minus " << num2 << ": "; // Displaying the question

        std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
        cin >> userAnswer;
        std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();

        timeList[i] = std::chrono::duration_cast<std::chrono::microseconds>(end - begin).count();

        if (userAnswer == realAnswer) { // gives the player a point if they got it right
            score++;
            clear;
            cout << "Correct!\n";
            pause;
        }
        else {
            clear;
            cout << "Wrong! The answer was actually " << realAnswer << endl;
            pause;
        }
    }
    clear;
    cout << "Done! You scored " << score << "points\n\n";
    cout << "Would you like to see how fast you were? [y/n]";
    cin >> choice;

    if (choice == 'y') {
        timeScore(timeList);
    }
}

// multiplication mode
void multiplication() {
    double timeList[10];

    // initliazing values
    int score = 0;
    int num1;
    int num2;

    char choice;

    int userAnswer;
    int realAnswer;
    // finished initiliazing values

    system("cls");
    for (int i = 0; i < 10; i++) {

        goto label1;

        label1:
            num1 = rand() % 11; // assinging a random number to num1
            num2 = rand() % 11; // assinging a random number to num2

        if (num1 == 0) { // making sure num1 or num2 isn't zero
            goto label1;
        }
        else if (num1 == 0) {
            goto label1;
        }

        realAnswer = num1 * num2; // calculating the real answer

        clear;
        cout << "Score: " << score << endl; // Displaying the Score
        cout << "What is " << num1 << " times " << num2 << ": "; // Displaying the question

        std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
        cin >> userAnswer;
        std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();

        timeList[i] = std::chrono::duration_cast<std::chrono::microseconds>(end - begin).count();

        if (userAnswer == realAnswer) { // gives the player a point if they got it right
            score++;
            clear;
            cout << "Correct!\n";
            pause;
        }
        else {
            clear;
            cout << "Wrong! The answer was actually " << realAnswer << endl;
            pause;
        }
    }
    clear;
    cout << "Done! You scored " << score << "points\n\n";
    cout << "Would you like to see how fast you were? [y/n]";
    cin >> choice;

    if (choice == 'y') {
        timeScore(timeList);
    }
}

// TODO: increase the range if the division mode

// division mode
void division() {
    double timeList[10];

    // initliazing values
    int score = 0;
    int num1;
    int num2;

    char choice;

    double userAnswer;
    double realAnswer;
    // finished initiliazing values

    system("cls");
    for (int i = 0; i < 10; i++) {

        goto label1;

    label1:
        num1 = rand() % 11; // assinging a random number to num1
        num2 = rand() % 11; // assinging a random number to num2

        if (num1 == 0) { // making sure num1 or num2 isn't zero
            goto label1;
        }
        else if (num2 == 0) {
            goto label1;
        }
        else if ((num1 % num2) !=  0) {
            goto label1;
        }

        realAnswer = num1 / num2; // calculating the real answer

        clear;
        cout << "Score: " << score << endl; // Displaying the Score
        cout << "What is " << num1 << " divided by " << num2 << ": "; // Displaying the question

        std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
        cin >> userAnswer;
        std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();

        timeList[i] = std::chrono::duration_cast<std::chrono::microseconds>(end - begin).count();

        if (userAnswer == realAnswer) { // gives the player a point if they got it right
            score++;
            clear;
            cout << "Correct!\n";
            pause;
        }
        else {
            clear;
            cout << "Wrong! The answer was actually " << realAnswer << endl;
            pause;
        }
    }
    clear;
    cout << "Done! You scored " << score << "points\n\n";
    cout << "Would you like to see how fast you were? [y/n]";
    cin >> choice;

    if (choice == 'y') {
        timeScore(timeList);
    }
}

// complex mode
void complex() {
    /*
     * A more complex mode that uses random operators,
     * to challenge the user.
     */

    double timeList[10];

    int choice;

    char choice2 = ' ';

    int num1;
    int num2;

    int score = 0;

    double userAnswer;
    double realAnswer;

    for (int i = 0; i < 10; i++) {
        choice = rand() % 4;

        if (choice == 0) { // ADDITION
        label1:
            num1 = rand() % 11; // assinging a random number to num1
            num2 = rand() % 11; // assinging a random number to num2

            if (num1 == 0) { // making sure num1 or num2 isn't zero
                goto label1;
            }
            else if (num1 == 0) {
                goto label1;
            }

            realAnswer = num1 + num2; // calculating the real answer

            clear;
            cout << "Score: " << score << endl; // Displaying the Score
            cout << "What is " << num1 << " plus " << num2 << ": "; // Displaying the question
            
            std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
            cin >> userAnswer;
            std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();

            timeList[i] = std::chrono::duration_cast<std::chrono::microseconds>(end - begin).count();

            if (userAnswer == realAnswer) { // gives the player a point if they got it right
                score++;
                clear;
                cout << "Correct!\n";
                pause;
            }
            else {
                clear;
                cout << "Wrong! The answer was actually " << realAnswer << endl;
                pause;
            }
        }
        else if (choice == 1) { // SUBTRACTION
        label2:
            num1 = rand() % 11; // assinging a random number to num1
            num2 = rand() % 11; // assinging a random number to num2

            if (num1 == 0) { // making sure num1 or num2 isn't zero
                goto label2;
            }
            else if (num1 == 0) {
                goto label2;
            }

            realAnswer = num1 - num2; // calculating the real answer

            clear;
            cout << "Score: " << score << endl; // Displaying the Score
            cout << "What is " << num1 << " minus " << num2 << ": "; // Displaying the question
            
            std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
            cin >> userAnswer;
            std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();

            timeList[i] = std::chrono::duration_cast<std::chrono::microseconds>(end - begin).count();

            if (userAnswer == realAnswer) { // gives the player a point if they got it right
                score++;
                clear;
                cout << "Correct!\n";
                pause;
            }
            else {
                clear;
                cout << "Wrong! The answer was actually " << realAnswer << endl;
                pause;
            }
        }
        else if (choice == 2) { // MULTIPLICATION
        label3:
            num1 = rand() % 11; // assinging a random number to num1
            num2 = rand() % 11; // assinging a random number to num2

            if (num1 == 0) { // making sure num1 or num2 isn't zero
                goto label3;
            }
            else if (num1 == 0) {
                goto label3;
            }

            realAnswer = num1 * num2; // calculating the real answer

            clear;
            cout << "Score: " << score << endl; // Displaying the Score
            cout << "What is " << num1 << " multiplied by " << num2 << ": "; // Displaying the question
            
            std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
            cin >> userAnswer;
            std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();

            timeList[i] = std::chrono::duration_cast<std::chrono::microseconds>(end - begin).count();

            if (userAnswer == realAnswer) { // gives the player a point if they got it right
                score++;
                clear;
                cout << "Correct!\n";
                pause;
            }
            else {
                clear;
                cout << "Wrong! The answer was actually " << realAnswer << endl;
                pause;
            }
        }
        else if (choice == 3) { // DIVISION
        label4:
            num1 = rand() % 11; // assinging a random number to num1
            num2 = rand() % 11; // assinging a random number to num2

            if (num1 == 0) { // making sure num1 or num2 isn't zero
                goto label4;
            }
            else if (num1 == 0) {
                goto label4;
            }

            realAnswer = num1 / num2; // calculating the real answer

            clear;
            cout << "Score: " << score << endl; // Displaying the Score
            cout << "What is " << num1 << " divided by " << num2 << ": "; // Displaying the question
            
            std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
            cin >> userAnswer;
            std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();

            timeList[i] = std::chrono::duration_cast<std::chrono::microseconds>(end - begin).count();

            if (userAnswer == realAnswer) { // gives the player a point if they got it right
                score++;
                clear;
                cout << "Correct!\n";
                pause;
            }
            else {
                clear;
                cout << "Wrong! The answer was actually " << realAnswer << endl;
                pause;
            }
        }

    }
    clear;
    cout << "Done! You scored " << score << "points\n\n";
    cout << "Would you like to see how fast you were? [y/n]";
    cin >> choice;

    if (choice2 == 'y') {
        timeScore(timeList);
    }
}

// MAINLINE
int main() {

    int choice;

    bool gameRun = true;

    while (gameRun) { // game runs as long as "gameRun" is set to "true"

        // getting user input
        clear;
        cout << "Welcome to the Mental Maths Magic program!\n";
        cout << "\t1. Addition\n";
        cout << "\t2. Subtraction\n";
        cout << "\t3. Multiplication\n";
        cout << "\t4. Division\n";
        cout << "\t5. Random\n\n";
        cout << "\t6. Exit\n";
        cout << "Please enter your choice: ";
        cin >> choice;

        // logic to deciding which mode to start
        if (choice == 1) {
            addition();
        }
        else if (choice == 2) {
            subtraction();
        }
        else if (choice == 3) {
            multiplication();
        }
        else if (choice == 4) {
            division();
        }
        else if (choice == 5) {
            complex();
        }
        else if (choice == 6) {
            gameRun = false;
        }
        else { // error handling
            cout << "\n\nINVALID CHOICE, TRY AGAIN!";
            pause;
        }
    }
    
    return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
