
//hmap
struct hmap
{
	vector<vector<pair<string,int>>>l_;
	vector<bool>isuse;
	hmap(){isuse.assign(10000,0);l_.resize(10000,vector<pair<string,int>>(1));}
	int gethash(string key){int r=0;for(int i=0;i<key.length();i++)r+=key[i];return r%10000;}
	void put(string key,int val)
	{
		int id=gethash(key);
		if(!isuse[id])l_[id][0]=make_pair(key,val),isuse[id]=1;
		else
		{
			auto&ar=l_[id];
			for(int i=0;i<ar.size();i++)
			{
				auto pr=ar[i];
				if(pr.first==key){ar.erase(ar.begin()+i);break;}
			}
			ar.push_back(make_pair(key,val));
		}
	}
	int get(string key)
	{
		int id=gethash(key);
		if(!isuse[id])return -1;
		else
		{
			auto&ar=l_[id];
			for(int i=0;i<ar.size();i++)
			{
				auto pr=ar[i];
				if(pr.first==key)return pr.second;
			}
			return -1;
		}
	}
	void rm(string key)
	{
		int id=gethash(key);
		if(!isuse[id])return;
		auto&ar=l_[id];
		for(int i=0;i<ar.size();i++)
		{
			auto pr=ar[i];
			if(pr.first==key){ar.erase(ar.begin()+i);break;}
		}
	}
	bool use(string key){return isuse[gethash(key)]?1:0;}
};
