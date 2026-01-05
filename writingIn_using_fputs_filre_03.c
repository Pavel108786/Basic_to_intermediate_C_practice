 // writing in file by fputs()
 #include<stdio.h>
 int main(){
    FILE *file;
    char name[30];
    file = fopen("test02.txt","a");
    if(file == NULL){
        printf("the file is not create \n");
    }else{
        printf("file opend\n");
        printf("Enter ur hometown:");
        fgets(name,sizeof(name),stdin);

        fputs(name,file);
        printf("write successfully");
        fclose(file);
    }

 }