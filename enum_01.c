//enumeration
#include<stdio.h>
enum Week{
    sun,mon,tue,wed,thu,fri,sat
};

int main(){
enum Week day1,day2,day3;
day1=tue;
day2=sun;
day3=fri;
int diff = day3-day1;
printf("day1=%d\n",day1);
printf("day2=%d\n",day2);
printf("day3=%d\n",day3);
printf("difference:=%d",diff);

}