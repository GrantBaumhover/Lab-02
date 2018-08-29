/**
 * Author: Grant Baumhover
 *
 * This program will prompt the user to input the amount of US * *  * dollars and convert it to British pounds and Japanese JPY
 * 
 */
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(int argc, char **argv) {

double amount = 0;

printf("Please enter us dollars: ");
scanf("%lf",&amount);

double pounds = amount * .45 * 0.6;
double jpy = amount * .45 * 76.8;
printf("Pounds is %.2f.  JPY is %.2f \n", pounds, jpy);

}
