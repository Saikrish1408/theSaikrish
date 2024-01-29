class LinkedListClass {
    private Node head;
    private Node tail;
    private int length;

    class Node {
        int value;
        Node next;

        public Node(int value) {
            this.value = value;
        }
    }

    public LinkedListClass(int value) {
        Node newNode = new Node(value);
        head = newNode;
        tail = newNode; 
        length = 1;
    }

    public void printList() {
        Node currentNode = head;
        while(currentNode != null) {
            System.out.println(currentNode.value);
            currentNode = currentNode.next;
        }
    }
    
    public void getHead() {
        System.out.println("Head: " + head.value);
    }

    public void getTail() {
        System.out.println("Tail: " + tail.value);
    }

    public void getLength() {
        System.out.println("Length: " + length);
    }

    public void append(int value) {
        Node newNode = new Node(value);
        if(length == 0) {
            head = newNode;
            tail = newNode;
            length = 1;
        }
        else {
            tail.next = newNode;
            tail = newNode;
            length++;
        }
    }

    public Node removeLast() {
        if(length == 0) {
            head = null;
            tail = null;
            return null;
        }
        Node forwarding = head;
        Node remaining = head;
        while(forwarding.next != null) {
            remaining = forwarding;
            forwarding = forwarding.next;
        }
        tail = remaining;
        tail.next = null;
        length--;
        return forwarding;
    }

    public void prependNode(int value) {
        Node newNode = new Node(value);
        if(length == 0) {
            head = newNode;
            tail = newNode;
            length = 1;
        } else {
            newNode.next = head;
            head = newNode;
        }
        length++;
    }

    public Node removeFirst() {
        Node removedNode = head;
        if(length == 0) {
            return null;
        }
        if(length == 1) {
            tail = null;
            return removedNode;
        }
        head = head.next;
        length--;
        return removedNode;
    }

    public Node getElement(int index) {
        if(index < 0 || index >= length) {
            return null;
        }
        Node temp = head;
        for(int i = 0 ; i < index ; i++) {
            temp = temp.next;
        }
        return temp;
    }

    public String setElement(int index, int value) {
        Node tempNode = getElement(index);
        if(tempNode != null) {
            tempNode.value = value;
            return "Updated";
        }
        return "Not Updated";
    }

    public String insertElement(int index, int value) {
        if(index < 0 || index > length) {
            return "Index Out Of Bound";
        }
        if(index == 0) {
            prependNode(value);
            return "Inserted";
        }
        if(index == length) {
            append(value);
            return "Inserted";
        }
        Node newNode = new Node(value);
        Node temp = getElement(index - 1);
        newNode.next = temp.next;
        temp.next = newNode;
        return "Inserted";
    }

    public Node removeElement(int index) {
        if(index < 0 || index >= length) {
            return null;
        }
        if(index == 0) {
            return removeFirst();
        }
        else if(index == (length - 1)) {
            return removeLast();
        }
        Node temp = getElement(index);
        Node previous = getElement(index - 1);
        previous.next = temp.next;
        temp.next = null;
        return temp;
    }

    public void reverse() {
        Node temp = head;
        head = tail;
        tail = temp;
        Node after = temp.next;
        Node before = null;
        for(int i = 0 ; i < length ; i++) {
            after = temp.next;
            temp.next = before;
            before = temp;
            temp = after;
        }
    }
}
