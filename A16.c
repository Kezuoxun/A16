#include<stdio.h>
#include<stdlib.h>

int add(void);

int main(void){
	
    printf("2+4+6+~+100加總:%d\n", add());  //顯示add()回傳的數字 
    

    system("pause");

    return 0;
}
int add(void){

    static int sum_num=0;
    
    int i;

    for(i=2;i<=100;i+=2){
        sum_num+=i;
    }
    return sum_num;
}
