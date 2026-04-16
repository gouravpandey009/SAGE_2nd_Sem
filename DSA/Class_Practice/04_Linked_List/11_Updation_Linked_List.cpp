//3 Cases

//10 → 20 → 30

//Update First Node

//head->data = 99;



//Update Middle Node

//10 → 20 → 30 → 40

//Update position 3 → 99

/*
Node* temp = head;

for(int i = 1; i < 3; i++) {
    temp = temp->next;
}

temp->data = 99;
*/


//Update Last Node

//10 → 20 → 30

//Make last 100

/*
Node* temp = head;

while(temp->next != NULL) {
    temp = temp->next;
}

temp->data = 100;
*/


//Function to update a node at a given position



void updateAtPosition(Node* head, int pos, int newValue) {

    if(head == NULL) return;

    Node* temp = head;

    for(int i = 1; i < pos; i++) {

        if(temp == NULL) return; 

        temp = temp->next;
    }

    temp->data = newValue;
}
    


