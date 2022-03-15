#include <stdio.h> 

int main() { 
	int a[3][3] = {0};
    int b[3][3] = {0}; // fixed 2d array
    int c[3][3] = {0};
    int count = 0; // switch 강제로 돌릴 예정.

    // init.
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            a[i][j] = (3*i)+j+1;
            b[i][j] = 1;
            //printf("%d",a[i][j]);
        }
    }

    switch(count) {
        case 0:
            for(int i = 0; i < 3; i++) {
                for(int j = 0; j < 3; j++) {
                    c[i][j] = a[i][j] + b[i][j];
                    printf("%02d",c[i][j]);
                }
                printf("\n");
            }
            printf("\n \n");
            count++; 
        case 1:
            for(int i = 0; i < 3; i++) {
                for(int j = 0; j < 3; j++) {
                    c[i][j] = a[i][j] - b[i][j];
                    printf("%02d",c[i][j]);
                }
                printf("\n");
            }
            count++; 
        case 2:
            
        case 3:
            
        default:
            printf("that it!");
            break;

    }
}