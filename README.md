# DataStructure_Heap
(堆積是某種受約束或是符合條件限制的串列)

A double-ended queue is a data structure that supports ops as below:

    1) insert ele with an (random) key

    2) delete ele with largest || smaller key

Suppose we wish to insert the ele with key into heap. As in the case of heaps, the insertion algorithm for heap follows the path from new node to the root. 

Comparing the new key with the key that is in parent of the new key, we see that since the node with the key is on a min level, and new key < the key, the new key is guaranteed to be smaller than all keys in nodes that are both on max levels and on path from node to the root.

      Root min                           r = 7
                                 
       level                            /     \
                        
        max                          70         17
                                    /  \       /  \
        min                        28  10     14   18 
                                  / \  / \    / \  / \
        max                     49  60 19 90 15 new
        
       Child

>>>
the new node needs to compare to the node in parent on the path to root.

      Root min                 7          
                                 
       level                       \    
                        
        max                         17
                                   /  \
        min                      18 
                                 / \  
        max                        new
        
       Child
>>> 
once the new node key is 5, then the diagram of bin tree shall be like as following:

      Root min                  7          
                                 
       level                       \    
                        
        max                         17
                                   /  \
        min                      5 
                                 / \  
        max                        18
        
       Child
>>>

      Root min                  5          
                                 
       level                       \    
                        
        max                         17
                                   /  \
        min                      7 
                                 / \  
        max                        18
        
       Child
       





