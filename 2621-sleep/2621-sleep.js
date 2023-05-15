/**
 * @param {number} millis
 */
async function sleep(millis) {
    const result = new Promise((resolve, reject)=>{
        // A way to resolve the promise after x millis
        setTimeout(()=>{
            resolve()
        },millis)
    })

    return result
}

/** 
 * let t = Date.now()
 * sleep(100).then(() => console.log(Date.now() - t)) // 100
 */