// Online Java Compiler
// Use this editor to write, compile and run your Java code online
import java.util.Scanner;
class Arrayoperation
{
    void sorting(int[] arr)
    {
        boolean unsorted = true;
        while(unsorted){
            unsorted = false;
            for(int i=1;i<arr.length;i++)
            {
                if(arr[i-1]>arr[i]){
                    int temp = arr[i];
                    arr[i] = arr[i-1];
                    arr[i-1] = temp;
                    unsorted = true;
                }
            }
        }
    }
    int searching(int[] arr , int target)
    {
        int strt = 0;
        int end = arr.length-1;
        while(strt<=end){
            int mid = (strt+end)/2;
            if(arr[mid]>target){
                end = mid-1;
            }else if(arr[mid]<target){
                strt = mid+1;
            }else{
                return mid;
            }
        }
        return -1;
    }
    public static void main(String[] args)
    {
        Arrayoperation a = new Arrayoperation();
        Scanner s = new Scanner(System.in);
        System.out.print("Enter the length of the 1-D Array : ");
        int len = s.nextInt();
        int[] arr = new int[len];
        for(int i=0;i<len;i++)
        {
            System.out.print("Enter the " + (i+1) + "th element of the array : ");
            arr[i]=s.nextInt();
        }
        a.sorting(arr);
        System.out.println("The Array has been sorted");
        System.out.print("Enter the number to be searched : ");
        int target = s.nextInt();
        System.out.println(a.searching(arr,target));
    }
}
