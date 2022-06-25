#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include"Sort.h"
#include"Student.h"
#include"Prof.h"

void main() {
    int choise,size, stdInd = 0,proInd=0,sortChoise;
    char name[50],rank[50];
    Student*std= malloc((Student*)sizeof(Student));
    Student s[100];
    Prof*pr = malloc((Prof*)sizeof(Prof));
    Prof p[100];
    while (true)
    {
        printf("please enter your choise\n");
        printf("1-entre new student\n");
        printf("2-Sorting Student\n");
        printf("3-entre new Profesor\n");
        printf("4-Sorting Profesor\n");
        scanf("%d", &choise);
        switch (choise)
        {
        case 1:
            // std = (Student*)malloc(sizeof(Student));
            printf("entre new student\n");
            printf("enter name\n");
            scanf("%s", &name);
            size = strlen(name);
            std[stdInd].name = (char*)malloc((size + 1) * sizeof(char));
            strcpy(std[stdInd].name, name);
            printf("enter age\n");
            scanf("%d", &std[stdInd].age);
            printf("enter avg\n");
            scanf("%d", &std[stdInd].avg);
            s[stdInd] = std[stdInd];
            stdInd++;
            break;
        case 2:
            printf("Sorting Student By : \n");
            printf("1-Sort by Student name\n\n");
            printf("2-Sort by Student avg\n\n");
            printf("3-Sort by Student age\n\n");
            scanf("%d", &sortChoise);
            switch (sortChoise)
            {
            case 1:

                printf("1-Sort by Student name\n");
                mergeSort(s, sizeof(s) / sizeof(Student) - 1, sizeof(Student), nameCmp);
                printName(s, stdInd);
                break;

            case 2:
                printf("2-Sort by Student avg\n");
                mergeSort(s, sizeof(s) / sizeof(Student) - 1, sizeof(Student), sizeof(Student), avgCmp);
                printAvg(s, stdInd);
                break;
            case 3:
                printf("3-Sort by Student age\n");
                mergeSort(s, sizeof(s) / sizeof(Student) - 1, sizeof(Student), ageCmp);
                printAge(s, stdInd);
                break;
            default:
                break;
            }
            break;
        case 3:
            printf("entre new Profesor\n");
            printf("enter name\n");
            scanf("%s", &name);
            size = strlen(name);
            pr[proInd].name = (char*)malloc(size * sizeof(char));
            strcpy(pr[proInd].name, name);
            printf("enter age\n");
            scanf("%d", &pr[proInd].age);
            printf("enter Id\n");
            scanf("%d", &pr[proInd].id);
            printRank();
            //pro rank string scan
            bool flag = true;
            while (flag == true) {
                printf("enter rank:\n");
                scanf("%s", &rank);
                if (strcmp(rank, "prof")) {
                    pr[proInd].rank = prof;
                    pr[proInd].flag.isSegel = YES;
                    flag = false;
                }
                if (strcmp(rank, "lecture")) {
                    pr[proInd].rank = lecture;
                    pr[proInd].flag.isSegel = YES;
                    flag = false;
                }
                if (strcmp(rank, "senior")) {
                    pr[proInd].rank = senior;
                    pr[proInd].flag.isSegel = YES;
                    flag = false;
                }
            }
            p[proInd] = pr[proInd];
            proInd++;
            break;
        case 4:
            printf("Sorting Profesor:\n");
            printf("1-Sort by Profesor Id\n");
            printf("2-Sort by Profesor age\n");
            printf("3-Sort by Student Rank\n");
            scanf("%d", &sortChoise);
            switch (sortChoise)
            {
            case 1:
                printf("1-Sort by Profesor Id\n");
                mergeSort(p, sizeof(p) / sizeof(Prof) - 1, sizeof(Prof), proIdCmp);
                printIdProf(p, proInd);
                break;

            case 2:
                printf("2-Sort by Profesor age\n");
                mergeSort(p, sizeof(p) / sizeof(Prof) - 1, sizeof(Prof), proAgeCmp);
                printAgeProf(p, proInd);
                break;
            case 3:
                printf("3-Sort by Profesor Rank\n");
                mergeSort(pr, sizeof(p) / sizeof(Prof) - 1, sizeof(Prof), proRankCmp);
                printRankProf(p, proInd);
                break;
            default:
                break;
            }
            break;
        default:
            break;
        }
    }
}
