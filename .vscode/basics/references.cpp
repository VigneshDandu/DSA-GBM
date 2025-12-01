#include<iostream>
using namespace std;

int main(){

    int score = 200;
    int *myp = &score;

    printf("Value of score is: %d\n", score);
    printf("Address of score is: %p\n", &score);

    int &another_score = score;
    another_score = 800;

    printf("Value of score is: %d\n", score);   
    printf("Address of score is: %p\n", &myp);
}