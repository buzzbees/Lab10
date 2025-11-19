
//QUESTION1

#include <iostream>

using namespace std;

const double PIE = 3.14159;

void circle(double radius) {
    double area, circumference;
    
    area = PIE * (radius * radius);
    circumference = 2 * PIE * radius;
    
    cout << "Area: " << area << endl;
    cout << "Circumference: " << circumference << endl;
}

int main() {

    double radius;
    
    cout << "Please enter the radius: " << endl;
    cin >> radius;
    
    circle(radius);

    return EXIT_SUCCESS;
}

//QUESTION2

#include <iostream>
#include <string>

using namespace std;

int main() {

    int age;
    string citizenship;
    
    cout << "Please enter your age: \n";
    cin >> age;
    cout << "Please enter your citizenship: \n";
    cin >> citizenship;
    
    if (citizenship == "American" || citizenship == "american") {
        if (age < 18) {
            cout << "You are not allowed into the resort\n";
        }
        if (age >= 21) {
            cout << "You may access all amenities as well as the casino\n";
        }
        if (age >= 18 && age < 21) {
            cout << "You may access all amenities except the casino\n";
        }
    }
    if (citizenship == "Non-American" || citizenship == "non-american") {
        if (age < 18) {
            cout << "You are not allowed into the resort\n";
        }
        if (age >= 21) {
            cout << "You may access all amenities as well as the casino. You have a $15 fee.\n";
        }
        if (age >= 18 && age < 21) {
            cout << "You may access all amenities except the casino\n";
        }
    }

    return EXIT_SUCCESS;
}

//QUESTION3

#include <iostream>
#include <string>
#include <vector>

using namespace std;

string ConvertToLower(string& conversion) {
    string lower = conversion;
    for (int i = 0; i < conversion.length(); i++) {
        if (conversion[i] >= 'A' && conversion[i] <= 'Z') {
            lower[i] = conversion[i] + 32;
        } else {
            lower[i] = conversion[i];
        }
    }
    return lower;
}
    
void CountMatches(vector<string>& pets, string& name) {
        string petName = ConvertToLower(name);
        int count = 0;
        
        for (int i = 0; i < pets.size(); i++) {
            if (ConvertToLower(pets[i]) == petName) {
                count++;
            }
        }
        if (count == 1) {
            cout << "The name \"" << name << "\" appears " << count << " time." << endl;
        } else {
            cout << "The name \"" << name << "\" appears " << count << " times." << endl;
        }
    }

int main() {
    string userPetName;
    
    vector<string> petList = {"Molly", "Max", "Sophie", "mOlly", "Bella", "BeLLA", "James"};

    cout << "Please enter the pet name to search for: \n";
    cin >> userPetName;
    
    CountMatches(petList, userPetName);

    return EXIT_SUCCESS;
}

//QUESTION4

#include <iostream>
#include <cmath>

using namespace std;

bool DoesItFit(float width, float height, float radius) {
    float diameter = radius * radius;
    float diagonal;
    diagonal = sqrt((width * width) + (height * height));
    
    if (diagonal <= diameter) {
        cout << "True" << endl;
        return true;
    } else {
        cout << "False" << endl;
        return false;
    }
}


int main() {
    float width, height, radius;
    
    cout << "Please enter rectangle width: \n";
    cin >> width;
    cout << "Please enter rectangle height: \n";
    cin >> height;
    cout << "Please enter circle radius: \n";
    cin >> radius;
    
    DoesItFit(width, height, radius);
/*     If we wanted to we could put the function into the main program and have it return true or false instead of with an exit code. But we will keep it as is.
 */
    return EXIT_SUCCESS;
}

//QUESTION5

#include <iostream>


using namespace std;


int main() {
    float hours;
    double seconds;
    int rounded;
    
    
    cout << "Please enter number of hours: \n";
    cin >> hours;
    
    seconds = hours * 3600;
    rounded = seconds + 0.5;
    
    cout << "The number of hours rounded to the closest integer of seconds is: " << rounded << endl;
    
    
    return EXIT_SUCCESS;
}
//QUESTION6

#include <iostream>


using namespace std;


int main() {
    int n;
    cout << "Please enter an integer n: ";
    cin >> n;

    for (int row = 1; row <= n; row++) {

        for (int i = 0; i < n - row; i++) {
            cout << ". ";
        }

        for (int i = 0; i < row; i++) {
            cout << "* ";
        }

        cout << endl;
    }
    
    
    return EXIT_SUCCESS;
}

//QUESTION7

#include <iostream>


using namespace std;


int main() {
    int n;
    cout << "Please enter an integer n: ";
    cin >> n;
    
    for (int row = 1; row <= n; row++) {

        for (int i = 0; i < n - row; i++) {
            cout << ". ";
        }

        for (int i = 0; i < row; i++) {
            cout << "* ";
        }

        cout << endl;
    }

    for (int row = n - 1; row >= 1; row--) {

        for (int i = 0; i < n - row; i++) {
            cout << ". ";
        }
        
        for (int i = 0; i < row; i++) {
            cout << "* ";
        }

        cout << endl;
    }
    
    return EXIT_SUCCESS;
}

//QUESTION8

#include <iostream>
#include <vector>

using namespace std;

float AverageTemperature(vector<float>& temperatures) {
    float highest = temperatures[0];
    float lowest = temperatures[0];
    float average = 0;
    
    for (int i = 0; i < temperatures.size(); i++) {
        if (highest < temperatures[i]) {
            highest = temperatures[i];
        }
        if (lowest > temperatures[i]) {
            lowest = temperatures[i];
        }
        average += temperatures[i];
    }
    average /= temperatures.size();
    
    cout << "Highest: " << highest << endl;
    cout << "Lowest: " << lowest << endl;
    cout << "Average: " << average << endl;
    
    return average;
};


int main() {
    vector<float> temperatures;
    
    int totalTemps;
    float temps;
    
    cout << "How many temperatures do you have to input today?\n";
    cin >> totalTemps;
    
    for (int i = 0; i < totalTemps; i++) {
        cout << "Please enter the temperature: \n";
        cin >> temps;
        temperatures.push_back(temps);
    }
    
    AverageTemperature(temperatures);
    
    return EXIT_SUCCESS;
}

//QUESTION9

#include <iostream>

using namespace std;

int main (){

    int n;
    cout << "Enter an integer: ";
    cin >> n;

    int binary[32];
    int index = 0;

    int temp = n;

    while (temp > 0) {
        binary[index] = temp % 2;
        temp = temp / 2;
        index++;
    }

    cout << "Binary: ";

    for (int i = index - 1; i >= 0; i--) {
        cout << binary[i];
    }

    cout << endl;
    
    
    return EXIT_SUCCESS;
}

//QUESTION10
#include <iostream>
using namespace std;


void swapIntegers(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int int1, int2;
    
    cout << "Enter 2 integers: ";
    cin >> int1, int2;
    
    cout << "Before: int1 = " << int1 << ", int2 = " << int2 << endl;

    swapIntegers(int1, int2);

    cout << "After: int1 = " << int1 << ", int2 = " << int2 << endl;

    return 0;
}

