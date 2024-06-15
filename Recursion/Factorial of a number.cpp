//https://www.naukri.com/code360/problems/factorial_975273


//Method 1 -> Recursion

//But it is not optimized as for v large number the long long cannot handle the value

long long recursion(int n , long long prod){
    if(n<1){
        return prod;
    }

    return recursion(n-1,prod*n);                        //Do not forget to return the recursion in each step.

}


void factorial(int n)
{   
    long long prod=1;
    long long val = recursion(n,prod);
    cout<<val;
}

------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


//Method 2->Iterative method -> use vector
  
void factorial(int n)
{
    vector<int> result(1, 1); // Initialize the result as 1

    // Iterate from 2 to n to compute factorial
    for (int i = 2; i <= n; ++i) {
        int carry = 0;
        // Multiply each digit by the current number i
        for (auto j = 0; j < result.size(); j++) {
            int prod = result[j] * i + carry;
            result[j] = prod % 10;
            carry = prod / 10;
        }
        // Handle remaining carry
        while (carry) {
            result.push_back(carry % 10);
            carry /= 10;
        }
    }

    // Print the result in reverse order
    for (auto it = result.rbegin(); it != result.rend(); ++it) {
        cout << *it;
    }

}

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//Method 3 -> Use Linked List


/*
    Time Complexity: O(N)
    Space Complexity: O(1)

    Where N is the given number.
*/

// The node class to defining the structure of node
class Node
{
    public: 
    int val;
    Node* next; 

    Node(int val)
    {
        next = NULL;
        this->val = val;
    }
};

// Multiply function will multiply the number formed by digits list with x
void multiply(Node *digits, int x)
{
    // The variable temp to traverse through the list
    Node *temp = digits;
	
    Node* last;
    
    // Initialize carry as 0
    int carry = 0;

    // Traversing the digits linked list.
    while(temp != NULL)
    {
        // The prod will store the product of temp's val and x.
        int prod = temp->val * x + carry;

        temp->val = prod % 10;
        carry = prod / 10;

        // Storing the last node of the digits
        if(temp->next == NULL)
        {
            last = temp;
        }

        temp = temp->next;
    }

    // Iterate till carry is not equal to 0
    while(carry != 0)
    {
        last->next = new Node(carry % 10);
        carry = carry / 10;
        last = last->next;
    }
}


// A recursive function to print the list in reverse order.
void printReverse(Node *cur)
{
    if(cur == NULL)
    {
        return;
    }

    printReverse(cur->next);

    cout<<cur->val;
}

void factorial(int n)
{
    // Declaring the digits list with val as 1
    Node *digits = new Node(1);

    // Multiplying digits list with all numbers from 2 to n.
    for(int num = 2; num < n + 1; num++)
    {
        multiply(digits, num);
    }

    // Printing the list in the reverse order.
    printReverse(digits);
}
