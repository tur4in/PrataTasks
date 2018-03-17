#pragma once
class CGolf
{
	enum { Len = 40 };
	char fullname[Len];
	int handicap;
public:
	CGolf(const char* name, int hc);
	CGolf(int hc);
	~CGolf();
	void setHandicap(int hc) { handicap = hc; };
	void showgolf();

};

