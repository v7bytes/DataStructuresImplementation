/*#include <stdio.h>
#include <stdlib.h>
  
//program to traverse a linked list
// A linked list node
struct Node
{
    int data;
    struct Node *next;
};

// This function prints contents of linked list starting from head
void printList(struct Node *n)
{
    while (n != NULL)
    {
        printf(" %d ", n->data);
        n = n->next;
    }
}

// Driver program to test above functions
int main()
{
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;
  
    // allocate 3 nodes in the heap
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
  
    head->data = 1; // assign data in first node
    head->next = second; // Link first node with second
  
    second->data = 2; // assign data to second node
    second->next = third;
  
    third->data = 3; // assign data to third node
    third->next = NULL;
  
    printList(head);
  
    return 0;
}*/
//three classes student, exam, result
//student inherited by exam and exam inherited by result
class student
{
    protected:
    int roll_no;
    public:
    void get_number(int);
    void put_number(void);
};
void student::get_number(int a)
{
    roll_no=a;
}
void student::put_number(void)
{
    cout<<"Roll number: "<<roll_no<<endl;
}
class exam:public student
{
    protected:
    float part1,part2;
    public:
    void get_marks(float,float);
    void put_marks(void);
};
void exam::get_marks(float x,float y)
{
    part1=x;
    part2=y;
}
void exam::put_marks(void)
{
    cout<<"Marks obtained: "<<endl;
    cout<<"Part1= "<<part1<<endl;
    cout<<"Part2= "<<part2<<endl;
}
class result:public exam
{
    float total;
    public:
    void display(void);
};
void result::display(void)
{
    total=part1+part2;
    put_number();
    put_marks();
    cout<<"Total score: "<<total<<endl;
}
int main()
{
    result student1;
    student1.get_number(1234);
    student1.get_marks(27.5,33.0);
    student1.display();
    return 0;
}
//output
//Roll number: 1234
//Marks obtained:
//Part1= 27.5
//Part2= 33
//Total score: 60.5