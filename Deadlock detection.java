/*
 * @author Sushil
 * @description : This program detects deadlock in given set of dependencies or else prints the correct sequence of excecution
 */
import java.util.ArrayList;
import java.util.Scanner;
import java.util.stream.Collectors;
import java.util.List;
import java.util.LinkedList;

public class task {

	private final int V;
	private final List<List<Integer>> adj;  //A 2D list to store graph

	public task(int V) 
	{ 
		this.V = V; 
		adj = new ArrayList<>(V); 

		for (int i = 0; i < V; i++) 
			adj.add(new LinkedList<>()); 
	} 

	// This function is a variation of DFSUytil() in 
	// https://www.geeksforgeeks.org/archives/18212 
	private boolean isCyclicUtil(int i, boolean[] visited, 
			boolean[] recStack) 
	{ 

		// Mark the current node as visited and 
		// part of recursion stack 
		if (recStack[i]) 
			return true; 

		if (visited[i]) 
			return false; 

		visited[i] = true; 

		recStack[i] = true; 
		List<Integer> children = adj.get(i); 

		for (Integer c: children) 
			if (isCyclicUtil(c, visited, recStack)) 
				return true; 

		recStack[i] = false; 

		return false; 
	} 

	private void addEdge(int source, int dest) { 
		adj.get(source).add(dest); 
	} 

	// Returns true if the graph contains a 
	// cycle, else false. 
	// This function is a variation of DFS() in 
	// https://www.geeksforgeeks.org/archives/18212 
	private boolean isCyclic() 
	{ 

		// Mark all the vertices as not visited and 
		// not part of recursion stack 
		boolean[] visited = new boolean[V]; 
		boolean[] recStack = new boolean[V]; 


		// Call the recursive helper function to 
		// detect cycle in different DFS trees 
		for (int i = 0; i < V; i++) 
			if (isCyclicUtil(i, visited, recStack)) 
				return true; 

		return false; 
	} 

	public static void main(String[] args) {
		int D;
		int n,i=0,temp1,temp2;
		Scanner sc=new Scanner(System.in);
		n=sc.nextInt();
		D=sc.nextInt();
		ArrayList<Integer> x=new ArrayList<Integer>();
		ArrayList<Integer> y=new ArrayList<Integer>();
		ArrayList<Integer> result=new ArrayList<Integer>();
		task g=new task(n+1);
		while(i++<D)			//Loop for taking inputs in the array
		{
			temp1=sc.nextInt();
			temp2=sc.nextInt();
			if(temp1>n || temp2>D)		//if edge number is not valid
			{
				System.err.println("Invalid input");
				System.exit(0);
			}
			g.addEdge(temp1,temp2);			//Add edges into the graph
			x.add(temp1);
			y.add(temp2);

		}
		if(g.isCyclic()) 					//If graph is cyclic
			System.out.println("-1"); 
		else
		{
			for(i=0;i<x.size();i++)				//Find what edges to we can start with
			{
				if(!y.contains(x.get(i)))
					result.add(x.get(i));
			}
			result.sort(null);					//Sort the edges
			List<Integer> deduped = result.stream().distinct().collect(Collectors.toList());		//Remove repeated elements
			for(i=0;i<deduped.size();i++)															//print the elements in distinct array	
				System.out.print(deduped.get(i)+" ");
			System.out.println();
		}
		sc.close();
	}

}
