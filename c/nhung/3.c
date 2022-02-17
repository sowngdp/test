void bi(int n) 
{ 
    // check số âm hay số dương, âm dương xử lí khác nhau
        int check = 0;
        if(n>=0) check = 1;
        else n = -n;
    // chuyển đổi sang nhị phân, cách chuyển nhị phân là chia cho 2 rồi lấy phần dư viết ngược lại  
        long long arr[33]={}; 
        long long i = 0; 
        while (n > 0) { 
            arr[31-i] = n % 2; 
            n = n / 2; 
            i++; 
        }  
    //nếu là số âm thì xử lí như ri
        if(check==0){
            for(int i= 0; i<32; i++){
                if(arr[i]!=0) arr[i]=0;
                else arr[i]=1;
            }
            int j=31;
            while(j>=0){
                if(arr[j]==0){
                    arr[j] =1;
                    break;
                }
                arr[j]==1;
                j--;
            }
        }
    // in ra sao cho cách 4 số sẽ có 1 dấu cách
        int t = 1;
        for (long long j = 0; j <32; j++){
            
            if(t%4!=0) printf("%lld",arr[j]) ;
            else printf("%lld ",arr[j]) ;
            t++; 
        }
}
