class TimeLimitedCache{
    cache = new Map();

    set(key,value,duration){
        const alreadyexist = this.cache.get(key);
        if(alreadyexist){
            clearTimeout(alreadyexist.timeoutId);
        }
        const timeoutId = setTimeout(()=>{
            this.cache.delete(key);
        },duration);
        this.cache.set(key,{value,timeoutId});
        return Boolean(alreadyexist);
    }

    get(key){
        if(this.cache.has(key))
            return this.cache.get(key).value;
        return -1;
    }
    
    count(){
        return this.cache.size;
    }
}