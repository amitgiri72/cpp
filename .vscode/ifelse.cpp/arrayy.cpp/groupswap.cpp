{
        // code here
        
        
        int start= 0;
        int pp = arr.size();

        for (int i = 0; i <k; i++)
        {
            swap(arr[start], arr[k]);

            start ++;
                        k--;
        }
        for (int i = start; i<n; i++)
        {
            swap(arr[start+1], arr[pp]);
            start++;
            pp--;
        }
    }