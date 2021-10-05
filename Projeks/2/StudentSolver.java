import java.util.ArrayList;
import java.util.Collections;

public class StudentSolver 
{
	@SuppressWarnings("unchecked")
	public static ArrayList<ArrayList<Pair<Integer,Integer>>> solve(ArrayList<Pair<Integer,Integer>> list)
	{
		ArrayList<ArrayList<Pair<Integer,Integer>>> store = new ArrayList<ArrayList<Pair<Integer,Integer>>>();
		ArrayList<Pair<Integer,Integer>> insert1 = new ArrayList<Pair<Integer,Integer>>();
		ArrayList<Pair<Integer,Integer>> insert2 = new ArrayList<Pair<Integer,Integer>>();
		ArrayList<Pair<Integer,Integer>> value1 = new ArrayList<Pair<Integer,Integer>>();
		ArrayList<Pair<Integer,Integer>> value2 = new ArrayList<Pair<Integer,Integer>>();
		
		insert1.addAll(list);
		for(int i = 0; i < list.size(); i++)
		{
			value1.add(new Pair<Integer, Integer>((insert1.get(i).first * 2 + insert1.get(i).second * 1),i));
		}
		Collections.sort(value1);
		for(int i = 0; i < insert1.size(); i++)
		{
			insert1.set(i, list.get(value1.get(i).second));
			System.out.print(insert1.get(i).toString()+" ");
		}
		System.out.println();
		store.add(insert1);
		
		insert2.addAll(list);
		for(int i = 0; i < list.size(); i++)
		{
			value2.add(new Pair<Integer, Integer>((insert2.get(i).first * 1 + insert2.get(i).second * 2),i));
		}
		Collections.sort(value2);
		for(int i = 0; i < insert2.size(); i++)
		{
			insert2.set(i, list.get(value2.get(i).second));
			System.out.print(insert2.get(i).toString()+" ");
		}
		System.out.println();
		store.add(insert2);
		
		return store;
	}
	
	public static ArrayList<Pair<Integer,Integer>> testcases(int i)
	{
		Pair<Integer, Integer> p1 = null;
		Pair<Integer, Integer> p2 = null;
		Pair<Integer, Integer> p3 = null;
		Pair<Integer, Integer> p4 = null;
		Pair<Integer, Integer> p5 = null;
		if (i == 1)
		{
			p1 = new Pair<Integer, Integer>(1,1); 
			p2 = new Pair<Integer, Integer>(5,3); 
			p3 = new Pair<Integer, Integer>(1,2); 
			p4 = new Pair<Integer, Integer>(3,5); 
			p5 = new Pair<Integer, Integer>(4,4);
		}
		if (i == 2)
		{
			p1 = new Pair<Integer, Integer>(4,1); 
			p2 = new Pair<Integer, Integer>(2,3); 
			p3 = new Pair<Integer, Integer>(3,2); 
			p4 = new Pair<Integer, Integer>(1,2); 
			p5 = new Pair<Integer, Integer>(4,3);
		}
		ArrayList<Pair<Integer,Integer>> list = new ArrayList<Pair<Integer,Integer>>();
		list.add(p1);
		list.add(p2);
		list.add(p3);
		list.add(p4);
		list.add(p5);
		return list;
	}
	
	/**
	 * Try making a = 2 and b = 1 and a = 1 and b = 2 to create the ordered lists
	 * do list.get(i).first * 2 + list.get(i).second * 1 and etc to "sort"
	 * should only be a max of "2" array lists
	 * 
	 * 
	 */
	

	public static void main(String[] args)
	{	
		ArrayList<Pair<Integer,Integer>> list = testcases(2);
		for(int i = 0; i < list.size(); i++)
		{
			System.out.print(list.get(i));
		}
		System.out.println();
		ArrayList<ArrayList<Pair<Integer,Integer>>> store = new ArrayList<ArrayList<Pair<Integer,Integer>>>();
		store = solve(list);
		for(int i = 0; i < list.size(); i++)
		{
			System.out.print(store.get(0).get(i));
		}
		System.out.println();
		for(int i = 0; i < list.size(); i++)
		{
			System.out.print(store.get(1).get(i));
		}
		System.out.println();
	}
	
}
