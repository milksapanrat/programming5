#include <stdio.h>

enum day {sun, mon, tue, wed, thu, fri, sat};
enum cardinal_point {north = 0, east = 90, south = 180, west = 270};
enum months {jan = 1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec};

int main(){
    enum day today = tue;
    enum cardinal_point direction = north;
    enum months month = may;

    printf ("%d", today);
    printf ("%d", direction);
    printf ("%d", month);

    return 0;
}