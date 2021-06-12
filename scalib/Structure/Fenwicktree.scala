class FwLong(val n:Long=0L)
{
	private var fw=new Array[Long]((n+1).toInt)
	def sum(i:Long):Long=
	{
		var j=i
		var ans=0L
		while(j>0)
		{
			ans+=fw(j.toInt)
			j-=j&(-j)
		}
		ans
	}
	def add(i:Long,a:Long):Unit=
	{
		var j=i
		if(j==0)return
		else while(j<=n)
		{
			fw(j.toInt)+=a
			j+=j&(-j)
		}
	}
	def l_b(k:Long):Long=
	{
		var l=k
		if(l<=0)return 0L
		var ret=0L
		var i=1L
		while((i<<1)<=n)i<<=1
		while(i!=0)
		{
			if(ret+i<=n&&fw((ret+i).toInt)<l)
			{
				l-=fw((ret+i).toInt)
				ret+=i
			}
			i>>=1
		}
		ret+1
	}
}