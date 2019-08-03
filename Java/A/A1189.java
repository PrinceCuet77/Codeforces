import java.util.Scanner;
import java.util.Vector;

public class A1189 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		int n = input.nextInt();
		char[] ch = input.next().toCharArray();
		int o = 0, z = 0; 
		for ( int i = 0; i < n; i++ ) {
			if ( ch[i] == '0' ) z++; 
			else o++;
		}
		
		if ( z != o ) {
			System.out.println(1);
			System.out.println(ch);
		} else {
			System.out.println(2);
			for ( int i = 0; i < n-1; i++ ) 
				System.out.print(ch[i]);
			System.out.println(" " + ch[n-1]);
		}
	}

}
