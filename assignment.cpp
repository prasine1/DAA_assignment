#include <iostream>
#include<fstream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv){
    ifstream inputFile;
    ofstream outFile;
    string outFilename=argv[2];
    string inputFilename=argv[1];
    inputFile.open(inputFilename);
    outFile.open(outFilename);
    if(!inputFile){
	    //cout<<"File not found"<<endl;
	    return 0;
    }
    vector<int> v;

    string line;
    unordered_map<int,int> m;
    while (getline(inputFile, line)){
    	int val = stoi(line);
        	v.push_back(val);
        	m[val]++;
    }
        
    for (int i = 0; i < v.size(); i++)
    {
        m[v[i]] = i;
        
    }

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i+1; j < v.size(); j++)
        {
            int diff = abs(v[i] - v[j]);
            if (m.find(diff)!=m.end() && diff != v[i] && diff != v[j])
            {
                outFile << diff<< " "<<max(v[j],v[i]) <<" "<< min(v[j],v[i]) <<"\n";   
            }
        }
    }
    return 0;
}