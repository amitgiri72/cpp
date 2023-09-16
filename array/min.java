import java.util.*;
public  class min{
    public static void main(String[] args) {
        int arr[] = {3,2,5,4,3,10};
        int min  = Integer.MAX_VALUE;
        int max= Integer.MIN_VALUE;
        for(int i=0;i<arr.length;i++){
            if(min >arr[i]){
                min =arr[i];
            }
        }

        for(int i=0;i<arr.length;i++){
            if(max <arr[i]){
              max=arr[i];
            }
        }
        System.out.println(min +"     "+max);
    }
}