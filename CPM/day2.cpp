
/// Product of array Except self

#include <iostream>

using namespace std;

/*=================================================
            Product of array Except Self
  =================================================*/
/*=================================================
        Time Comlexity : O(n)
        Space Complexity : O(n)
  =================================================*/
/*

int main()
{
    int n;
    cout<<"Enter the size of array : "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int prefixProduct[n];
    int suffixProduct[n];
    int product[n];

    prefixProduct[0]=1;
    for(int i=1;i<n;i++){
        prefixProduct[i]=arr[i-1]*prefixProduct[i-1];
    }
    suffixProduct[n-1]=1;
    for(int i=n-2;i>=0;i--){
        suffixProduct[i]=arr[i+1]*suffixProduct[i+1];
    }

    for(int i=0;i<n;i++){
        product[i]=prefixProduct[i]*suffixProduct[i];
    }
    for(int i=0;i<n;i++){
        cout<<product[i]<<" ";
    }
    return 0;
}

*/

/*=================================================
        Time Comlexity : O(n^2)
        Space Complexity : O(1)
  =================================================*/
/*


/*
int main()
{
    int n;
    cout<<"Enter the size of array : "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int prefixProduct[n];
    int suffixProduct[n];
    int product[n];

    prefixProduct[0]=1;
    for(int i=1;i<n;i++){
        prefixProduct[i]=arr[i-1]*prefixProduct[i-1];
    }
    suffixProduct[n-1]=1;
    for(int i=n-2;i>=0;i--){
        suffixProduct[i]=arr[i+1]*suffixProduct[i+1];
    }

    for(int i=0;i<n;i++){
        product[i]=prefixProduct[i]*suffixProduct[i];
    }
    for(int i=0;i<n;i++){
        cout<<product[i]<<" ";
    }
    return 0;
}
*/

/*
int main()
{
    int n;
    cout<<"Enter the size of array : "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int temp[n];
    int k=0;
    for(int i=0;i<n;i++){
        temp[i]=0;
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            temp[k]=arr[i];
            k++;
        }
    }

    for(int i=0;i<n;i++){
        cout<<temp[i]<<" ";
    }

    return 0;
}

*/

/*
int main()
{
    int n;
    cout<<"Enter the size of array : "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            arr[k]=arr[i];
            k++;
        }
    }
    while(k<n){
        arr[k]=0;
        k++;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

*/

/*
int main()
{
    int n;
    cout<<"Enter the size of array : "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[k]);
            k++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}


*/

int main()
{
    int n;
    cout << "Enter the size of array : " << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            if (i != k)
            {
                arr[k] = arr[i];
                arr[i] = 0;
            }
            k++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
