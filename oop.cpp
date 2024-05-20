#include<bits/stdc++.h>
#define ll long long
using namespace std;
class PhanSo{
	private:
		ll tu,mau;
	public:
		PhanSo(ll tu, ll mau);
		friend istream& operator >> (istream& in,PhanSo &a);
		friend ostream& operator << (ostream& out,PhanSo a);
		void rutgon();
		PhanSo operator + (PhanSo a);
};
PhanSo::PhanSo(ll tu, ll mau){
	this->tu=tu;
	this->mau=mau;
}
void PhanSo::rutgon(){
	ll g=__gcd(tu,mau);
	tu/=g;
	mau/=g;
}
istream& operator >> (istream& in,PhanSo &a){
	cin>>a.tu>>a.mau;
	return in;
}
ostream& operator << (ostream& out,PhanSo a){
	cout<<a.tu<<"/"<<a.mau;
	return out;
}
PhanSo PhanSo::operator + (PhanSo a){
	PhanSo tong(1,1);
	tong.tu=a.tu*mau+tu*a.mau;
	tong.mau=a.mau*mau;
	tong.rutgon();
	return tong;
}
int main(){
	PhanSo p(1,1),q(1,1);
	cin>>p>>q;
	cout<<p+q;
}

