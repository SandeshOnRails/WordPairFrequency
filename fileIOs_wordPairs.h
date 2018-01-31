//
//  fileIOs_wordPairs.hpp
//  
//
//  Created by Sandesh Basnet on 11/12/17.
//
//

#ifndef fileIOs_wordPairs_h
#define fileIOs_wordPairs_h


#include "fileIOs_wordPairs.cpp"
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
#include <stdio.h>

bool sentenceSplitter(string& fname, vector<string>& sentences);
bool wordpairMapping( vector<string>& sentences, map< pair<string,string>, int> &wordpairFreq_map);
bool freqWordpairMmap(map< pair<string,string>, int> &wordpairFreq_map, multimap<int, pair<string, string> > &freqWordpair_mmap );
bool myfunction (int i,int j);
void printWordpairs(multimap<int, pair<string, string> > &freqWordpair_multimap, string outFname, int topCnt, int botCnt);


#endif /* fileIOs_wordPairs_hpp */
