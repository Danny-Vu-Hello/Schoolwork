import java.util.ArrayList;
import java.util.Collections;
import java.math.BigInteger;
//import java.io.File;
//import java.io.FileWriter;
//import java.io.IOException;
//import java.io.FileReader;

public class StudentSolver 
{
	@SuppressWarnings("unchecked")
	public static ArrayList<ArrayList<Pair<Integer,Integer>>> solve(ArrayList<Pair<Integer,Integer>> list)
	{
		ArrayList<ArrayList<Pair<Integer,Integer>>> store = new ArrayList<ArrayList<Pair<Integer,Integer>>>();
		ArrayList<Pair<Integer,Integer>> insert1;
		ArrayList<Pair<Integer,Integer>> insert2;
		ArrayList<Pair<Integer,Integer>> values1;
		ArrayList<Pair<Integer,Integer>> values2;
		ArrayList<Integer> array1;
		ArrayList<Integer> array2;
		ArrayList<BigInteger> primes = new ArrayList<BigInteger>();
		BigInteger prime = new BigInteger("2");
		primes.add(prime);
		//500 6/10
		//200 10/10
		for(int i = 0; i < 200; i++)
		{
			prime = prime.nextProbablePrime();
			primes.add(prime);
		}
		
		
		//int[] primes = new int[5];
		//primes = primes(list.size()*100);
		
		/**
		File file = new File("Primes");
		if(file.exists()==false)
		{
			FileWriter fw = new FileWriter(file);
			fw.close();
		}
		*/
		for(int k = 0; k<primes.size();k++)
		{
			for(int j = 0; j<primes.size();j++)
			{
				values1 = new ArrayList<Pair<Integer,Integer>>();
				values2 = new ArrayList<Pair<Integer,Integer>>();
				insert1 = new ArrayList<Pair<Integer,Integer>>();
				insert2 = new ArrayList<Pair<Integer,Integer>>();
				array1 = new ArrayList<Integer>();
				array2 = new ArrayList<Integer>();
				if(j==k)
				{
					j++;
				}
				if(j==primes.size()&&k==primes.size()-1)
				{
					break;
				}
				for(int i = 0; i<list.size();i++)
				{
					values1.add(new Pair<Integer,Integer>((list.get(i).first*primes.get(k).intValueExact()+list.get(i).second*primes.get(j).intValueExact()),i));
					values2.add(new Pair<Integer,Integer>((list.get(i).first*primes.get(j).intValueExact()+list.get(i).second*primes.get(k).intValueExact()),i));
				}
				Collections.sort(values1);
				Collections.sort(values2);
				for(int i = 0; i < list.size();i++)
				{
					insert1.add(list.get(values1.get(i).second));
					insert2.add(list.get(values2.get(i).second));
					array1.add(values1.get(i).first);
					array2.add(values2.get(i).first);
				}
				boolean check1 = true;
				boolean check2 = true;
				for(int i = 0; i < list.size();i++)
				{
					if (array1.lastIndexOf(array1.get(i)) != i)
					{
						check1 = false;
					}
					if (array2.lastIndexOf(array2.get(i)) != i)
					{
						check2 = false;
					}
					if (!check1&&!check2)
					{
						break;
					}
				}
				if (store.indexOf(insert1)==-1 && check1)
				{
					store.add(insert1);
				}
				if (store.indexOf(insert2)==-1 && check2)
				{
					store.add(insert2);
				}
			}
		}
		
		return store;
	}
	
	public static int[] primes(int n)
	{
		int[] primes = new int[5];
		int increm = 0;
		for(int i = n; i > 0; i--)
		{
			for(int j = n; j > 0; j--)
			{
				if((i % j == 0 || (i == 2 && j == 2))&&(j!=1||(i==1 && j==1)))
				{
					if (i%2==0 && i!=2)
					{
						break;
					}
					primes[increm++] = i;
				}
				if(increm==5)
				{
					break;
				}
			}
		}
		return primes;
	}
	
