typedef struct complex_t {

float real;

float imaginary;

} complex_t;
int add(complex_t num1,complex_t num2)
{
    float a,b;
    a=num1.real+num2.real;
    b= num1.imaginary+num2.imaginary;
    if (b >= 0)
        printf("Sum of the complex numbers = %f + %fi", a,b);
    else
        printf("Sum of the complex numbers = %f %fi",a,b);
}
int sub(complex_t num1,complex_t num2)
{
    float a,b;
    a=num1.real-num2.real;
    b=num1.imaginary-num2.imaginary;
    if (b >= 0)
        printf("Difference of the complex numbers = %f + %fi", a,b);
    else
        printf("Difference of the complex numbers = %f %fi", a,b);
}
int mul(complex_t num1,complex_t num2)
{
    float a,b;
    a=num1.real*num2.real;
    b=num1.imaginary*num2.imaginary;
    if (b >= 0)
        printf("Multiplication of the complex numbers = %f + %fi", a,b);
    else
        printf("Multiplication of the complex numbers = %f %fi", a,b);
}
int div(complex_t num1,complex_t num2)
{
    if (num2.real == 0 && num2.imaginary == 0)
        printf("Division by 0 + 0i isn't allowed.");
      else
      {
        int x = num1.real*num2.real + num1.imaginary*num2.imaginary;
        int y = num1.imaginary*num2.real - num1.real*num2.imaginary;
        int z = num2.real*num2.real + num2.imaginary*num2.imaginary;

        if (x%z == 0 && y%z == 0)
        {
          if (y/z >= 0)
            printf("Division of the complex numbers = %d + %di", x/z, y/z);
          else
            printf("Division of the complex numbers = %d %di", x/z, y/z);
        }
        else if (x%z == 0 && y%z != 0)
        {
          if (y/z >= 0)
            printf("Division of two complex numbers = %d + %d/%di", x/z, y, z);
          else
            printf("Division of two complex numbers = %d %d/%di", x/z, y, z);
        }
        else if (x%z != 0 && y%z == 0)
        {
          if (y/z >= 0)
            printf("Division of two complex numbers = %d/%d + %di", x, z, y/z);
          else
            printf("Division of two complex numbers = %d %d/%di", x, z, y/z);
        }
        else
        {
          if (y/z >= 0)
            printf("Division of two complex numbers = %d/%d + %d/%di",x, z, y, z);
          else
            printf("Division of two complex numbers = %d/%d %d/%di", x, z, y, z);
        }
      }
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
    div(number1,number2);
}