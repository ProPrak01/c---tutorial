int patternmatching(char *text, char *pattern){
if(*pattern == 0){
    return 0;

}

if(*text == 0){
    return *p ==0;

}
if('?' == *pattern){
    return patternmatching(text+1,pattern+1)|| patternmatching(text,pattern+1);

}
if('*' == *pattern){
    return patternmatching(text+1,pattern)|| patternmatching(text,pattern+1);
}
if(*text == *pattern){
    return patternmatching(text+1,pattern+1);
}

return -1;
}