#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

class KiwiJuiceEasy {
	public:
		vector <int> thePouring(vector <int> capacities, vector <int> bottles, vector <int> fromId, vector <int> toId) {
			int moves = fromId.size() / fromId[0];
			
			for(int i = 0 ; i < moves ; i++) {
				bottles[toId[i]] = bottles[toId[i]] + bottles[fromId[i]];
				bottles[fromId[i]] = 0;
				
				if(bottles[toId[i]] > capacities[toId[i]]) {
					int overflow = bottles[toId[i]] - capacities[toId[i]];
					bottles[toId[i]] = bottles[toId[i]] - overflow;
					bottles[fromId[i]] = overflow;
				}
			}

			return bottles;
		}
};