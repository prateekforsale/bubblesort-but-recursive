#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define K_10 10000
#define K_100 100000
#define M_1 1000000

int k10[K_10];
int k100[K_100];
int m1[M_1];

void bucket_Sort(int* arr, int size)
{
    int p, q;
    int temp;
    int bucket_count[size];
    for (p=0; p<size; p++) {
        bucket_count[p] = 0;
    }
    for (p=0; p<size; p++) {
        temp = arr[p];
        bucket_count[temp]++;
    }
    for (p=0, q=0; p<size; p++) {
        for (; bucket_count[p]>0; (bucket_count[p])--) {
            arr[q++] = p;
        }
    }
}

int main(){
        
    for (int i=0; i<K_10; i++) {
        k10[i] = rand()%201;
    }
    for (int i=0; i<K_100; i++) {
        k100[i] = rand()%201;
    }
    for (int i=0; i<M_1; i++) {
        m1[i] = rand()%201;
    }
    
    bucket_Sort(k10, K_10);
    bucket_Sort(k100, K_100);
    bucket_Sort(m1, M_1);

    printf("Success\n\n");
        
    return 0;
}
