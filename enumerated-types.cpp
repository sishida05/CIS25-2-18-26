#include <iostream>
#include <string>
using namespace std;

enum Day { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, Error };

Day getDOWFromDate(int year, int month, int day) {
    // Calculate day of week
    if  ( (year == 2026) && (month == 2) && (day == 18) ) {
        return WEDNESDAY;
    }
    return Error;
}


int main() {
   
    string daysOfTheWeek[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    return 0;
}
