#include <iostream>
using namespace std;

int main(){
    // until time
        int h,m;
        cin >> h >> m;
        // (h and min) to min
        int MinFROMhm = 60*h + m;

    // Aizu to Shiokawa
        // trains
        int N;
        cin >> N;
        // times
        int a[N];
        int b[N];
        int MinFROMab[N];
        for(int i=0;i<N;i++){
            cin >> a[i] >> b[i];
            MinFROMab[i] = 60*a[i] + b[i];
        }
    
    // Shiokawa to Kitakata
        // trains
        int M;
        cin >> M;
        // items
        int c[M];
        int d[M];
        int MinFROMcd[M];
        for(int j=0;j<M;j++){
            cin >> c[j] >> d[j];
            MinFROMcd[j] = 60*c[j] + d[j];
        }

    // -- input


    // (h and min) to min
    int TimeToDeliverLunch = MinFROMab[0] + 10 + 1;

    // 次の電車を探す
    int TimeToArriveSch;
    for(int k=0;k<M;k++){
        if(TimeToDeliverLunch <= MinFROMcd[k]){
            TimeToArriveSch = MinFROMcd[k] + 10;
            break;
        }
    }
    if(!(TimeToArriveSch)){
        cout << 0 << endl;
        return 0;
    }


    if(TimeToArriveSch <= MinFROMhm){
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;


}