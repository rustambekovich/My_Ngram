#include <stdio.h>
#include <string.h>
void enter(int *array,char* matn){
for(int i = 0;i<strlen(matn);i++){
    if(matn[i] > 0){
        array[matn[i]]=+1;
    }
}
void print(int *arr, int size){
    for(int i =0;i<size;i++){
        if(size[i]!='"'){
            printf("%c:%d\n",i,arr[i]);
        }
    }
}
}
int main(int ac, char* arv[]){
    int array[127]={0};
    int index = 1;
    while(index < ac){
        enter(array,arv[index]);
        index++;
    }
    print(array,127);
    return 0;
}