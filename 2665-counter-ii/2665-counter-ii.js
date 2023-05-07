/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */

var createCounter = function(init) {
    let initcount = init;
    function increment(){
        return ++init;
    }
    function decrement(){
        return --init;
    }
    function reset(){
        init = initcount;    // we need to update that
        return initcount;   // not only returning the initcount
    }
    return {
        increment:increment,
        decrement:decrement,
        reset:reset
    }
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */