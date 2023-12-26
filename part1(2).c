// Write a program that uses two functions to convert temperature from Celsius to Fahrenheit and vice versa, respectively and return the converted values.
 #include <stdio.h>
 float celsius_to_fahrenheit(float celsius);
 float fahrenheit_to_celsius(float fahrenheit);
 int main(){
     float celsius, fahrenheit;
     printf("ENTER THE VALUE OF TEMPERATURE IN CELSIUS\n");
     scanf("%f", &celsius);
     printf("ENTER THE VALUE OF TEMPERATURE IN FAHRENHEIT\n");
     scanf("%f", &fahrenheit);
    //  celsius_to_fahrenheit(celsius);
    //  fahrenheit_to_celsius(fahrenheit);
     printf("TEMPERATURE CONVERSION FROM CELSIUS TO FAHRENHEIT: %f\n", celsius_to_fahrenheit(celsius));
     printf("TEMPERATURE CONVERSION FROM FAHRENHEIT TO CELSIUS: %f\n",fahrenheit_to_celsius(fahrenheit));
     return 0;
 }
float celsius_to_fahrenheit(float celsius){
    float conversion;
    conversion = (celsius * 9.0/5.0) + 32 ;
    return conversion;
}
float fahrenheit_to_celsius(float fahrenheit){
    float conversion;
    conversion = (fahrenheit - 32) * 5.0/9.0 ;
    return conversion;
}






