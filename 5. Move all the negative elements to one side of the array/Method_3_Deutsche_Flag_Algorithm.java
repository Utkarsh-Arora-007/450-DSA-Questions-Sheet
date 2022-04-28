public class Gfg{
    public static void swap(int[] ar, int i, int j)
    {
        int t=ar[i];
        ar[i]=ar[j];
        ar[j]=t;
    }


    public static void move(int[] ar)
    {
        int low=0;
        int high=ar.length - 1;
        while(low<=high){
            if(ar[low]<=0)
            low++;
            else
             swap(ar,low,high--);
        }
    } 

    //Driver Code

    public static void main(String[] args)
    {
        int[] ar={ 1,2,-4,-5,2,-7,3,2,-6,-8,-9,3,2,1};
        move(ar);
        for(int e : ar)
          System.out.print(e+ " ");
        
    }
}