// Alien Dictionary
// GFG : Hard 23-08-2024

class Solution{
    public:
    string findOrder(string words[], int n, int K) {
        unordered_map<char, unordered_set<char>> graph;
        unordered_map<char, int> indegree;

        // Initialize the graph and indegree for each character
        for (int k = 0; k < K; k++) {
            char c = 'a' + k;
            graph[c] = {};
            indegree[c] = 0;
        }

        // Create the graph by comparing adjacent words
        for (int i = 0; i < n - 1; i++) {
            string word1 = words[i];
            string word2 = words[i + 1];

            int len = min(word1.length(), word2.length());
            bool found = false;

            for (int j = 0; j < len; j++) {
                if (word1[j] != word2[j]) {
                    if (graph[word1[j]].find(word2[j]) == graph[word1[j]].end()) {
                        graph[word1[j]].insert(word2[j]);
                        indegree[word2[j]]++;
                    }
                    found = true;
                    break;
                }
            }

            // If word2 is a prefix of word1, then it's an invalid order
            if (!found && word2.length() < word1.length()) {
                return "";
            }
        }

        // Topological sort using BFS (Kahn's algorithm)
        queue<char> q;
        string res;

        for (const auto& entry : indegree) {
            if (entry.second == 0) {
                q.push(entry.first);
            }
        }

        while (!q.empty()) {
            char ch = q.front();
            q.pop();
            res += ch;

            for (const char& nbr : graph[ch]) {
                indegree[nbr]--;
                if (indegree[nbr] == 0) {
                    q.push(nbr);
                }
            }
        }

        return res.size() == graph.size() ? res : "";
    }
};
