#include<stdio.h>
// int main(){
//     int age =22;
//     int *ptr=&age;
//     int **pptr=&ptr;
// //     printf("%p\n",&age);
//    printf("%u\n",&age); 
//    printf("%u\n",&ptr);
//    printf("%u\n",&pptr);
//    printf("%d\n",age);
//    printf("%d\n",*ptr);
// printf("%d",**pptr);
// 
// int i=5;
// int *ptr=&i;
// int **pptr=&ptr;
// printf("%d\n",**pptr);

// }
// int square (int* );
// int main(){
// int number = 3;

// square(&number);
// printf(" main function value :%d\n",number);
// }
// int square(int*n){
//     *n=(*n)*(*n);
//     printf("square is : %d\n",*n);
// }
// call by refernce<<<<<<<<<<>>>>>>>>>
// 

void alphabets(char* );
int main(){
    
    char n;
    scanf("%c",&n);
    alphabets(&n);
    return 0;

}

void alphabets(char* a){
    char i,z='z';
    for( i=*a;i<=z;i++){
        printf("%c",i);
    }
}