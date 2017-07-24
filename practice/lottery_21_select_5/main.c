#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SELECT_LENS 5
#define POOL_NUMS 21

int * randFive();
void printFive(int * nums, int len);


void main(int argc, const char * agrs[]) {
		srand(time(NULL)); // randomize seed

		int * nums = malloc(sizeof(int) * SELECT_LENS);
    nums = randFive(); 
    printFive(nums, SELECT_LENS);

    free(nums);
}

int * randFive(){
    int * nums = malloc(sizeof(int) * SELECT_LENS);

    for(int i=0;i<SELECT_LENS;i++){
        nums[i]= rand() % POOL_NUMS;   
    }

    return nums;
}

void printFive(int nums[], int len) {
    for(int i=0;i<len;i++){
        printf("%d \t", nums[i]);
    }
}
