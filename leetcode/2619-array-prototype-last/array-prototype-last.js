/**
 * @return {null|boolean|number|string|Array|Object}
 */
Array.prototype.last = function() {
    const lengthArr = this.length;
    if(lengthArr == 0){
        return -1;
    }else{
        return this[lengthArr - 1];
    }
};

/**
 * const arr = [1, 2, 3];
 * arr.last(); // 3
 */
