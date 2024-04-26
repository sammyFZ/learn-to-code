#include <iostream>
using namespace std;

int x = 0;
int i = 0;
int guess = 0;


int main(){
    // getting the number
    cout << "Please input random number(0-100) : ";
    cin >> x;
    cout << "\n";
    
    //checking the number start from 0
    while (guess != x){
        if (guess < x){
            guess = guess + 9;
        }
        if (guess > x){
            guess = guess - 2;
            if (guess < x) {
                guess = guess + 1;
            }
        }

        i = i + 1;
        cout << i << " attempt\n";
    }
    cout << "\nYour number is " << guess << " and took " << i << " attempt";
}
