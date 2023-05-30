class MyHashSet {
public:
    vector<int> myhashset;
    MyHashSet() {
    }
    
    void add(int key) {
        bool isthere=false;
        for(int i=0;i<myhashset.size();i++){
            if(myhashset[i]==key)
                isthere = true;
        }
        if(!isthere)
            myhashset.push_back(key);
    }
    
    void remove(int key) {
        for(auto it = myhashset.begin();it!=myhashset.end();it++){
            if(*it==key){
                myhashset.erase(it);
                break;
            }
        }
    }
    
    bool contains(int key) {    
        for(int i=0;i<myhashset.size();i++){
            if(myhashset[i]==key)
                return true;
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */