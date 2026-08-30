#include <iostream>

int a,b,c,d;
bool valid = true;


class node{
    
    public:
    int data;
    node* left;
    node* right;

    node(int key){
        data = key;
        left = nullptr;
        right = nullptr; 

    }

};
bool searchtree(node* firstnode, node* secondnode, node* forthnode);
int main(){

do {std::cout << "enter first node";
    std::cin >> a;
    std::cout << "enter second node";
    std::cin >> b;
    std::cout << "enter third node";
    std::cin >> c;
    std::cout << "enter forth node";
    std::cin >> d;
    node* firstnode = new node(a);
    node* secondnode = new node(b);
    node* thirdnode = new node(c);
    node* forthnode = new node(d);

    firstnode->left = secondnode;
    firstnode->right = thirdnode;
    secondnode->left = forthnode;
     searchtree(firstnode, secondnode, forthnode);

     delete firstnode;
     delete secondnode;
     delete thirdnode;
     delete forthnode;
}while(valid == false);

    return 0;
}



bool searchtree(node* firstnode, node* secondnode, node* forthnode){
    if(secondnode->data > firstnode->data){
        std::cout << "invalid secondnode retry" << "\n";
        valid = false;
    }
    if(forthnode->data > secondnode->data){
         std::cout << "invalid forthnode retry"<< "\n";
         valid = false;
    }
   
    
    return valid;

}