#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    //test
    int test[] = {2,4,4,5,99,0};
    int numss[113];
    int size = sizeof(numss)/sizeof(numss[0]);


    char *num = strtok(argv[1], ",");

    int count = 0;
    while (num != NULL){
        numss[count] = atoi(num);
        num = strtok(NULL, ",");
        count += 1;

    }

    printf("First: %d\n", numss[0]);
    

    for (int i = 0; i != 99; i+=4){
        if (numss[i] == 1){
            /* code */
            int first = numss[numss[i+1]];
            int sec = numss[numss[i+2]];

            printf("first: %d\n", first);
            printf("Sec: %d\n", sec);

            int sum = first + sec;
            //replace
            numss[numss[i + 3]] = sum;
        }else if (numss[i] == 2){
            /* code */
            int first = numss[numss[i+1]];
            int sec = numss[numss[i+2]];

            printf("first: %d\n", first);
            printf("Sec: %d\n", sec);

            int sum = first * sec;
            //replace
            numss[numss[i + 3]] = sum;
        }
    }


    printf("After: ");
    for (size_t i = 0; i < size; i++){
        /* code */
        printf("%d, ", numss[i]);
    }
    printf("\n");
    
    
}