	public static Pair<Integer,Integer> reversePair(Pair<Integer,Integer> p)
	{
		return new Pair<Integer, Integer>(p.second, p.first);
	}
	
	public static ArrayList<Pair<Integer,Integer>> testcases(int i)
	{
		Pair<Integer, Integer> p1 = null;
		Pair<Integer, Integer> p2 = null;
		Pair<Integer, Integer> p3 = null;
		Pair<Integer, Integer> p4 = null;
		Pair<Integer, Integer> p5 = null;
		if (i == 0)
		{
			p1 = new Pair<Integer, Integer>(1,2); 
			p2 = new Pair<Integer, Integer>(2,1); 
			p3 = new Pair<Integer, Integer>(2,4); 
			p4 = new Pair<Integer, Integer>(4,2); 
		}
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
		if (i == 3)
		{
			//works with 1 result
			p1 = new Pair<Integer, Integer>(5,3); 
			p2 = new Pair<Integer, Integer>(5,4); 
			p3 = new Pair<Integer, Integer>(2,2); 
			p4 = new Pair<Integer, Integer>(5,1); 
			p5 = new Pair<Integer, Integer>(1,1);
		}
		if (i == 4)
		{
			//failed with 2 results
			//[(5, 3), (1, 2), (1, 1), (3, 2), (2, 4)]
			p1 = new Pair<Integer, Integer>(5,3); 
			p2 = new Pair<Integer, Integer>(1,2); 
			p3 = new Pair<Integer, Integer>(1,1); 
			p4 = new Pair<Integer, Integer>(3,2); 
			p5 = new Pair<Integer, Integer>(2,4);
		}
		if (i == 5)
		{
			/**
			 * passed test 1
			 * [(5, 2), (3, 2), (4, 3), (3, 1), (5, 3)]
				(3, 1) (3, 2) (4, 3) (5, 2) (5, 3) 
				196609 196610 262147 327682 327683 
				(3, 1) (3, 2) (5, 2) (4, 3) (5, 3) 
				196609 196610 327682 262147 327683 
			 */
			p1 = new Pair<Integer, Integer>(5,2); 
			p2 = new Pair<Integer, Integer>(3,2); 
			p3 = new Pair<Integer, Integer>(4,3); 
			p4 = new Pair<Integer, Integer>(3,1); 
			p5 = new Pair<Integer, Integer>(5,3);
		}
		if (i == 6)
		{
			//failed
			//[(5, 2), (3, 3), (3, 1), (1, 5), (5, 5)]
			p1 = new Pair<Integer, Integer>(5,2); 
			p2 = new Pair<Integer, Integer>(3,3); 
			p3 = new Pair<Integer, Integer>(3,1); 
			p4 = new Pair<Integer, Integer>(1,5); 
			p5 = new Pair<Integer, Integer>(5,5);
		}
		if (i == 7)
		{
			//[(2, 3), (4, 4), (5, 2), (3, 4), (2, 1)
			p1 = new Pair<Integer, Integer>(2,3); 
			p2 = new Pair<Integer, Integer>(4,4); 
			p3 = new Pair<Integer, Integer>(5,2); 
			p4 = new Pair<Integer, Integer>(3,4); 
			p5 = new Pair<Integer, Integer>(2,1);
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
	 * seems inconsistent
	 * 
	 */
	

	public static void main(String[] args)
	{	
		ArrayList<Pair<Integer,Integer>> list = testcases(6);
		for(int i = 0; i < list.size(); i++)
		{
			System.out.print(list.get(i));
		}
		System.out.println();
		ArrayList<ArrayList<Pair<Integer,Integer>>> store = new ArrayList<ArrayList<Pair<Integer,Integer>>>();
		store = solve(list);
		for(int i = 0; i < store.size(); i++)
		{
			for(int j = 0; j < list.size();j++)
			{
				System.out.print(store.get(i).get(j));
			}
			System.out.println(" "+i);
		}
		System.out.println();
	}
	
}
