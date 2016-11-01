#include <iostream>

void swap(int a[], int m, int b){
    int temp = a[m];
    a[m] = a[b];
    a[b] = temp;
}

void quickSort(int a[], int low, int high){
   int key = a[low];
   int begin = low;
   int end = high;
   int temp;
   if(begin >= end) return;
   while(begin < end){
       while(begin<end && a[end] > key) end--;
       swap(a, begin, end);
       while(begin<end && a[begin] <= key) begin++;
       swap(a, begin, end);
   }
   quickSort(a, low, begin - 1);
   quickSort(a, begin+1, high);

}
int main(){
    int a[] = {5,2,3,9,0,8,7,6,4,1};
    std::cout <<  sizeof(a)/ sizeof(a[0]) - 1 << std::endl;
    quickSort(a, 0, sizeof(a)/sizeof(a[0]) -1);
    for(int i=0; i<=sizeof(a)/ sizeof(a[0]) - 1;i++) std::cout << a[i] << std::endl;
}


