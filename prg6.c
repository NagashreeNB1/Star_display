#include <Stdio.h>
#include <string.h>

struct student

{
    int age;
    char name[30];
    float marks;
    char grade;

};

int  main()

{
    struct student s1;
    
    strcpy(s1.name,"nagashree Vikram");
    strcat(s1.name," kumar");
    s1.age=29;
    s1.marks=100.7;
    s1.grade='a';
  
    printf("Student1:%d %s %.2f %c\n",s1.age,s1.name,s1.marks,s1.grade='a');
    printf("Size of union Student:%d\n",sizeof(struct student));
    printf("size of int:%d\n ",sizeof(s1.age));
    printf("size of string:%zu\n ",sizeof(s1.name));
    printf("size of float:%zu ",sizeof(s1.marks));
   
    return 0;
}