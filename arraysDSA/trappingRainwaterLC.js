/**
 * @param {number[]} a
 * @return {number}
 */
var trap = function (a) {

    let l = r = 0;
    let n = a.length;

    let water = 0;

    while (r < n) {
        let tsum = 0;
        while( r < n-1 && a[r] >= a[r+1]){
            r++;
        }


        while( r < n-1 && a[r] <= a[r+1]){
            r++;
        }

    

        if (r >= n) {
            return water;
        }

        tsum -= a[r];
      
        let d = (r - l - 1);
        let w = Math.min(a[l], a[r]);
        let tc = d * w;
        water += (tc - tsum);
        console.log(water)
        l = r;
    }

    return water;

};
