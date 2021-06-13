import java.io.BufferedOutputStream
import java.io.EOFException
import java.io.InputStream
import java.io.PrintStream
import java.lang
import java.lang.Math.negateExact
import java.lang.Math.toIntExact
import java.util
import scala.annotation.tailrec
import scala.collection.mutable

object Main
{
	def main(args:Array[String]):Unit=
	{
		val allin=io.Source.stdin.getLines().mkString("\n").split(" ")
		solve(/*args*/)
		System.out.flush()
	}
	def solve(/*args*/)=
	{
		
	}
	@tailrec
	def gcd(a:Long,b:Long):Long={if(a%b==0)b else gcd(b,a%b)}
	@tailrec
	def gcd(a:Int,b:Int):Int={if(a%b==0)b else gcd(b,a%b)}
	def lcm(a:Long,b:Long):Long={a/gcd(a,b)*b}
	def factorial(n:Long,m:Long):Long={var f=n;for(i<-1L to n-1L){f*=i;f%=m};f}
	def factorial(n:Int,m:Int):Int={var f=n;for(i<-1 to n-1){f*=i;f%=m};f}
	def dYes():Unit={println("Yes");sys.exit(0)}
	def dNo():Unit={println("No");sys.exit(0)}
	def drop(x:Any):Unit={println(x);sys.exit(0)}
	def cout(x:Any*):Unit=for(r<-x)println(r)
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
	//Fenwicktree(1-indexed)
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
}