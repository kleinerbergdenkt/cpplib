#define bitfor(bit,n) for(int bit=0;bit<1<<n;bit++)
#define bitif(bit,a) if(bit&1<<a)
int bitsum(int bit){int r=0;for(int i=1;i<=bit;i<<=1)if(i&bit)r++;return r;}