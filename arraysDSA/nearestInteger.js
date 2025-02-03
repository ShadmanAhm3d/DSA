const ni = function (n , num){

  //n = 3 , num = 26 
  let answer = 0;

  x = Math.floor(n/2);
  console.log(x);
  while(x > 0){
    //check if the number is divisible 
    if((num-x)%n==0){
      answer = num-x;
    }
    x--;
  }
  console.log(x);
  x = Math.floor(n/2);
  console.log(x);
  while(x >0){
    if((num+x)%n==0){
      answer = num+x;
    }
    x--;
  }

  return answer;

}

console.log(ni(21,674));
