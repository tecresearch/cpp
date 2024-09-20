#include<stdio.h>
int main()
{
	struct student
	{
		int rollNo, age;
		char name[15];
	};
	struct student *s = (struct student *)malloc(sizeof(struct student));
	if( s == NULL)
	{
		printf("Unable to allocate memory");
		exit(1);
	}
	printf("Enter your roll number, name and age of student\n");
    scanf("%d%s%d", &s -> rollNo, s -> name, &s->age);
    printf("Roll Number = %d\nName = %s\nAge = %d", s->rollNo, s->name, s->age);
    free(s);

}


