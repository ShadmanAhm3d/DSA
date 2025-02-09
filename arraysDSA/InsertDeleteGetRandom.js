
var RandomizedSet = function() {
    this.arr = [];
    this.mp = new Map();
};

/** 
 * @param {number} val
 * @return {boolean}
 */
RandomizedSet.prototype.insert = function(val) {
    if (this.mp.has(val)) return false;
    
    this.arr.push(val);
    this.mp.set(val, this.arr.length - 1);
    return true;
};

/** 
 * @param {number} val
 * @return {boolean}
 */
RandomizedSet.prototype.remove = function(val) {
    if (!this.mp.has(val)) return false;

    let idx = this.mp.get(val);
    let lastElem = this.arr[this.arr.length - 1]; // Get last element

    // Swap the last element with the element to remove
    this.arr[idx] = lastElem;
    this.mp.set(lastElem, idx);

    // Remove last element
    this.arr.pop();
    this.mp.delete(val);
    return true;
};

/**
 * @return {number}
 */
RandomizedSet.prototype.getRandom = function() {
    let x = Math.floor(Math.random() * this.arr.length);
    return this.arr[x];
};

/** 
 * Your RandomizedSet object will be instantiated and called as such:
 * var obj = new RandomizedSet()
 * var param_1 = obj.insert(val)
 * var param_2 = obj.remove(val)
 * var param_3 = obj.getRandom()
 */
