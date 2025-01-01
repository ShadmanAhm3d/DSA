func mergeAlternately(word1 string, word2 string) string {
    

    p1,p2 := 0,0;

    result := "";


	for p1 < len(word1) || p2 < len(word2) {
	  if  p1< len(word1){
        result += string(word1[p1]);
        p1++;
      }

      if p2 < len(word2){
        result+=string(word2[p2]);
        p2++;
      }
    }

    return result;

}
