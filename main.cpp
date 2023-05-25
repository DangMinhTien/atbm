#include <iostream>
#include <cstring>

using namespace std;

char P[26]= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

char* mahoa(char *s, char *k) {
    int l = strlen(s);
    char *tmp = new char[l];
    int *roso = new int[l];
    int x = strlen(k);
    int *makhoa = new int[x];
    int j = 0;
    while(j < l) {
        for(int i = 0; i < 26; i++) {
            if(P[i] == s[j]) {
                roso[j] = i;
            }
        }
        j++;
    }
    int t = 0;
    while(t < x) {
        for(int i = 0; i < 26; i++) {
            if(P[i] == k[t]) {
                makhoa[t] = i;
            }
        }
        t++;
    }
    int b = 0;
    for(int a = 0; a < l; a++) {
        if(b == x)
            b = 0;
        int maso = (roso[a] + makhoa[b]) % 26;
        tmp[a] = P[maso];
        b++;
    }
    return tmp;
}

void hienthi(char *s, int l) {
    for(int i = 0; i < l; i++)
        cout << s[i];
}

char* giaima(char *s, char *k) {
    int l = strlen(s);
    char *tmp = new char[l];
    int *roso = new int[l];
    int x = strlen(k);
    int *makhoa = new int[x];
    int j = 0;
    while(j < l) {
        for(int i = 0; i < 26; i++) {
            if(P[i] == s[j]) {
                roso[j] = i;
            }
        }
        j++;
    }
    int t = 0;
    while(t < x) {
        for(int i = 0; i < 26; i++) {
            if(P[i] == k[t]) {
                makhoa[t] = i;
            }
        }
        t++;
    }
    int b = 0;
    for(int a = 0; a < l; a++) {
        if(b == x)
            b = 0;
        int maso = (roso[a] + 26 - makhoa[b]) % 26;
        tmp[a] = P[maso];
        b++;
    }
    return tmp;
}

int main() {
    int ch;
    char s1[1000], k[1000];
    cout << "Luu y: Khong de khoang trong khi nhap xau ky tu" << endl;
    cout << "Nhap xau ki tu: ";
    cin.getline(s1, 1000);
    cout << "Nhap khoa k: ";
    cin.getline(k, 1000);
    int l = strlen(s1);
    char *s2, *s3;
    while(1) {
        cout << endl;
        cout << "MENU" << endl;
        cout << "[1].Ma hoa xau." << endl;
        cout << "[2].Giai ma xau." << endl;
        cout << "[3].Thoat." << endl;
        cout << "Moi ban chon: ";
        cin >> ch;
        switch(ch) {
            case 1: {
                s2 = mahoa(s1, k);
                cout << "Xau duoc ma hoa:\n";
                hienthi(s2, l);
                break;
            }
            case 2: {
                s3 = giaima(s2, k);
                cout << "Xau duoc giai ma:\n";
                hienthi(s3, l);
                break;
            }
            case 3:
                break;
        }
        if(ch == 3)
            break;
    }
    return 0;
}
