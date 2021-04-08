#include<vector> 

class SegmentTree
{
private:
    vector<int> segtree; 
    int size; 

    void build(){ 
        for(int i=this.size-1; i>0; --i) 
            this.segtree[i] = this.segtree[i<<1] + this.segtree[i<<1|1]; 
    }

public:

    SegmentTree(vector<int> array){ 
        this.size = array.size(); 
        this.segtree.resize(2*this.size()); 
        for(int i=n; i<n+this.size; i++) 
            this.segtree[i] = array[i]; 
        this.build(); 
    } 

    void modify(int position, int value){
        for(this.segtree[position+this.size] = value; position>1; position>>=1) 
            this.segtree[position>>1] = this.segtree[position] + this.segtree[position^1]; 
    }
};


