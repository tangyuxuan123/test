#include <stdio.h>

struct person_info
{
    char name[20];
    char sex[20];
    char age[20];
};

void person_info_show(struct person_info p_i)
{
    printf("name: %s\n", p_i.name);
    printf("sex: %s\n", p_i.sex);
    printf("age: %s\n", p_i.age);
    
}
int main(int argc, char * argv[])
{
    struct person_info p_i = {0};

    printf("what is your name?\n");
    scanf("%s", p_i.name);
    printf("what is your sex?\n");
    scanf("%s", p_i.sex);
    printf("what is your age?\n");
    scanf("%s", p_i.age);

    person_info_show(p_i);

    return 0;
}