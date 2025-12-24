class LRUCache {
public:
   //WE NEED doubly linked list(dll) which will be provided by list
   list<int>dll;
   /*we need map to store key and address of node,value
    map<int,pair<address,int>>cache_mp;
    but we do not know the address type
    the address type is actually address of node of dll which of 
    type list<int>::iterator.so replace the address with <int>::iterator
    */
    map<int,pair<list<int>::iterator,int>>mp_cache;
    int n;
    LRUCache(int capacity) {
        n=capacity;
        
    }
    void makerecentlyUsed(int key){
        //first delete it
        dll.erase(mp_cache[key].first);
        //put it infront
        dll.push_front(key);
        //address is changed now for this key..so update it in map
        mp_cache[key].first=dll.begin();

    }
    
    int get(int key) {
        //if the key is not present 
        if(mp_cache.find(key)==mp_cache.end()){
            return -1;
        }
        //if it is in map,mark it recently used.move it to front only afer        erasing it
     //make one fxn and pass the key in it
     makerecentlyUsed(key);
     return mp_cache[key].second;
        
    }
    
    void put(int key, int value) {
        //if key is  present,need to change(update) the value
        //and mark it recentlyused
        if(mp_cache.find(key)!=mp_cache.end()){
            mp_cache[key].second=value;
            makerecentlyUsed(key);

        }else{ //else the key is not present.then put it in the node of dll
            dll.push_front(key);
            mp_cache[key]={dll.begin(),value};
            n--;
        }
        if(n<0){
            //erase which is in back
            int key_to_delete=dll.back();
            mp_cache.erase(key_to_delete);
            dll.pop_back();
            n++;
        }
        
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */