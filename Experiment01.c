/*Write a C program to accept the height of a person in centimeters and
categorize the person according to their height.
Height < 150 cm (Dwarf)
Height = 150 cm(Average Height)
Height >=165 cm(tall)
*/
#include<stdio.h>
int main(){
    float Height;
    printf("Enter height :");
    scanf("%lf",&Height);
    if(Height < 150 )
    printf("Dwarf");
    else if(Height = 150 )
    printf("Average Height");
    else if(Height >= 165 )
    printf("Tall");
    else
    printf("Not a valid height");
    return 0; 
}