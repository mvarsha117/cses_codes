import java.io.*;
class csesRepeat
{
  public static void main(String[]args)throws IOException
{
  BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
  String s=br.readLine();
  int l=s.length();
  char ch=s.charAt(0);
  int i=1,cnt=1,max=1;
  while(i<l)
  {
     char ch1=s.charAt(i);
     if(ch==ch1)
     {
	cnt++;
	i++;
     }  
     else
     {
	if(cnt>max)
	{
	  max=cnt;
	}
	ch=ch1;
	cnt=1;
	i++;
     }
  }
  if(cnt>max)
  max=cnt;
  System.out.println(max);
}
}