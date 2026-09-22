#include <stdio.h>

struct Student{
  char name[50];
  char regno[20];
  int marks;
};

int main() {
  struct Student s1;

  printf("What is your name:");
  scanf("%s",s1.name);

  printf("What is your Reg No:");
  scanf("%s",s1.regno);

  printf("What is your mark:");
  scanf("%d",&s1.marks);

  printf("\n--- Student Bonafide Details ---\n");
  printf("Name : %s\n",s1.name);
  printf("Reg No : %s\n",s1.regno);
  printf("Marks : %d\n",s1.marks);

  if(s1.marks >= 50) {
    printf("Result: PASS, Super!\n");
  } else {
    printf("Result: Fail, Next time you will pass\n");
  }

  return 0;
}
