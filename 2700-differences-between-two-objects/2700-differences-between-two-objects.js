function objDiff(obj1, obj2) {
    //both primitive
    if(!isObject(obj1) && !isObject(obj2)){
        return obj1===obj2 ? {} : [obj1,obj2];
    }
    if(!isObject(obj1) || !isObject(obj2)){
        return [obj1,obj2];
    }
    if(Array.isArray(obj1) != Array.isArray(obj2)){
        return [obj1,obj2];
    }

    let ans = {};

    for(let num in obj1){
        if(num in obj2){
            const result = objDiff(obj1[num] , obj2[num]);

            if(Object.keys(result).length > 0 ){
                ans[num] = result;
            }
        }
    }

    return ans ;

};

function isObject(o1){
    return typeof(o1)==='object';
}