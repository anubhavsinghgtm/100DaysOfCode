#include<iostream>

using namespace std;

void rotateMatrix(int m, int n, int a[10][10])
{
    int i,k=0,l=0;
    while (k<m && l<n) {

        // To print from left to right
        for (i=l; i<n; ++i) {
            cout << a[k][i] << " ";
        }
        k++;

        //To print from up to bottom
        for (i=k; i<m; ++i) {
            cout << a[i][n - 1] << " ";
        }
        n--;

        // To print from right from left
        if (k < m) {
            for (i = n-1; i>=l; --i) {
                cout << a[m - 1][i] << " ";
            }
            m--;
        }

        // To print from bottom to up
        if (l < n) {
            for (i = m-1; i >= k; --i) {
                cout << a[i][l] << " ";
            }
            l++;
        }
    }
}

int main(){
int n,m;
cin>>n>>m;
int arr[n][n];

//To input the matrix
for(int i=0; i<n; i++){
    for(int j=0; i<n; j++){
        cin>>arr[i][j];
    }
}

//rotation function
rotateMatrix(m,n,arr);

return 0;
}
