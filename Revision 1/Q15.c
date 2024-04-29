#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

int compare_dates(struct Date d1, struct Date d2) {
    if (d1.year < d2.year) {
        return -1; 
    } else if (d1.year > d2.year) {
        return 1; 
    } else {
        if (d1.month < d2.month) {
            return -1; 
        } else if (d1.month > d2.month) {
            return 1; 
        } else {
            if (d1.day < d2.day) {
                return -1; 
            } else if (d1.day > d2.day) {
                return 1; 
            } else {
                return 0; 
            }
        }
    }
}   

int main() {
    struct Date d1 = {31, 12, 2018};
    struct Date d2 = {31, 12, 2020};

    int result = compare_dates(d1, d2);

    if (result < 0) {
        printf("Date 1 is come's First \n");
    } else if (result > 0) {
        printf("Date 2 is come's First \n");
    } else {
        printf("Dates are equal\n");
    }

    return 0;
}
