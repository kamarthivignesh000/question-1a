typedef struct complex_t {

float real;

float imaginary;

} complex_t;
int add(complex_t num1,complex_t num2)
{
    float a,b;
    a=num1.real+num2.real;
    b= num1.imaginary+num2.imaginary;
    printf("%f +i %f\n",a,b);
}
int sub(complex_t num1,complex_t num2)
{
    float a,b;
    a=num1.real-num2.real;
    b=num1.imaginary-num2.imaginary;
    printf("%f +i %f\n",a, b);
}
int mul(complex_t num1,complex_t num2)
{
    float a,b;
    a=num1.real*num2.real;
    b=num1.imaginary*num2.imaginary;
    printf("%f +i %f\n",a,b);
}
int main()
{
    complex_t number1,number2;
    number1.real= 4.5;
    number1.imaginary=3.5;
    number2.real=2.5;
    number2.imaginary=1.5;
    add(number1,number2);
    sub(number1,number2);
    mul(number1,number2);
}