#include <iostream>
using namespace std;

class airship
{
    protected:
        int soLuongMax;
        int trongLuongMax;
    public:
        void nhap0(){
            cout <<"so luong toi da: "; cin >> soLuongMax;
            cout <<"trong luong toi da: "; cin >> trongLuongMax;
        }
        virtual void xuat(){}
};

class airplane:public airship
{
    private:
        string kieuDongCo;
    public:
        void nhap(){
            nhap0();
            cout <<"Kieu dong co: "; cin >> kieuDongCo;
        }
        void xuat(){
            cout <<soLuongMax<<" "<<trongLuongMax<<" "<<kieuDongCo<<endl;
        }
};

class ballon:public airship
{
    private:
        string nhienLieu;
    public:
        void nhap(){
            nhap0();
            cout <<"Nhien lieu su dung: "; cin >> nhienLieu;
        }
        void xuat(){
            cout <<soLuongMax<<" "<<trongLuongMax<<" "<<nhienLieu<<endl;
        }
};

int main(){
    airship* arr[10];
    int n, lc;
    cout <<"Nhap so airship: "; cin >> n;
    for(int i = 0; i < n; i++){
        cout <<"Nhap loai airship 0-airplane; 1-ballon: "; cin >> lc;
        if (!lc){
            airplane* p = new airplane;
            p->nhap();
            arr[i] = p;
        }
        else{
            ballon* p = new ballon;
            p->nhap();
            arr[i] = p;
        }
    }
    for (int i = 0; i < n; i++){
        arr[i]->xuat();
    }
}