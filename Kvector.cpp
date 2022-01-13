#include<iostream>
#include<ostream>

#define N 3

using namespace std;

class Kvector{
protected:
    int *m;
    int len;
public:
    Kvector(int size = 0,int value = 0);
    Kvector(const Kvector&v );
    ~Kvector();
    void print();
    void clear() { delete[] m; m = NULL; len = 0; }
    int size() { return len; }
    Kvector& operator = (Kvector& v);
    friend bool operator==(Kvector& v, Kvector& c);
    friend bool operator!=(Kvector& v, Kvector& c);
    int& operator [] (int idx) { return m[idx]; }
    const int& operator [] (int idx) const { return m[idx]; }
    friend ostream& operator<<(ostream& os, Kvector& v);
};

Kvector::Kvector(int size,int value) : len(size) {
    cout << this << " : Kvector(" << size << "," << value << ")\n";
    if(!size) { m = NULL; return; }
    m = new int[size];
    for (int i = 0; i < size; i++) m[i] = value;
}

Kvector::Kvector(const Kvector&v) {
    cout << this << " : Kvector(* " << &v << ")\n";
    len = v.len;
    if(!len){ m = NULL; return; }
    m = new int [len];
    for(int i = 0; i < len; i++) m[i] = v.m[i];
}

Kvector::~Kvector(){
    cout << this << " : ~Kvector() \n";
    delete[] m;
}

void Kvector::print(){
    for(int i = 0; i < len; i++){
        cout << m[i] << " ";
    }
    cout << endl;
}

bool operator==(Kvector& v, Kvector& c) {
    if(v.len == c.len){
        for(int i = 0; i < v.len; i++){
            if(v.m[i] != c.m[i]) return false;
        }
        return true;
    }
    else return false;
}

bool operator!=(Kvector& v, Kvector& c) {
    if(v.len == c.len){
        for(int i = 0; i < v.len; i++) {
            if(v.m[i] != c.m[i]) return true;
        }
        return false;
    }
    else return true;
}

Kvector& Kvector::operator=(Kvector& v) {
    if(this != &v){
        delete[] m;
        len = v.len;
        m = new int[len];
        for(int i = 0; i < len; i++) {
            m[i] = v.m[i];
        }
    }
    return *this;
}

ostream& operator<<(ostream& os, Kvector& v) {
    for(int i = 0; i < v.len; i++){
        os << v.m[i] << " ";
    }
    return os;
}

class Avector : public Kvector{
    char table[N];
public:
    Avector(int size = 0, int v = 0, const char *t = "abc");
    void setTable(const char *t){
        for(int i = 0; i < N; i++)
            table[i] = t[i];
    }
    friend ostream& operator << (ostream& os, Avector&v);
};

Avector::Avector(int size, int v, const char *t) : Kvector(size, v) {
    cout << this << " : Avector(" << size << "," << v << "," << t << ")" << endl;
    for(int i = 0; i < N; i++)
        table[i] = t[i];
}

ostream& operator<<(ostream& os, Avector& v) {
    for(int i = 0; i < v.len; i++) {
        int num = v.m[i] % N;
        os << v.table[num] << " ";
    }
    return os;
}

int main(int argc, char *argv[]){
    if (argc != 2) {
        cout << "usage : ./avector pqr" << endl;
        return 1;
    }
    Avector v1(3); v1.print();
    Avector v2(2, 1, "xyz"); v2.print();
    Avector v3(v2); v3.print();
    cout << "v1 == v2 " << (v1 == v2) << endl;
    cout << "v3 == v2 " << (v3 == v2) << endl;
    v3 = v2 = v1;
    cout << "v1 : " << v1 << endl;
    v1.print();
    cout << "v2 : " << v2 << endl;
    v2.print();
    cout << "v3 : " << v3 << endl;
    v3.print();
    cout << "v3 != v2 " << (v3 != v2) << endl;
    v1[2] = 2;
    v2[0] = v1[2];
    v1.setTable(argv[1]);
    cout << "v1: " << v1 << "v2: " << v2 << "v3: " << v3 << endl;
    v1.print();
    v2.print();
    v3.print();
    return 0;
}