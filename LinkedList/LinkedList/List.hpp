//
//  List.hpp
//  LinkedList
//
//  Created by Jonathan Cesari on 9/30/15.
//  Copyright © 2015 Jonathan Cesari. All rights reserved.
//

#ifndef List_hpp
#define List_hpp

#include <stdio.h>

class List{
    public:
    
    private:
    
    typedef struct Node{
        int data;   //Data
        
        Node *pNext;    //Pointer to next  node
    } *pNode;
    
    pNode pHead;
    pNode pCurrent;
    pNode pTemp;
    
};


#endif /* List_hpp */
