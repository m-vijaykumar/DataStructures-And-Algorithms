function circularDoubleLinkedList() {
    
    //Node
    let Node = function(data) {

      this.pre = null;
      this.data = data;
      this.next = null;
      
    }
    let length = 0;
    let head = null;
  

    //Add new node
    this.append = function(data){
        //Create new node
        const node = new Node(data);
        let current;
        
        if(head === null){
          head = node;
          node.pre = node;
          node.next = head;
        //   console.log("eff")
        }else{
          current = this.getElementAt(length - 1);
          node.pre = current;
          node.next = head;
          current.next = node;
  
        }
        
        node.next = head;
        length++;
    }

    //Insert at given position
    this.insert = function(data, index){
        if(index >= 0 && index <= length){
          const node = new Node(data);
          let current = head;
          
          //Insert at head
          if(index === 0){      
            if(head === null){
              head = node;
              node.next = head;
              node.pre = head;
            }else{
              node.next = current;  
              current.pre = node;
              current = this.getElementAt(length);
              node.pre = current;
              head = node;
              // current.previous = head;
              current.next = head;
            }
          }else{
            //Insert at given index (middle or end)
            const previous = this.getElementAt(index - 1);
            node.next = previous.next;
            node.pre = previous;
            previous.next.pre = node;
            previous.next = node;
          }
          
          length++;
          return true;
        }
        return false;
    }

    //Remove at any position
    this.removeAt = function (index) {
      if(index >= 0 && index < length){
        let current = head;
        
        //Remove from head
        if(index === 0){
          if(length === 1){
            head = undefined;
          }else{
            const removed = head;
            current = this.getElementAt(length - 1);
            head = head.next;
            head.pre = current;
            current.next = head;
            current = removed;
          }
        }else{
          //Remove at given index (middle or end)
          const previous = this.getElementAt(index - 1);
          current = previous.next;
          current.next.pre = previous;
          previous.next = current.next;
        }
        
        length--;
        return current.data;
      }
      return undefined;
    }
    

    this.getElementAt = function(index) {
        if(index >= 0 && index <= length){
          let node = head;
          for(let i = 0; i < index && node != null; i++){
            node = node.next;
          }
          return node;
        }
        return -1;
    }

    //Get the indexOf item 
    this.indexOf = function(elm){
        // try{
        let current = head,
        index = -1;
    
        //If element found then return its position
        
        while(current){
            if (index <= length ) {
                return -1
            }
            if(elm === current.data){
                return ++index;
            }
    
            index++;
            current = current.next;
        }
        // }catch(err){
        //     console.log(err)
        //     return 1;
        // }
        //Else return -1
        // console.log(-1)
        return -1;
    };
    
    //Find the item in the list
    this.isPresent = (data) => {
        return this.indexOf(data) !== -1 ;
      
    };
    
    //Get the head
    this.getHead = function(){
      return head;
    }
    
    //Delete an item from the list
    this.delete = (data) => {
       return this.removeAt(this.indexOf(data));
    }; 
    

    this.getElements = ()=>{
        current = head;
      const temp = head.data
  
      while(current){
        //Break if first element detected
            if(temp === current.next.data){
            //   arr.push(current.element);
                console.log(""+current.data)
                break;
            }
            console.log(current.data)
          current = current.next;
        }
        return true;
    }
    
    //Convert list to array
    this.toArray = function(){
      let arr = [],
      current = head;
      const temp = head.data
  
      while(current){
        //Break if first element detected
        if(current.next == head ){
          arr.push(current.data);
          break;
        }
        
        arr.push(current.data);
        current = current.next;
      }
  
      return arr;
    };
    
  }


function uniqueArray(arr){

    let arrr = []
    return arr.filter((value , index)=>{
        return arr.indexOf(value) == index;
    })
}

let cDLL = new circularDoubleLinkedList();


// cDLL.append(Data);
cDLL.append(20);
cDLL.append(30);
cDLL.append(70);
cDLL.append(50);
cDLL.append(30);
cDLL.append(20);
cDLL.append(50);
cDLL.append(90);
cDLL.append(70);
cDLL.append(50);
cDLL.append(40);
cDLL.append(70);
cDLL.append(50);
cDLL.append(100);
cDLL.append(60);
cDLL.append(70);

// cDLL.getElements();

// cDLL.removeAt(Index)
console.log(cDLL.removeAt(3));

// cDLL.insert(Data, Index);
cDLL.insert(700, 3);
cDLL.insert(500, 4);
cDLL.insert(950, 3);

// cDLL.delete(Data);
console.log(cDLL.delete(70000));


console.log("All Elements in List " , cDLL.toArray())

console.log("Unique Elements in List " , uniqueArray(cDLL.toArray()))

console.log(uniqueArray(cDLL.toArray())[9])