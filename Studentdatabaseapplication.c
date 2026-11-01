#include <stdio.h>

struct Student
{
    int roll_number;
    char name[50];
    float cut_off;
    char city[50];
    char dream[50];
};

int main()
{
    int count;

    printf("Enter the Student Count:");
    scanf("%d", &count);

    struct Student S[count];

    Read_input(S, count);
    Display_output(S, count);

    return 0;
}

void Read_input(struct Student S[], int size)
{
    int counter = 1, i;

    for(i = 0; i < size; i++)
    {
        printf("\nEnter the Student %d detail:", counter);

        printf("\nEnter the roll number:");
        scanf("%d", &S[i].roll_number);

        printf("Enter the name:");
        scanf("%s", S[i].name);

        printf("Enter the cutoff:");
        scanf("%f", &S[i].cut_off);

        printf("Enter the city:");
        scanf("%s", S[i].city);

        printf("Enter the dream:");
        scanf("%s", S[i].dream);

        counter++;
    }
}

void Display_output(struct Student S[], int size)
{
    int counter = 1, i;

    for(i = 0; i < size; i++)
    {
        printf("\nStudent %d Details:\n", counter);

        printf("Student roll number: %d\n",
               S[i].roll_number);

        printf("Name of student: %s\n",
               S[i].name);

        printf("Cutoff of student: %.2f\n",
               S[i].cut_off);

        printf("City of student: %s\n",
               S[i].city);

        printf("Dream of student: %s\n",
               S[i].dream);

        counter++;
    }
}