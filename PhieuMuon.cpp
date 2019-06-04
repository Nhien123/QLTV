#include "PhieuMuon.h"


void PhieuMuon::xuat()
{
	cout << "***********************************************\n";
	cout << "<So phieu muon>:    " << this->nMaPM << endl;
	cout << "<Ma sach>:          " << this->xSach.getMS() << endl;
	cout << "<Ma ban doc>:       " << this->xBanDoc.getMBD() << endl;
	cout << "<Ngay muon>:        "; this->xNgayMuon.xuat(); cout << endl;
	cout << "<Ngay tra>:         "; this->xNgayTra.xuat(); cout << endl;
	cout << "<Tinh trang>:       " << this->nTrangThai << endl;
}
int PhieuMuon::getTPM()
{
	return this->nTongPM;
}
BanDoc PhieuMuon::getBanDoc()
{
	return this->xBanDoc.getMBD();
}
Sach PhieuMuon::getSach()
{
	return this->xSach.getMS();
}
Date PhieuMuon::getNgayMuon()
{
	return this->xNgayMuon;
}
Date PhieuMuon::getNgayTra()
{
	return this->xNgayTra;
}
int PhieuMuon::getMaPM()
{
	return this->nMaPM;
}
int PhieuMuon::getTrangThai()
{
	return this->nTrangThai;
}
void PhieuMuon::setTrangThai(int a)
{
	this->nTrangThai = a;
}
void PhieuMuon::setSach(Sach s)
{
	this->xSach = s;
}
void PhieuMuon::setBanDoc(BanDoc xBD)
{
	this->xBanDoc = xBD;
}
