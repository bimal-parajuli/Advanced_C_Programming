

#include<stdio.h>

// 363 + 366 = 729 + 31 + 28 + 3
int leapornot(int);
int main(){
  int day_diff=0;
  int day[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
  int d1,m1,y1;
  int d2,m2,y2;

  printf("Enter smaller date 1 ");
  scanf("%d%d%d",&d1,&m1,&y1);
  printf("Enter date 2 ");
  scanf("%d%d%d",&d2,&m2,&y2);

  if(y2>y1){
 if(m1==2){
             if(leapornot(y1)==1){
                day_diff += 29-d1;
             } else {
                day_diff += 28 - d1;
             }
           } else {
              day_diff = day[m1-1] - d1;
         }
         m1++;

        for(int i=m1;i<=12;i++){
              if(i==2){
                 if(leapornot(y1)==1){
                    day_diff += 29;
                } else {
                    day_diff += 28;
                }
              } else {
                 day_diff += day[i-1];
              }


        }
        y1++;

        for(int i=y1;i<y2;i++){
            if(leapornot(i)==1){
               day_diff += 366;
            } else {
               day_diff += 365;
            }
       }

        for(int i=1;i<m2;i++){
              if(i==2){
                 if(leapornot(y2)==1){
                    day_diff += 29;
                } else {
                    day_diff += 28;
                }
              } else {
                 day_diff += day[i-1];
              }
        }

        day_diff += d2;
        printf("Days Difference : %d days",day_diff);
  } else if(y1==y2){
        if(m2>m1){
           if(m1==2){
             if(leapornot(y1)==1){
                day_diff += 29-d1;
             } else {
                day_diff += 28 - d1;
             }
           } else {
              day_diff = day[m1-1] - d1;
           }
           m1++;
           for(int i=m1;i<m2;i++){
              if(i==2){
                 if(leapornot(y1)==1){
                    day_diff += 29;
                } else {
                    day_diff += 28;
                }
              } else {
                 day_diff += day[i-1];
              }
           }

           day_diff += d2;
            printf("Days Difference : %d days",day_diff);
        } else if(m1==m2){
            if(d2>d1){
                 printf("Days Difference : %d days",d2-d1);
            } else if(d1==d2){
                printf("Days Difference : 0 days");
            } else {
                printf("second date must be greater than first date");
            }
        } else {
           printf("second date must be greater than first date");
        }
  } else {
     printf("second date must be greater than first date");
  }


  return 0;
}

int leapornot(int y){
    if(y%400==0){
        return 1;
    } else {
        if(y%100==0){
            return 0;
        } else if(y%4==0){
           return 1;
        } else
           return 0;
    }

}