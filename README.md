# DataStructure_Heap
(堆積是某種受約束或是符合條件限制的串列)

A double-ended queue is a data structure that supports ops as below:

    1) insert ele with an (random) key

    2) delete ele with largest || smaller key

Suppose we wish to insert the ele with key into heap. As in the case of heaps, the insertion algorithm for heap follows the path from new node to the root. 

Comparing the new key with the key that is in parent of the new key, we see that since the node with the key is on a min level, and new key < the key, the new key is guaranteed to be smaller than all keys in nodes that are both on max levels and on path from node to the root.




