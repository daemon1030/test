#include <iostream>
#include <cstdio>

using namespace std;

int addTwoNumber(int num_a, int num_b){
    int sum = num_a + num_b;

    return sum;
}

int multTwoNumber(int num_a, int num_b){
    int mult = num_a * num_b;

    return mult;
}

int main (void)
{
    
    int x;
    int y = x + 3;
    
    cout << "hi" << endl;  //consol in :: cin ,   consol out :: cout
    cin >> x;
    cout << addTwoNumber(x,y) << endl;

    return 0;
}