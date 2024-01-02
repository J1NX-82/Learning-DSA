]]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = (s + e) / 2;
    }
    return s;
}
