// class Solution {
// public:
//     bool isValid(string s) {
//          stack<char> S;
//         unordered_map<char, char> _map = {{'(', ')'}, {'{', '}'}, {'[', ']'}};
//         for(char c: s){
//             if(c==')' || c=='}' || c == ']'){
//                 if(S.empty()) return false;
//                 if(_map[S.top()] != c) return false;
//                 S.pop();
//             } else {
//                 S.push(c);
//             }
//         }
//         return S.empty();
//     }
// };