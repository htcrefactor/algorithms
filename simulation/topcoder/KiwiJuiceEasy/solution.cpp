#include <vector>

using namespace std;

class KiwiJuiceEasy {
	public:
		vector <int> thePouring(vector <int> capacities, vector <int> bottles, vector <int> fromId, vector <int> toId) {
			int moves = fromId.size() / fromId[0];
			
			for(int i = 0 ; i < moves ; i++) {
				int from = fromId[i];
				int to = toId[i];
				bottles[to] = bottles[to] + bottles[from];
				bottles[from] = 0;
				
				if(bottles[to] > capacities[to]) {
					int overflow = bottles[to] - capacities[to];
					bottles[to] = bottles[to] - overflow;
					bottles[from] = overflow;
				} 		
			return bottles;
		}
};