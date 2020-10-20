//Binary Search
import java.util.Scanner;
import java.util.Arrays;

public class Main
{ public static void main(String[] args)
  { Scanner sc= new Scanner(System.in);
    int numberOfElements= sc.nextInt();
    int[] arr= new int[numberOfElements];
    
    for(int i=0;i<arrlength;i++)
    arr[i]= sc.nextInt();
    
    int searchedElement= sc.nextInt();
    binarySearch(arr,searchedElement);
  }
  
  private static void binarySearch(int[] arr,searchedElement)
   { Arrrays.sort(arr); 
      for(int i=0;i<arr.length;i++)
       {  int lowestNum=0;
          int highestNum=arr.length-1;
          while(lowestNum<=highestNum)
            {int midNum=(lowestNum+highestNum)/2;
             if(searchedElement>arr[midNum])
              lowestNum=midNum+1;
             else if(searchedElement>arr[midNum])
              highestNum=midNum-1;
              else
               {System.out.println("Number is found");
               return;
               }
             }
         }
         System.out.println("Number isn't found");
}
} 
