// Write a code for a MCQ question marking

#include <iostream>
using namespace std; 

int main(){

    int score {},answer {};

    cout << "Welcome to the C++ quiz\nThe quiz has 5 very basic questions on the C++ Programming Language. You get +3 for each correct answer & -1 for each wrong/invalid answer.\n";

    cout << "\nQ1) Why is it called 'C++' & not 'D++'?\n";
    cout << "[1]C stands for code\t[2]The inventor's name started with a C\n[3]It developed after a language called 'C'\t[4]Why should I care?\n";
    cout << "Write your answer here: ";
    cin >> answer;

        if(answer==3)
        {
            cout <<"That's Correct!\n";
            score=score + 3;
        }
        else
        {
            cout <<"Wrong Answer\n";
            score=score - 1;
        }

    cout <<"\nQ) It was developed at?\n";
    cout <<"[1]IBMt[2]Bell Labsn[3]MITt[4]Microsoft(?)\n";
    cout << "Write your answer here: ";
    cin >> answer;

        if(answer==2)
        {
        cout <<("That's Correct!\n");
        score=score+3;
        }
        else
        {
        cout <<("Wrong Answer\n");
        score = score - 1;
        }

    cout << "nQ) Which of these is not a C keyword as per ANSI C ?\n";
    cout << "[1]externt[2]volatilen[3]entert[4]break\n";
    cout << "Write your answer here: ";
    cin >> answer;

        if(answer==3)
        {
        cout <<("That's Correct!\n");
        score=score+3;
        }
        else
        {
        cout <<("Wrong Answer\n");
        score = score - 1;
        }

    cout << "nQ) What is ANSI?\n";
    cout << "[1]Area of Natural and Scientific Interest\t[2]American National Standards Institute\n[3]American National Standardization Institute\t[4]American National Society Of Intellectuals\n";
    cout << "Write your answer here: ";
    cin >> answer;

        if(answer==2)
        {
        cout <<("That's Correct!\n");
        score=score+3;
        }
        else
        {
        cout <<("Wrong Answer\n");
        score=score - 1;
        }

    cout << "\nQ)Which of these concepts is NOT supported by C ?\n";
    cout << "[1]Pointers\t[2]Functions\n[3]Strings\t[4]Namespaces\n";
    cout << "Write your answer here: ";
    cin >> answer;

        if(answer==4)
        {
        cout <<("That's Correct!\n");
        score=score+3;
        }
        else
        {
        cout <<("Wrong Answer\n");
        score=score - 1;
        }

    cout << "\nThank You for taking the Quiz.\n Your Total Score is " << score <<  " out of 15" << " . ";

    return 0;
}

