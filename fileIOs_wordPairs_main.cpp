//
//  fileIOs_wordPairs_main.cpp
//  
//
//  Created by Sandesh Basnet on 11/12/17.
//
//

#include <stdio.h>
#include "fileIOs_wordPairs.h"
#include <iostream>
#include <utility>
#include <string>
#include <map>
#include <iterator>
#include <string>
#include <algorithm>
#include <set>
#include <vector>
#include <fstream>
#include <set>

using namespace std;

int main ()
{
    string f = "info.txt";
    vector<string> sentence;
    bool check = sentenceSplitter(f, sentence) ;
    map< pair<string,string>, int> mapPair;
    multimap<int, pair<string, string> > :: iterator it;
    multimap<int, pair<string, string> > multimapPair;
    
    check = wordpairMapping(sentence,mapPair );
    // for(it = mapPair.begin(); it != mapPair.end(); it++){
    //     cout << "< " << it->first.first << " , " << it->first.second << " > : " << it->second << endl;
    //  }
    cout << freqWordpairMmap(mapPair, multimapPair ) << endl;
    cout << multimapPair.size() << endl;
    for(it = multimapPair.begin(); it != multimapPair.end(); it++){
        cout << "< " << it->second.first << " , " << it->second.second << " > : " << it->first << endl;
    }
    printWordpairs(multimapPair,"wordpair.txt", 5, 5);
    return 0;
}

