import java.util.Scanner;
import java.util.Stack;

/**
 * @author Sushil
 * @Description This program computes factorial of big numbers using stack to store bits 
 */
public class stackFact {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		/*
		 * Defining three different stacks
		 */
		Stack<Integer> result=new Stack<Integer>();		
		Stack<Integer> auxilary_result = new Stack<Integer>();
		Stack<Integer> temp = new Stack<Integer>();
		int n,i;
		int carry = 0;
		Scanner sc=new Scanner(System.in);
		n=sc.nextInt();
		result.push(1);		//Initializing the result stack with 1
		for(i=2;i<=n;i++)	//Running loop from 2 to n
		{
			while(!result.isEmpty())	//Loop until result stack becomes empty
			{
				int prod=(i*result.pop())+carry;		//Calculate product using top element of result and carry 
				auxilary_result.push(prod%10);			//push back the most significant bit of product back into the array
				carry=prod/10;							//treat rest as carry
			}
			//When result stack has been processed successfully it is now time to push back the carry into the stack 	
			while(carry>0) {							
				auxilary_result.push(carry%10);			//pushing carry into the stack bit by bit
				carry/=10;
			}
			while(!auxilary_result.isEmpty())			//transfer auxilary_result to result stack
				result.push(auxilary_result.pop());		
		}
		while(!result.isEmpty())						//Since result stack has our required answer but it is in reverse direction so we will reverse and store it in some other stack
			temp.push(result.pop());
		while(!temp.isEmpty())							//Print the final result
			System.out.print(temp.pop());
		System.out.println();
		sc.close();	
	}
}
