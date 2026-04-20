#include "input.hpp"
#include "output.hpp"
#include "calculation.hpp"

int main(){
    // Input Function
    int a, b, sum, avg;
    getinput(a,b);

    // Calculation Function
    calculation(a, b, sum, avg);

    // Output Function
    output(sum, avg);
    return 0;
}