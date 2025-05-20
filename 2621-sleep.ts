/*
2621. Sleep

Submitted: May 5, 2025

Runtime: 55 ms (beats 11.05%)
Memory: 54.95 MB (beats 60.28%)
*/

async function sleep(millis: number): Promise<void> {
    return new Promise(resolve => setTimeout(resolve, millis));
}


/** 
 * let t = Date.now()
 * sleep(100).then(() => console.log(Date.now() - t)) // 100
 */