#include<stdio.h>
 int main (){
    FILE *fptr;
fptr=fopen("file.txt","r");
struct student {
    char name[100];
    int marks;
    float cgpa;
};
// char name[100];
// int marks;
// float cgpa;
// // printf("enter studen name :");
// // scanf("%s",name);
// // printf("ENTER STUDENT MARKS: ");
// // scanf("%i",&marks);
// // printf("enter student cgpa : ");
// // scanf("%f",&cgpa);
// //  fprintf(fptr,"%s\n",name);
// //  fprintf(fptr,"%i\n",marks);
// //  fprintf(fptr,"%f",cgpa);
fscanf(fptr,"%s",);
printf("%s,%i",student);
fscanf(fptr,"%f",student);
printf("%f",student);
 fclose(fptr);
 return 0;
 }