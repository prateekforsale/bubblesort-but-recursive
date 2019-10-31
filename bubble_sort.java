import java.util.Scanner;

public class Main{
	static void bubble_sort(int arr[], int n){
		if(n == 1){
			return;
		}
		
		for(int i = 0; i < n - 1; i++){
			if(arr[i] > arr[i+1]){
				int temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
			}
		}
	bubble_sort(arr, n-1);
	}
	
	public static void main(String[] args){
		int m;
		System.out.println("Enter the dimensions of the array");
		Scanner myObj = new Scanner(System.in);
		m = myObj.nextInt();
		int arr[] = new int[m];
		System.out.println("Enter all the elements:");
		
		for(int i = 0; i < m; i++){
			arr[i] = myObj.nextInt();
		}
		bubble_sort(arr, arr.length);
		for(int i = 0; i < m; i ++){
		        System.out.println(arr[i]);
		    
		}
	}
}