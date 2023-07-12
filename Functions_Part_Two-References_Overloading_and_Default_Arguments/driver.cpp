#include <iostream>

void swap (int var_1, int var_2);
void swap (int *var_1, int *var_2);
void swap (int &var_1, int &var_2);

int main (int argc, char *argvp[]) {
    // There exists two integer variables
    int var_1;
    int var_2;

    // These variables were bored and felt they needed a change
    var_1 = 523;
    var_2 = 124;

    // So they tried swapping their values
    swap(var_1, var_2);
}