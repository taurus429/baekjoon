#include <iostream>

using namespace std;

int main()
{
    int array[3];
    int min, index, temp;
    for(int i =0; i<3; i++){
        scanf("%d", &array[i]);
    }
    for(int i =0;i<3; i++){
        min = 1000000;
        index = 0;
        for (int j =i; j<3; j++){
            if(min>array[j]){
                min = array[j];
                index = j;
            }
        }
        temp = array[i];
        array[i] = array[index];
        array[index] = temp;
    }
    for(int i=0; i< 3; i++)
    cout << array[i] << endl;
}
