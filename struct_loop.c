#include<stdio.h>
#include<windows.h>
#define ARRAY_COUNT(t) sizeof(t)/sizeof(t[0])
#define TRUE 1
#define FALSE 0
void fun1();
void fun2();
void fun3();
typedef struct st_loop
{
    void (*p_fun)(void);
    int execute;
}st_loop;

void fun1(){
    printf("fun1 is execute---");
    int i;
    for (i = 0 ; i < 10 ; i++){
        printf("%s","■■");
        Sleep(400);
    }
    printf("---Completed\1\n");
}
void fun2(){
    int i;
    printf("fun2 is execute---");
    for (i = 0 ; i < 10 ; i++){
        printf("%s","■■");
        Sleep(400);
    }
    printf("---Completed\1\n");
}
void fun3(){
    int i;
    printf("fun3 is execute---");
    for (i = 0 ; i < 10 ; i++){
        printf("%s","■■");
        Sleep(400);
    }
    printf("---Completed\1\n"); // '\1' is smile
}

void main(){
    st_loop arr_st[] = {
      {fun1,TRUE},
      {fun2,TRUE},
      {fun3,TRUE}
    };
    int num = ARRAY_COUNT(arr_st);
    int i;
    for (i = 0 ; i < num ; i++){
        if (arr_st[i].execute)
            arr_st[i].p_fun();
    }
}
