import java.util.Arrays;

class A
{
	static void lexi(int k,String s)
	{
		int n = s.length()-k;
		String[] arr= new String[n+1];
		
		for(int i=0;i<n+1;i++)
		{
			arr[i]=s.substring(i,k+i);
			//System.out.println(arr[i]);
		}
	
		Arrays.sort(arr);
		
		for(int i=0;i<n+1;i++)
		{
			System.out.println(arr[i]);
		}
		
	}
	
	public static void main(String args[])
	{
		try
		{
			int k=3;
			String s = "dcbaABC";
			
			lexi(k,s);
		}
		catch(Exception e)
		{
			System.out.println(e);
		}
	}
}
