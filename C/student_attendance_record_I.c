bool checkRecord(char * s){
    int absent = 0, late = 0;
        
    for(int i = 0; i < strlen(s); i++) {
        if(*(s+i) == 'A') { 
            if(++absent > 1) return false;
            late = 0;
        }
        else if(*(s+i) == 'L') { 
            if(++late > 2) return false;
        }
        else late = 0;
    }
        
    return true;    
}
