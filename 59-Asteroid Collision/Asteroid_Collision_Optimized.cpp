class Solution {
public:
	vector<int> asteroidCollision(vector<int>& asteroids) {

		stack<int> s;

		for (int ast : asteroids) {
			if (ast < 0 and !s.empty() and s.top() > 0) {
				// collisions will occur
				bool flag = true; // assume ast will survive collisions
				while (!s.empty() and s.top() > 0) {
					if (abs(ast) > s.top()) {
						// asteroid at the top of the stack will be destroyed
						s.pop();
					} else if (abs(ast) < s.top()) {
						// ast will be destroyed
						flag = false;
						break;
					} else {
						// asteroid at the top of the stack and ast both will be destroyed
						s.pop();
						flag = false;
						break;
					}
				}
				if (flag) {
					// ast has survived collisions, so track it
					s.push(ast);
				}
			} else {
				// no collisions will occur, so track ast
				s.push(ast);
			}
		}

		vector<int> ans;
		while (!s.empty()) {
			ans.push_back(s.top());
			s.pop();
		}

		reverse(ans.begin(), ans.end());

		return ans;

	}
};