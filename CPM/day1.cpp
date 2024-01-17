/// leaders problem
// next greater
// product of element 

#include <iostream>
#include <stack>
using namespace std;

// int main()
// {
//     int n;
//     int arr[n];
//     cout<<"Enter the size of array : ";
//     cin>>n;
//     cout<<"Enter the elements ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int max=arr[n-1];
//     cout<<max<<" ";
//     for(int i=n-2;i>=0;i--){
//         if(arr[i]>max){
//             cout<<arr[i]<<" ";
//             max=arr[i];
//         }
//     }
//     return 0;
// }


// int main()
// {
//     int n;
//     int arr[n];
//     stack<int>st;
//     cout<<"Enter the size of array : ";
//     cin>>n;
//     cout<<"Enter the elements ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     st.push(arr[0]);
//     for(int i=1;i<n-1;i++){
//         if(st.empty()){
//             st.push(arr[i]);
//             continue;
//         }
//         while(st.empty()==false && st.pop()<arr[i] ){
//             cout<<st.pop()<<" "<<arr[i]<<endl;
//             st.pop();
//         }
//         st.push(arr[i]);
        
//         while(st.empty()==false){
//             cout<<st.pop()<<" "<<-1<<endl;
//         }
       
//     }
   
//     return 0;
// }



int main()
{
    int n;
    int arr[n];
    cout<<"Enter the size of array : ";
    cin>>n;
    cout<<"Enter the elements ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
   
    return 0;
}

