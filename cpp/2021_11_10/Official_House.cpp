// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_6_C&lang=ja

#include <iostream>
// #include <vector>
using namespace std;

// https://qiita.com/oyas/items/70b7e29d0388392ef2ce
template<typename A, size_t N, typename T>
void Fill(A (&array)[N], const T &val){
    std::fill( (T*)array, (T*)(array+N), val );
}

int main(){
    // b棟f階のr番目の部屋にv人が追加で入居した
    // 

    int residents[4][3][10];
    // Initialize
    // residents(4,3,vector<int>(10, 0));
    Fill(residents, 0);
    // ↑ に置き換え

    // for(int bIni=0;bIni<4;bIni++){
    //     for(int fIni=0;fIni<3;fIni++){
    //         for(int rIni=0;rIni<10;rIni++){
    //             residents[bIni][fIni][rIni] = 0;
    //         }
    //     }
    // } // Initialize

    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        int b,f,r,v;
        cin >> b >> f >> r >> v;

        residents[b-1][f-1][r-1] = v;
    }

    for(int bOut=0;bOut<4;bOut++){ // 棟
        for(int fOut=0;fOut<3;fOut++){ // 階
            for(int rOut=0;rOut<10;rOut++){ // 部屋
                cout << ' ' << residents[bOut][fOut][rOut];
            }
            cout << endl;
        }
        if(bOut != 3){
            cout << "####################" << endl;
        }
    }

    return 0;
}