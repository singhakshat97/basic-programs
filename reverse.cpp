int main(){
    int n;
    cin >> n;
    int arr_i;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
     int end=n-1;
     arr_i=0;
    int temp;
   while(arr_i<end)
    {
        temp=arr[arr_i];
        arr[arr_i]=arr[end];
        arr[end]=temp;
        arr_i++;
        end--;
    }
    
    for(int arr_i=0 ;arr_i < n; arr_i++)
    {
        cout<<arr[arr_i]<<"\t";
    }
    return 0;
}
