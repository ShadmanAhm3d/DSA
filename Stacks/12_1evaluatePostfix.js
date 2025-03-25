

const operate = (a,b,elem) =>{
  if(elem == "+")
    return a+b;

  if(elem == "-")
    return a-b;

  if(elem == "*")
    return a*b;

  if(elem == "/")
    return a/b;
}


const eval = (tokens)=>{

  let st = [];

  tokens.forEach((elem)=>{
    const elem_rn =elem ;
    if(elem_rn ==="+" || elem_rn ==="-" || elem_rn ==="+" || elem ==="/"){
      
      let a = +st.pop();
      let b = +st.pop();

      const operated_elem =  operate(a,b,elem);
      st.push(operated_elem);
    }else{
      st.push(+elem);
    }
  })

}
