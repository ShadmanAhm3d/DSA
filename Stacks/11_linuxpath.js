
var simplifyPath = function(path) {
    let stack = [];
    let parts = path.split('/'); // Split by '/'

    for (let part of parts) {
        if (part === "..") {
            if (stack.length > 0) stack.pop(); // Go up one directory
        } else if (part !== "" && part !== ".") {
            stack.push(part); // Push valid directory names
        }
    }

    return "/" + stack.join("/"); // Construct simplified path
};
