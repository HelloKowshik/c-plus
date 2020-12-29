#include <iostream>
using namespace std;
void print_table();
void print_arr(int arr[], int s);
int main() {
  int arrSize = 100, counting = 0;
  int arr[arrSize];
  for(int i = 0; i < arrSize; i++){
    if(cin>>arr[i]){
        counting++;
    }else{
        break;
    }
  }
  print_arr(arr, counting);
  return 0;
}
void print_arr(int arr[], int s){
    for(int i = 0; i < s; i++)
        cout<<arr[i]<<"\t";
    cout<<endl;
}
void print_table(){
    cout << " 1\t2\t3\t4\t5\t6\t7\t8\t9" << endl << "" << endl;
  for (int c = 1; c < 10; c++) {
    cout << c << "| ";
    for (int i = 1; i < 10; i++) {
      cout << i * c << '\t';
    }
    cout << endl;
  }
}
