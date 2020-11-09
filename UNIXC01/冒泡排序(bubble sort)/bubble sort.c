#include <stdio.h>


void bubble_sort(int *p_num, int size){
    int num = 0, num1 = 0, tmp = 0;
    for (num = 1 ; num <= size-1; num++){
        for(num1 =  size -1 ; num1 >= num; num1--){
            if ( *(p_num + num1) < *(p_num + num1-1)){
                tmp = *(p_num + num1);
                *(p_num + num1) = *(p_num + num1 - 1);
                *(p_num + num1 - 1) = tmp;
            }
        }
    }
}

int main (){
    int array[] = {1,6,3,2,4,5}, num = 0;
    bubble_sort(array, 6);
    for (num = 0; num <= 5 ; num++){
        printf("%d", array[num]);
    }
    printf("\n");
    return 0;
}
