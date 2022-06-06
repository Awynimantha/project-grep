//grep version 1
#include<stdio.h>
#include<dirent.h>

int check(char *str,FILE *f){
    int c;
    int i;
    while(( c=getc(f))!=EOF){
        if(c!=str[i]) i=0;
        else i++;
        if(str[i]=='\0'){
            return 1;
        }

    }
    return 0;

}
void filecheck(char *val,char *file){
    FILE * f=fopen(val,"r");
    if(f==NULL){
       // printf("No directory");
        return ;
    }
    
    int res=check(val,f);
    if(res){
        printf("%s-%s",file,val);
    }
    else{
      //  printf("%s","No entry");
      return;
    }

}

int main(int argc,char *argv[]){
    if(!argv[2]){
        DIR *d;
        struct dirent *dir;
        d=opendir(".");
        if(d){
            while((dir=readdir(d))!=NULL){
                    filecheck(argv[1],dir->d_name);
            }
        }
    }
    else{
            filecheck(argv[1],argv[2]);
    }
}

    







