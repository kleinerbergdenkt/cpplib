
//union-find
class uni(val n:Int)
{
	private var par=new Array[Int](n);for(i<-0 until n)par(i)=i
	private var siz=Array.fill(n)(1)
	def merge(x:Int,y:Int):Unit=
	{
		var rx=root(x)
		var ry=root(y)
		if(rx==ry)return
		if(siz(rx)<siz(ry))
		{
			val tmp=rx
			rx=ry
			ry=tmp
		}
		siz(rx)+=siz(ry)
		par(ry)=rx
	}
	def root(x:Int):Int=
		if(par(x)==x)x else
		{
			par(x)=root(par(x))
			par(x)
		}
	def same(x:Int,y:Int):Boolean=root(x)==root(y)
	def size(x:Int):Int=siz(root(x))
}