#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void) {
  struct employee {
    int Emid;
    char fname[100];
    char lname[100];
    long salary;
   int date;
  int mon;
  int year;
  };
  struct employee emp[100];
  int count1=0;
  while(count1<100) {
    emp[count1].Emid = 0;
    count1+=1;
  }
  int times, q_no, empnum = 0;
  scanf("%d", &times);
int count2 =0;
  while(count2<times){
    scanf("%d", &q_no);
    if (q_no == 1) {
      int desk;
      scanf("%d", &desk);
      emp[desk-1].Emid = desk; 
      scanf("%s", emp[desk-1].fname);
      scanf("%s", emp[desk-1].lname);
      scanf("%ld", &emp[desk-1].salary);
      scanf("%d/%d/%d", &emp[desk-1].date,&emp[desk-1].mon,&emp[desk-1].year);
    empnum++;
    } 
    else if (q_no == 2) {
      int desk;
      scanf("%d", &desk);
      emp[desk-1].Emid = 0;
     empnum--;
    } 
    else if (q_no == 3) {
      int desk;
      scanf("%d", &desk);
      printf("%d ",emp[desk-1].Emid);
      printf("%s ",emp[desk-1].fname);
      printf("%s ",emp[desk-1].lname);
      printf("%ld ",emp[desk-1].salary);
      printf("%02d/%02d/%d\n",emp[desk-1].date,emp[desk-1].mon,emp[desk-1].year);
    } else if (q_no == 4) {
      int count3 = 0;
      while(count3<100) {
        if (emp[count3].Emid != 0) {
          printf("%d ",emp[count3].Emid);
          printf("%s ",emp[count3].fname);
          printf("%s ",emp[count3].lname);
          printf("%ld ",emp[count3].salary);
          printf("%02d/%02d/%d\n",emp[count3].date,emp[count3].mon,emp[count3].year);
        }
        count3+=1;
      }
    } 
    else if (q_no == 5) {
      int desk, salary1;
      scanf("%d%d", &desk, &salary1);
      emp[desk-1].salary = salary1;
    } else if (q_no == 6) {
      int less = 100000, more = 100;
      int total = 0;
      for (int i = 0; i < 100; i++) {
        if(emp[i].Emid !=0){
        int salary = emp[i].salary;
        total =  total + salary;
        if (salary < less) {
          less = salary;
        }
        if (salary > more) {
          more = salary;
        }}
      }
      float average = (float)total/ (float)empnum;
      printf("%d %d %.2f\n", less, more, average);
    } 
     else if (q_no == 7) { 
      int date1, mon1, year1;
       scanf("%d/%d/%d", &date1,&mon1,&year1);
       int count =0 ;
       for(int i =0;i<100;i++){
         if(emp[i].Emid !=0){
       if(year1>emp[i].year) 
         count++;
       if(year1==emp[i].year && mon1>emp[i].mon) count++;
       if(year1==emp[i].year && mon1==emp[i].mon && date1>emp[i].date) count++;
       }
       }
       printf("%d\n" , count);
     }
    count2+=1;
  }
 
  return 0;
}