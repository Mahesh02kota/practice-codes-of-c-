#include<stdio.h>
// void square();
// void circle();
// void rec();
// int main(){
//     square();
//     circle();
//     rec();
//     return 0;
// }
// void square(){
//     int a,area;
//     printf("enter the side of the square :");
//     scanf("%d",&a);
//     area=a*a;
//     printf("area of the square is : %d\n",area);
   

// } 
// void circle(){
//     float a,area;
//      printf("enter the radius of the circle  :");
//     scanf("%f",&a);
//     area=3.14*a*a;
//     printf("area of the circe : %f\n",area);
  

// }
// void rec(){
//     int a,b,area;

//      printf("enter the length and bearth  :");
//     scanf("%d,%d",&a,&b);
//     area=a*b;
//     printf("area of the rectangle : %d",area);
// }
void swap(int* , int* );
int main(){
    int x =3,y=5;
    swap(&x,&y);
    printf("the values are %d & %d\n",x,y);
    

    return 0;

}
void swap(int* a, int* b){
int t=*a;
*a=*b;
*b=t;
printf("the values are %d & %d\n",*a,*b);

}