import java.util.Scanner;
import java.util.Vector;

public class A490 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		int n = input.nextInt();
		Vector<Integer> pro = new Vector<Integer>();
		Vector<Integer> math = new Vector<Integer>(); 
		Vector<Integer> pe = new Vector<Integer>();
		for ( int i = 0; i < n; i++ ) {
			int value = input.nextInt(); 
			if ( value == 1 ) pro.add(i+1);
			if ( value == 2 ) math.add(i+1); 
			if ( value == 3 ) pe.add(i+1);
		}
		
		int team = Math.min(pro.size(), math.size()); 
		team = Math.min(team, (int)pe.size()); 
		
		System.out.println(team);
		for ( int i = 0; i < team; i++ ) 
			System.out.println(pro.get(i) + " " + math.get(i) + " " + pe.get(i));
	}

}
