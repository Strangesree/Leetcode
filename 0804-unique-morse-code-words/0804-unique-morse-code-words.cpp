class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        if(words.size()==1)
            return 1;
        map<char,string> morse{{'a',".-"},{'b',"-..."},{'c',"-.-."},{'d',"-.."},{'e',"."},{'f',"..-."},{'g',"--."},{'h',"...."},{'i',".."},{'j',".---"},{'k',"-.-"},{'l',".-.."},{'m',"--"},{'n',"-."},{'o',"---"},{'p',".--."},{'q',"--.-"},{'r',".-."},{'s',"..."},{'t',"-"},{'u',"..-"},{'v',"...-"},{'w',".--"},{'x',"-..-"},{'y',"-.--"},{'z',"--.."}};
        set<string> s;
        for(int i=0;i<words.size();i++)
        {
            string sample;
            for(int j=0;j<words[i].size();j++)
                sample+=(morse[words[i][j]]);
            s.insert(sample);
        }
        return s.size();
    }
};