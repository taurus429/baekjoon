#include <iostream>

using namespace std;

int main()
{
    int array[1001];
    int num = 0;
    int min = 1001;
    int index, temp = 0;
    scanf("%d", &num);
    for(int i =0; i<num; i++){
        scanf("%d", &array[i]);
    }
    for(int i =0;i<num; i++){
        min = 1001;
        index = 0;
        for(int j=i;j<num; j++){
            if(array[j]<min){
                min = array[j];
                index = j;
            }
        }
        temp = array[index];
        array[index] = array[i];
        array[i] = temp;
    }
    for(int i=0; i< num; i++)
    cout << array[i] << endl;
}
