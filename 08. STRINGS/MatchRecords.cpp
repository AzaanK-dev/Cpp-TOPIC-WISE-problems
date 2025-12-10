// "Barca 1 Sevilla 0, Real Madrid 1 Barca 1, Barca 3 Valencia 1, Villarreal 2 Barca 1, Espanyol 2 Barca 4"
// INPUT → TEAM NAME → Barca
// Write a program to work out how many wins Barca had, how many games they drew, and
// how many Barca lost. &amp; how many games are playing at home.
// Extend the program to work out how many goals Barca scored and how many they
// conceded.
// Suppose a win gains you 3 points, a draw 1 point, and a loss no points. Have your program
// work out how many points in total Barca have acquired.


#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string>split(string str,char delimiter) {
    string word;
    vector<string>store;
    for (int i = 0; i <= str.length(); i++) {
        if (str[i]==delimiter){
            if (!word.empty()) {
                store.push_back(word);
                word = "";
            }
        }else{
            word += str[i];
        }
    }
    if (!word.empty()) {
        store.push_back(word);
    }
    return store;
}

int main() {
    string str,inp;
    cout << "Enter match records in order(team1 goals team2 goals,...): \n";
    getline(cin,str);
    cout << "Enter team: ";
    cin >> inp;

    int conced{0},scored{0},goal1{0},goal2{0},w{0},l{0},dr{0},points{0};
    bool err=false;
    
    vector<string>parts = split(str,',');
    for(string part:parts){
        vector<string>res = split(part,' ');
        if(res.size()>4){
            err=true;
            cout << "Invalid input format!\n"<<part;
            break;    
        }else{ 
            goal1 = stoi(res[1]);
            goal2 = stoi(res[3]);
            if(inp==res[0]){
                conced += goal2;
                scored += goal1;
                if(goal1>goal2) w++,points+=3;
                else if(goal1<goal2) l++;
                else dr++,points++;
            }else if(inp==res[2]){
                conced += goal1;
                scored += goal2;
                if(goal2>goal1) w++,points+=3;
                else if(goal2<goal1) l++;
                else dr++,points++;
            }
        }
    }
    if(!err){
        cout << endl << inp <<endl;
        cout << "win: "<<w<<endl;
        cout << "loss: "<<l<<endl;
        cout << "draw: "<<dr<<endl;
        cout << "Goals scored: "<<scored<<endl;
        cout << "Goals conceded: "<<conced<<endl;
        cout << "Points: "<<points<<endl;
    }
}
