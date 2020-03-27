import java.io.*;
import java.util.*;
class ArrayProduct{

	public static List<List<Integer> > fact_Comb(long n)
	{
		List<List<Integer> > r_l =new ArrayList<List<Integer> >();
		List<Integer> lst = new ArrayList<Integer>();
		fLF(2, 1, n, r_l, lst);
		return r_l;
	}
	public static void fLF(int frst,int e_prod, long n,List<List<Integer> > r_l, List<Integer> s_r_l)
	{
		if (frst > n || e_prod > n)
			return;
		if (e_prod == n) {
			ArrayList<Integer> t =new ArrayList<Integer>(s_r_l);
			r_l.add(t);
			return;
		}
		for (int i = frst; i < n; i++) {
			if (i * e_prod > n)
				break;
			if (n % i == 0) {
				s_r_l.add(i);
				fLF(i, i * e_prod, n,
				r_l, s_r_l);
				s_r_l.remove(s_r_l.size() - 1);
			}
		}
	}
	public static void main(String[] args)
	{
	    Scanner sc= new Scanner(System.in);
	    int n= sc.nextInt();
	    int k= sc.nextInt();
	    long prod=1,temp,count=0;
	    
		for(int m=0;m<n;m++)
		{
		    temp=sc.nextInt();
		    prod=prod*temp;
		}
		List<List<Integer> > resultant = fact_Comb(prod);
		for (List<Integer> i : resultant) {
				if(i.size()<=k)
			     	++count;
		}
		System.out.println(count+1);
	}
}
