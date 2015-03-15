import java.util.Scanner;


public class Ants {
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		int n = 0;
		int length = 0, numAnts;
		int pos;
		int min = 0, max = 0;
		int left = 0, right = 0;

		n = sc.nextInt();
		
		while((n--) > 0) {
			length = sc.nextInt();
			numAnts = sc.nextInt();
			
			min = 0;
			max = 0;
			
			while((numAnts--) > 0) {
				pos = sc.nextInt();
			
				if(pos > length/2 && pos <= length) {		
					right = pos;
					left = length - pos;
				} else if(pos <= length){
					left = pos;
					right = length - pos;
				}
				
				if(left >= min)
					min = left;
				if(right >= max)
					max = right;
			}
			System.out.println(min + " " + max);
		}
		
		sc.close();
	}
}
