/*จงเขียนฟังก์ชันการตัดเกรดในแต่ละรายวิชาของนักเรียนจำนวน 3 คน 
โดยนักเรียนแต่ละคนจะมีข้อมูลดังต่อไปนี้ ชื่อ, นักศักศึกษา, คะแนนในวิชาที่ 1, คะแนนในวิชาที่ 2, คะแนนในวิชาที่ 3, คะแนนในวิชาที่ 4, คะแนนในวิชาที่ 5
 แสดงได้ดังโครงสร้างข้อมูลต่อไปนี้*/
#include <stdio.h>

typedef struct {
    char Name[20];
    char ID[5];
    float ScoreSub1;
    float ScoreSub2;
    float ScoreSub3;
    float ScoreSub4;
    float ScoreSub5;
} S;

void grade(float score); 
float Average(float a,float b,float c ,float e,float f);

int main() {
    int n = 3;
    S array[n];

    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n",i+1);
        printf("Name : ");
        scanf("%19s", array[i].Name);
        printf("ID : ");
        scanf("%4s", array[i].ID);
        printf("cores in Subject 1:\n");
        scanf("%.0f", &array[i].ScoreSub1);
        printf("cores in Subject 2:\n");
        scanf("%.0f", &array[i].ScoreSub2);
        printf("cores in Subject 3:\n");
        scanf("%.0f", &array[i].ScoreSub3);
        printf("cores in Subject 4:\n");
        scanf("%.0f", &array[i].ScoreSub4);
        printf("cores in Subject 5:\n");
        scanf("%.0f", &array[i].ScoreSub5);
    }

    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:",i+1);
        printf("\nName: %s\n", array[i].Name);
        printf("ID: %s\n", array[i].ID);
        printf("Scores: %f %f %f %f %f",array[i].ScoreSub1,array[i].ScoreSub2,array[i].ScoreSub3,array[i].ScoreSub4,array[i].ScoreSub5);
        printf("Grades:");
        grade(array[i].ScoreSub1);
        grade(array[i].ScoreSub2);
        grade(array[i].ScoreSub3);
        grade(array[i].ScoreSub4);
        grade(array[i].ScoreSub5);
        printf("Average Scores:%.1f",Average(array[i].ScoreSub1,array[i].ScoreSub2,array[i].ScoreSub3 ,array[i].ScoreSub4,array[i].ScoreSub5));
    }
    return 0;
}

void grade(float score) {
    if (score >= 80)
        printf(" A ");
    else if (score >= 75)
        printf(" B+ ");
    else if (score >= 70)
        printf(" B ");
    else if (score >= 65)
        printf(" C+ ");
    else if (score >= 60)
        printf(" C ");
    else if (score >= 55)
        printf(" D+ ");
    else if (score >= 50)
        printf(" D ");
    else
        printf(" F ");
}
float Average(float a,float b,float c ,float d,float e){
    float avg=(a+b+c+d+e)/5;
    return avg;
}
