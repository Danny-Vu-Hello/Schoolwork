import java.util.HashSet;
import java.util.Set;

public class StudentSolver 
{
	public static HashSet<Integer> solve(boolean[][] m, int k1x, int k2x)
	{
		
		HashSet<Integer> hs = new HashSet<Integer>();
		Set<Integer> s = new HashSet<Integer>();
		int nextcol = 1;
		int len = m.length;
		
		/**
		for(int i = 0; i < len-1; i++)
		{
			for(int j = nextcol; j < len; j++)
			{
				if(m[i][j]==true)
				{
					s.add(i);
					s.add(j);
				}
			}
			nextcol++;
		}
		*/
		hs.addAll(s);
		
		return hs;
	}
	
	public static void main(String[] args)
	{
		boolean[][] m = {{false,false,true,true,true},{false, true, true, true, true},{true, true, false, true, true}, {true, true, true, false, false}, {true, true, true, false , false}};
		System.out.println(solve(m, 2, 1));
	}

}
