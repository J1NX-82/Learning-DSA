#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
    // creation
    unordered_map<int,int> m;

    //! insertion

    // 1
    pair<string, int> p = make_pair("Sweata", 6);
    m.insert(p);

    // 2
    pair<string, int> p2("Rahul", 5);
    pair<string, int> p2("Ayo", 4);
    m.insert(p2);

    // 3
    m["RS"] = 11;
        //?what will happen in this case 
    m["RS"] = 10;
        // updation will occur ..........value will be updated from 11 to 10


    // search
        //1 
            cout << m["RS"] << endl;
        //2
            cout << m.at("Sweata") << endl;
        //?3 : if no key is created then error will be thrown in such cases ( key not found )
            // cout << m.at("DAAI") << endl;
            //*but if again we try to access it 0 will be displayed as for such new keys 0 will be assigned
            // cout << m.at("DAAI") << endl;
    
    // size
    cout << m.size << endl;

    // to check presence
        //* count() ------> if absent returns 0 ; if present returns 1
    cout << m.count("bro") << endl; //in this case 0
    cout << m.count("Sweata") << endl; // in this case 1

    // erase
    m.erase("Ayo");
    cout << m.size() << endl;

    // printing
        //1 
        for(auto i:m){
            cout << i.first << " " << i.second << endl;
        }
        //2 : using iterator
        unordered_map<string, int> :: iterator it = m.begin();

        while(it != m.end()){
            cout << it -> first << " " << it -> second << endl;
            it++;
        }
    return 0;
}
