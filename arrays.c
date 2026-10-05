#include<stdio.h>
int mul (int table [][10],int ,int b,int );
int main(){
    int table[2][10];
    mul(table,0,10,2);
    mul(table,1,10,3);
}
int mul (int table [][10],int a,int b,int n){
for(int i =0;i<b;i++){
    table[a][i]=n*(i+1);
    printf("%d\t",table[a][i]);
}
}


