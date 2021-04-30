
//hmap
struct hmap
{
	vector<vector<pair<string,int>>>l_;
	hmap(){l_.resize(10000,vector<pair<string,int>>(0));}
	int gethash(string key){int r=0;for(int i=0;i<key.length();i++)r+=key[i];return r%10000*17%10000;}
	void put(string key,int val)
	{
		int id=gethash(key);
		if(l_[id].empty())l_[id].push_back(make_pair(key,val));
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
		if(l_[id].empty())return -1;
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
		if(l_[id].empty())return;
		auto&ar=l_[id];
		for(int i=0;i<ar.size();i++)
		{
			auto pr=ar[i];
			if(pr.first==key){ar.erase(ar.begin()+i);break;}
		}
	}
};