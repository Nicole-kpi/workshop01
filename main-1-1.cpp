#include <iostream>
extern int array_sum(int array[], int n);

int main(){
    int array[4] = {1,2,3,4};
    std::cout << array_sum(array, 4) <<std::endl;
    return 0;
}