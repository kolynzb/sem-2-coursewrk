#include <stdio.h>
#include <string.h>

void main()
{
    // run main function
    testOddEven();
}

// getSum
void getSum(int num1, int num2)
{
    int sum;
    sum = num1 + num2;
    printf("sum = %d\n", sum);
}

// getPdt
void getpdt(int num1, int num2)
{
    int pdt;
    double div;
    div = num1 / num2;
    float rem = num1 % num2;
    pdt = num1 * num2;
    printf(" pdt = %d\n and div = %f\n with rem = %f\n", pdt, div, rem);
}

// test whether odd or even

int testOddEven()
{
    int input;
    printf("Insert a number to check its validity\n");
    scanf("%d", &input);

    if (input % 2 == 0)
    {
        printf("Your number is even\n ");
    }
    else
    {
        printf("Your number is odd");
    }
    return 0;
}

// check whether number is prime or not
void testPrime(int num)
{
    printf("Insert a positive integer to check its validity\n");

    scanf("%d", &num);

    int count = 0;

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
            count++;
    }
    if (count != 0)
    {
        printf("Number isnt prime");
    }
    else
    {
        printf("Number isn prime");
    }
}

// check if vowel or consonant

void checkVowelOrConsonant(char alph)
{

    printf("Insert an alphabet to check its validity\n");
    scanf("%c", &alph);
    // accounting for both lower and upper case
    int lowelcase_Vowel, uppercase_Vowel;
    lowelcase_Vowel = (alph == 'a' || alph == 'e' || alph == 'i' || alph == 'o' || alph == 'u');
    uppercase_Vowel = (alph == 'A' || alph == 'E' || alph == 'I' || alph == 'O' || alph == 'U');

    if (lowelcase_Vowel || uppercase_Vowel)
    {
        printf("%c is a vowel", alph);
    }
    else
    {

        printf("%c is not a vowel, thus a consonant", alph);
    }
}

// program for user simple interest given user input *year*

void simpleInterest(int year)
{
    // simple interest= P(1+ rt)
    // where p = initial principle balance
    // r = annual interest rate
    // t= time(years)
    printf("Enter number of year(s) to clculate interest!");
    scanf("%d", &year);
    int p = 100000;
    int SI, rate = 0.2;

    SI = p * (1 + rate * year);

    printf("Your interest rate is %d", SI);
}

// A function to check if a string str is palindrome
void isPalindrome(char str[])
{
    // Start from leftmost and rightmost corners of str
    int l = 0;
    int h = strlen(str) - 1;

    // Keep comparing characters while they are same
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            printf("%s is not a palindrome\n", str);
            return;
        }
    }
    printf("%s is a palindrome\n", str);
}

// Driver program to test above function for a palindrome
/* int main()
{
    isPalindrome("poop");
    isPalindrome("madam");
    //above function will print "poop is a palindrome"
    isPalindrome("abbccbba");
    isPalindrome("geeks");
    return 0;
} */

// c program to find reverse of user input string

int reversedString()
{
    char str[1000], rev[1000];
    int i, j, value = 0;
    scanf("%s", str);
    printf("\nReverse the string %s", str);
    while (str[value] != '\0')
    {
        value++;
    }
    j = value - 1;
    for (i = 0; i < value; i++)
    {
        rev[i] = str[j];
        j--;
    }
    printf("\nString after reversed %s", rev);
}

// c program for squares of numbers between 11 to 3

void sumOfSquares()
{
    int i, j, sum = 0;
    for (i = 3; i <= 11; i++)
    {
        j = i * i;
        sum = sum + j;
    }
    printf("%d", sum);
}

// c program to compute and return the cube of odd numbers from 1 to 100.

void cubeOfOdd()
{
    int i, j, sum = 0;
    for (i = 1; i <= 100; i++)
    {
        if (i % 2 != 0)
        {
            j = i * i * i;
            sum = sum + j;
        }
    }
    printf("%d", sum);
}

// call function in main

// int main (void){
//     cubeOfOdd();

// }

// program using c which captures the surname, other name , registration number , year of study, current university and concatenates in the form Am______Reg no_______in_______at_________

void concatenate()
{
    char surname[20], othername[20], regno[20], university[20], year[20];
    printf("Enter your surname\n");
    scanf("%s", surname);
    printf("Enter your other name\n");
    scanf("%s", othername);
    printf("Enter your registration number\n");
    scanf("%s", regno);
    printf("Enter your university\n");
    scanf("%s", university);
    printf("Enter your year of study\n");
    scanf("%s", year);
    printf("%s %s %s %s %s %s", surname, othername, regno, university, year);
}

// run concatenate function in main
// int main()
// {
//     concatenate();
//     return 0;
// }

// c program which captures two integers from keyboard, computes and prints the product, average, maximum and minum values, and absolute value between two integers

void compute()
{
    int num1, num2, product, average, maximum, minimum, abs;
    printf("Enter first number\n");
    scanf("%d", &num1);
    printf("Enter second number\n");
    scanf("%d", &num2);
    product = num1 * num2;
    average = (num1 + num2) / 2;
    maximum = (num1 > num2) ? num1 : num2;
    minimum = (num1 < num2) ? num1 : num2;
    abs = (num1 > num2) ? num1 - num2 : num2 - num1;
    printf("Product = %d\nAverage = %d\nMaximum = %d\nMinimum = %d\nAbsolute value = %d\n", product, average, maximum, minimum, abs);
}
// run compte function in main

// int main()
// {
//     compute();
//     return 0;
// }