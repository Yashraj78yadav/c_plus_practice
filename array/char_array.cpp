#include<iostream>
using namespace std;
    int get_length(char arr[]){
        int count=0;
        int index=0;
        while(arr[index]!='\0'){
            count++;
            index++;
        }
        return count;
    }

    void concatinate(char arr[],char brr[]){
        int arrIndex=get_length(arr);
        int brrIndex=0;
        while(brr[brrIndex]!='\0'){
            arr[arrIndex]=brr[brrIndex];
            arrIndex++;
            brrIndex++;
        }
        arr[arrIndex]='\0';
    }
int main(){
//     // delaration of array 
//     // char arr[10];

//     // initialization  of array
//     char arr[10]="yashraj";
//     for(int i=0;i<10;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//  cout<<arr[7]<<endl;
//  int value=arr[7];
//  cout<<value<<endl;
// //  in char array all value are printed by using its name like this
//     cout<<arr<<endl;

    // finding the length of charector array
    
    char arr[]="yashraj";
    cout<<get_length(arr)<<endl;
    char brr[]="yadav";
    concatinate(arr,brr);
    cout<<arr<<endl;



    return 0;
}