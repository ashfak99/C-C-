#include<stdio.h>
#define n 100
int main(int argc, char const *argv[])
{
    struct course
{
    char course_name[n];
    char course_no[n];
    char department[n];
    int credit_hours[n];
};
struct course c1,c2,c3;
    printf("Ashfak Alam\n");
    printf("Please Enter Course Name, Course No, Credit Hourse, Department\n");
    scanf("%c%c%d%c",&c1.course_name,&c1.course_no,&c1.credit_hours,&c1.department);
    printf("Please Enter Course Name, Course No, Credit Hourse, Department\n");
    scanf("%c%c%d%c",&c2.course_name,&c2.course_no,&c2.credit_hours,&c2.department);
    printf("Please Enter Course Name, Course No, Credit Hourse, Department\n");
    scanf("%c%c%d%c",&c3.course_name,&c3.course_no,&c3.credit_hours,&c3.department);
    printf("\n\n");
    printf("Course Name\tCourse No\tCredit Hourse\tDepartment\n");
    printf("%c\t%c\t%d\t%c\n",c1.course_name,c1.course_no,c1.credit_hours,c1.department);
    printf("%c\t%c\t%d\t%c\n",c2.course_name,c2.course_no,c2.credit_hours,c2.department);
    printf("%c\t%c\t%d\t%c\n",c3.course_name,c3.course_no,c3.credit_hours,c3.department);

    return 0;
}
