// https://programmers.co.kr/learn/courses/30/lessons/42748

#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    int length_of_commands = commands.size();
    
    for (int command_index = 0 ; command_index < length_of_commands ; command_index++) {
        vector<int> current_command = commands[command_index];
        vector<int> sliced_array = vector<int>(array.begin() + current_command[0] - 1, array.begin() + current_command[1]);
        sort(sliced_array.begin(), sliced_array.end());
        answer.push_back(sliced_array[current_command[2] - 1]);
    }
    
    return answer;
}
