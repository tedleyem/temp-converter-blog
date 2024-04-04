#include <stdio.h>
/* Temperature conversion script 
    print Fahrenheit-Celsius table 
   for fahr = 0, 20, ..., 300 */

#define CELSIUS C    // celsium temp value 
#define FAHRENHEIT F // fahrenheit temp value
#define KELVIN K     // kelvin temp value

main ()
{
    // using float instead of int for better accuracy.
    // using int doesnt give a decimal 
    // float fahr, celsius;
    float lower, upper, step;
    float celsius, fahrenheit, kelvin;

    lower = 0;      // lower limit of temperature scale 
    upper = 300;    // upper limit 
    step = 20;      // step size 
    celsius = C;    // celsius temp value 
    fahrenheit = F; // fahrenheit temp value
    kelvin = K;     // kelvin temp value
    input = getchar();

    // convert temperatures C 
    if(input_scale = C){
        //execute your code
    }
    else if(input_scale = K){
        //execute your code
    }
    else{
        //execute your code
    }

    // convert temperatures F 
    if(input_scale = F){
        //execute your code
    }
    else if(input_scale = C){
        //execute your code
    }
    else{
        //execute your code
    }

    // convert temperatures K 
    if(input_scale = K){
        //execute your code
    }
    else if(input_scale = C){
        //execute your code
    }
    else{
        //execute your code
    }

//    fahr = lower;
//    while (fahr <= upper) {
//        celsius = (5.0/9.0) * (fahr-32.0);
//        printf("%3.0f %5.1f\n", fahr, celsius);
//        fahr = fahr + step;    
//    }
    while (1) {
    printf("Please choose a temperature value:");
    value = float(input())
    printf("What scale should that temperature value be? (C, F, or K):");
    input_scale = input().upper()
    printf("WHat do you want the output temperature to be? (C, F, or K):");
    output_scale = input().upper()
    }

    // Convert the temperature and print results
    result = convert_temperature(value, input_scale, output_scale);
    printf("{value} {input_scale} = {result} {output_scale}");
}


