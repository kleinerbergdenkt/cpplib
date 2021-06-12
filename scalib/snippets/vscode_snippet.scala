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
		//val scanner=new FastScanner(System.in)
		val allin=io.Source.stdin.getLines().mkString("\n").split(" ")
		solve(/*args*/)
		System.out.flush()
	}
	def solve(/*args*/)=
	{
		
	}
	final class FastScanner(in:InputStream)
	{
		private val buf=Array.ofDim[Byte](4*1024)
		private var(a,b)=(0,0)
		@tailrec
		def nextByte():Byte=
		{
			if(a<b)
			{
				val b=buf(a)
				a+=1
				b
			}
			else
			{
				b=in.read(buf)
				if(b<0){throw new EOFException()}else{a=0;nextByte()}
			}
		}
		@tailrec
		def hasNext:Boolean=
		{
			if(a<b)true
			else if(b<0)true
			else
			{
				b=in.read(buf)
				a=0
				hasNext
			}
		}
		@tailrec
		def nextLong(negate:Boolean=false):Long=
		{
			var c=nextChar()
			if(c=='-'){nextLong(negate=true)}
			else if(!c.isDigit){nextLong()}
			else
			{
				var res=0L
				do
				{
					val res2=10*res+(c-'0')
					if(res2>=res)res=res2 else throw new ArithmeticException(s"long overflow")
					c=if(hasNext)nextChar()else'\u0000'
				}while(c.isDigit)
				if(!c.isDigit){a-=1}
				if(negate)negateExact(res)else res
			}
		}
		@tailrec
		def nextLine(sb:java.lang.StringBuilder=new java.lang.StringBuilder):String=
		{
			if(!hasNext)sb.toString()else
			{
				nextChar()match
				{
					case '\n'=>
						if(sb.length==0||sb.charAt(sb.length-1)!='\r')sb.toString()
						else sb.substring(0,sb.length-1)
					case c=>nextLine(sb.append(c))
				}
			}
		}
		def nextInt():Int=toIntExact(nextLong())
		def nextChar():Char=nextByte().toChar
		def nextToken(isDelimiter:Char=>Boolean=_.isWhitespace):String=
		{
			@tailrec
			def goToWordStart():Option[Char]=
			{
				if(!hasNext)None else
				{
					val c=nextChar()
					if(!isDelimiter(c))Some(c)else goToWordStart()
				}
			}
			goToWordStart().map
			{
				c=>
				if(!hasNext)c.toString else
				{
					val sb=new lang.StringBuilder()
					sb.append(c)
					@tailrec
					def processWord():Unit=
					{
						val c=nextChar()
						if(isDelimiter(c))
						{
							a-=1
						}
						else
						{
							sb.append(c)
							if(hasNext){processWord()}
						}
					}
					processWord()
					sb.toString
				}
			}.getOrElse("")
		}
	}
	@tailrec
	def gcd(a:Long,b:Long):Long={if(a%b==0)b else gcd(b,a%b)}
	@tailrec
	def gcd(a:Int,b:Int):Int={if(a%b==0)b else gcd(b,a%b)}
	def lcm(a:Long,b:Long):Long={a/gcd(a,b)*b}
	def factorial(n:Long,m:Long):Long={var f=n;for(i<-1L to n-1L){f*=i;f%=m};f}
	def factorial(n:Int,m:Int):Int={var f=n;for(i<-1 to n-1){f*=i;f%=m};f}
}