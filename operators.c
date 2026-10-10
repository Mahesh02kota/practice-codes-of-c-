#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>
#include<math.h>
int main(){
    int   a=(-8),b=3;
    // code for arthematic operator + - * / pow fabs
    printf(" the sum : %d\n ",a+b);
    printf(" the sub: %d\n",a-b);
    printf(" the mul: %d\n ",a*b);
    printf(" the div: %.2f\n",(float)a/b);
   printf("the value: %.1f\n", pow(a,b));
   printf(" the fabs : %.1f\n ", fabs(a));
   printf("\n");
//    code realtional operators > < >= <= ==
   if(a>b){
    printf("%d is big\n",a);
   } else{
    printf("%d is big\n",b);
   } if(a<b){
    printf("%d is small\n",a);
   } else{
     printf("%d is small\n",b);
   }

   if(a>=b){
printf("true\n");
   }else{
    printf("false\n");
   }if(a<=b){
printf("true\n");
   }else{
    printf("false\n");
   }if(a==b){
    printf("both are equal\n");

   }else {
    printf("not equal\n");
   } printf("\n");
// code for logical operators && || ! 
int A=20,B=10;
(A==B && B==10) ? printf("true\n"):printf("false\n");
(A!=B || A>=10) ? printf(" true\n "): printf(" false\n");
printf("\n");
//  code assignment operators = += _= *=
    B=0;
    printf("%d\n",B);
    A+=B;
    printf("%d\n ",A);
    A-=B;
    printf("%d\n",A);
    A*=B;
    printf("%d\n",A);
    printf("\n");
    // increment and descrement operators ++ --
    int i ;
    for(i=0;i<=10;++i){
        printf("%d\t ",i);
       
    }
     printf("\n");
      i =0;
     while(i>=-10){
        printf("%d\t",i);
        i--;
    } 
    printf("\n"); 
     i=5;
    printf("%d\t",i++);
    printf("%d\n",i);
    i=5;
    printf("%d\t",++i);
    printf("%d\n",i);
    printf("\n");
     i= 5;
     printf("%d\t",i--);
     printf("%d\n",i);
     i=5;
     printf("%d\t",--i);
     printf("%d\n",i);
        return 0;
   }
  //  bitwise operations using bitwise operators 
        int main (){
        uint8_t reg=0;
        (reg<<2);
        reg |=(1u<<2);
         printf("%u\n",reg);
         reg &=~(1u<<2);
          printf("%u\n",reg);
          reg ^= (1u<<2);
           printf("%u\n",reg);
          ((reg&(1u<<2))!=0u) ? printf("turn on "): printf("turn off ");

return 0;

        }


