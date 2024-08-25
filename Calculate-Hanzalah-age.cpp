#include <iostream>
using namespace std;

float calculateHanzalahAge(int month, int year){
    cin >> month >> year;
    float age; // declare a variable to return it
    // if the user enter the exact birth date
    if ( month == 5 && year == 1938 )
        age = 0;
    // if the month is before the birth month or equal to it and year is between 1938 -> 1948
    else if ( month <= 5 && year <= 1948 && year >= 1938) {
        year = (year - 1938) - 1; // get the years and subtract one, as month is before his birth month
        // calculation to make jan -> 8/12 as he has grown for 8 months, feb -> 9/12 etc...
        float floated_month = ((float) month + 7) / 12; // and casting month to float to get decimal numbers
        age = year + floated_month; // age will be the years + the casted floated_month
    }
    // if the month is after the birth month and year is between 1938 -> 1948
    else if ( month > 5 && year < 1948 && year >= 1938 ){
        year -= 1938; // get the years normally
        // calculation to make june -> 1/12, july -> 2/12 etc...
        float floated_month = ((float) month - 5) / 12; // casting month from int to float to get the month in decimal
        age = year + floated_month; // age will be years + the casted floated_month
    }
    // the years between 1948 and 2027
    else if (year > 1948 && year < 2027)
        age = 10; // age will stop at 10 years old, in the range 1048 -> 2027

    else if ( month > 5 && year == 1948)
        age = 10;

    // if the user enter the birth month and a year after 2027
    else if ( month == 1 && year >= 2027 ){
        year -= 2027; // get the years
        age = 10 + year; // age will be 10 + the years
    }
    // if the user enter a year after 2027
    else if ( month != 1 && year >= 2027){
        year -= 2027; // get the years after 2027
        float floated_month = (float) month / 12; // get months in decimal after casting
        age = 10 + year + floated_month; // age will be 10 + years + the casted floated_month
    }
    return age;
}

int main (){
    int month, year;
    float age = calculateHanzalahAge(month, year); // assign the returned age to a float variable age
    cout << age << endl;

    return 0;
}



