#include <stdio.h>
#include <math.h>


unsigned int calculateFuel(unsigned int mass){
    if(mass < 6) {
        return 0;
    }
    unsigned int round = floor(mass / 3) - 2;
    return round;
}

unsigned int iterativefuel(unsigned int fuel){
    printf("Current: %d", fuel);
    unsigned int ff = calculateFuel(fuel);
    unsigned int temp = ff;
    while (ff != 0){
        /* code */
        int tt = calculateFuel(ff);
        temp += tt;
    }

    return temp;
}

int main(){
    FILE *f;
    FILE *d;
    char line[256];
    char lie[111];
    unsigned int totalsum = 0;
    unsigned int secondsum = 0;

    f = fopen("input.txt", "r");
    // int test = floor(136811/3) - 2;
    // printf("Fif %d\n", test);

    while (fgets(line, sizeof(line), f)) {
        int num = atoi(line);
        int firstmass = calculateFuel(num);
        totalsum += firstmass;
    }

    printf("part 1: %d\n", totalsum);
    fclose(f);

    d = fopen("input.txt", "r");
    // Part 2
    int mass;
     while (fgets(lie, sizeof(lie), d)) {
         int num = atoi(lie);
         int fue = (num / 3) - 2;
         secondsum += fue;
         mass = fue;
         while((fue=(mass/3)-2)>0){
            secondsum += fue;
            mass = fue;
        }
    }

    printf("Part 2: %d\n", secondsum);
}

