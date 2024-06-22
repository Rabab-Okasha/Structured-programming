//problem 2
#include <iomanip>
#include <iostream>

using namespace std;

int main (){
    int choice; // variable to store the user choice
    do{  // display the list of the units int the program
        cout << "\nWelcome to our converter program...\nChoose the units you want to convert from the list or exit.";
        cout << "\n1. Time \n2. Distance \n3. Temperature\n4. Exit" << endl;
        cin >> choice;  // get the user choice (1, 2, 3, 4)

        if (choice == 1){ // if the user choose time
            int time, hour, minutes, seconds, num = 0, counter = 0;
            cout << "Enter your time in seconds " << endl;
            cin >> time;        // get the user time
            hour = time / 3600;  // calculate number of hours
            time -= (hour * 3600);   // subtract the hours from the time
            minutes = time / 60;    // get number of minutes
            seconds = time - (minutes * 60);   // get number of seconds
            if(num <= seconds)
                num = seconds;

            if(num <= minutes)
                num = minutes;

            if(num <= hour)
                num = hour;

            while(num != 0){
                num = num / 10; // to get the number of digits in num
                counter++; // count number of iteration which is the number of digits till num reaches 0
            }
            //display the outputs & shift according to the counter
            cout << endl<<setw(counter) << hour << " Hours" << endl;
            cout << setw(counter) << minutes << " Minutes" << endl;
            cout << setw(counter) << seconds << " Seconds" << endl;

        }else if (choice == 2){ // if the user choose distance
            int distance, kilo, meter, centi, num = 0, counter = 0;
            cout << "Enter your distance in cm" << endl;
            cin >> distance;   // get the user distance
            kilo = distance / 100000;   // calculate number of kilometers
            distance -= (kilo * 100000);   // update the distance after subtracting the kilos
            meter = distance / 100;   // calculate number of meters
            centi = distance -(meter * 100);   // calculate number of centimeters
            if(num <= centi)
                num = centi;

            if(num <= meter)
                num = meter;

            if(num <= kilo)
                num = kilo;

            while(num != 0){
                num = num / 10; // to get the number of digits in num
                counter++; // count number of iteration which is the number of digits till num reaches 0
            }
            //display the outputs & shift according to the counter
            cout << endl<< setw(counter) << kilo << " Kilometers" << endl;
            cout << setw(counter) << meter << " Meters" << endl;
            cout << setw(counter) << centi << " centimeters" << endl;

        }else if  (choice == 3){ // if the user choose temperature
            float temp, celsuis, kelvin;
            const float KELVIN_CONSTANT = 273.15; // constant used in calculation of temperature in kelvin
            const float CONSTANT = 5.0 / 9.0;   // constant used in calculation of temperature in celsuis
            int counter = 0;
            cout << "Enter your temperature in Fahrenheit " << endl;
            cin >> temp; // get the user temperature
            celsuis = (temp - 32.0) * CONSTANT ;  // calculate the temperature in kelvin
            kelvin = celsuis + KELVIN_CONSTANT; // calculate the temperature in celsuis
            int num = kelvin;

            while(num != 0){
                num = num / 10; // to get the number of digits in num
                counter++; // count number of iteration which is the number of digits till num reaches 0
            }
            // the output in celsuis are aligned right by setw and rounded to 2 decimal place
            cout << endl << fixed << setprecision(2) << setw(counter + 3) << celsuis << " Celsius" << endl;
            // the output in kelvin are aligned right by setw and rounded to 2 decimal place
            cout << fixed << setprecision(2) << setw(counter + 3) << kelvin << " Kelvin" << endl;
        }

    } while (choice != 4); // iterate until the user choose to exit (choice 4)

    return 0;
}
