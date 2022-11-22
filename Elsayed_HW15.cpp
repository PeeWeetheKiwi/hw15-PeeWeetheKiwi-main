/*  Title: Math Tutor (with division)
    Purpose: To give random integers that are added and divided and check the answer
    Author: Walid Elsayed
    Date: 11/22/2022
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main()
{
    
    
    int first;
    int second;
    int answer;
    int menu;
    
    unsigned seed = time(0);
    srand(seed);

    cout << "Select 1 for addition, 2 for division, or 3 to quit: " << endl;
    cin >> menu;
    cout << endl;
    
    if(menu == 1){
    int MIN  = 50;
    int MAX = 450;
    first = rand() % (MAX - MIN + 1) + MIN;
    second = rand() % (MAX - MIN + 1) + MIN;
    cout << setw(5) << first << endl;
    cout << "+ " << setw(3) << second << endl;
    cout << setw(5) << "_____" << endl << endl;
    cout << "Enter the answer here:  " << endl << endl << setw(5);
    cin >> answer;
    if(answer == first + second){
        cout << endl << "Congratulations! You got it right!" << endl << endl;
        cout << "The answer is " << first + second << endl << endl;
        return main();
    }else{
        cout << "Sorry, that's incorrect! :(" << endl << "The answer is: " << first + second << endl << endl;
        return main();
    }
    }else if(menu == 2){
    second = rand() % 9 + 0;
    first = (second *(rand() % 50 + 1));
        cout << setw(5) << first << " / " << second << endl;
        cout << setw(8) << "_____" << endl << endl;
        cout << "Enter the answer here: " << endl << endl << setw(5);
        cin >> answer;
    if(answer == first/second){
        cout << endl << "Congratulations! You got it right!" << endl << endl;
        cout << "The answer is " << first/second << endl << endl;
        return main();
    }else{
        cout << "Sorry, that's incorrect! :(" << endl << "The answer is: " << first/second << endl << endl;
        return main();
        
    }
    }else if(menu == 3){
        cout << "Thank you for using Math Tutor.";
        return 0;
    }
    if(menu != 1 || menu != 2 || menu !=3){
        cout << "Incorrect Entry, Try Again." << endl;
        return main();
    }

    cin.get();
    return 0;
}