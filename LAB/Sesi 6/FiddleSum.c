#include <stdio.h>
#include<limits.h>

int main(){
    int i, count;
    scanf("%d", &count);
    int numbers[count];
    getchar();

    for(i = 0; i < count; i++){
        scanf("%d", &numbers[i]);
    }

    int maxVal = INT_MIN;
    int minVal = INT_MAX;

    for(i = 0; i < count; i++){
        if (numbers[i] > maxVal){
            maxVal = numbers[i];
        }
        if (numbers[i] < minVal){
            minVal = numbers[i];
        }
    }

    int total = 0;
    for(i = 0; i < count; i++){
        if (numbers[i] != minVal && numbers[i] != maxVal){
            total += numbers[i];
        }
    }

    printf("FiddleSum: %d\n", total);
    return 0;
}
