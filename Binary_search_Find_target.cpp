#include<iostream>
using namespace std;

int redshirtbox(int a[], int s, int i){
    int start = 0;
    int last = s - 1;

    while(start <= last){
        int mid = start + (last - start) / 2;
        
        if(i > a[mid]){
            start = mid + 1;
        }
        else if(i < a[mid]){
            last = mid - 1;
        }
        else {
            return mid; 
        }
    }
    return -1; 
}
int main(){
    int q;
    int r[10] = {10, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    cout << "HI SIR WELCOME TO MY RED SHIRT SHOP" << endl;
    cout << "Please enter the size of shirt please: ";
    cin >> q; 
    int result = redshirtbox(r, 10, q);
    if(result != -1) {
        cout << "Great! Shirt size " << q << " is available at box number : " << result << endl;
    } else {
        cout << "Sorry Sir, this size is out of stock!" << endl;
    }
    return 0;
}