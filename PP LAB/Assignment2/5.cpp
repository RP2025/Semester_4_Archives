#include <iostream>
 
struct NewStruct {
    int data;
};

template <typename T>
struct MyStack {
    T* stack;
    int top;
    int maxSize;
};

template <typename T>
void Initialize(MyStack<T>& s, int maxSize) {
    s.stack = new T[maxSize];
    s.top = -1;
    s.maxSize = maxSize;
}

template <typename T>
void Push(MyStack<T>& s, T element) {
    if (s.top == s.maxSize - 1) {
        std::cout << "Error: Stack overflow" << std::endl;
    }
    else
        s.stack[++s.top] = element;
}

template <typename T>
T Pop(MyStack<T>& s) {
    if (s.top == -1) {
        std::cout << "Error: Stack underflow" << std::endl;
    }
    else{
        return s.stack[s.top--];
    }
    
}

template <typename T>
int GetMaxSize(MyStack<T>& s) {
    return s.maxSize;
}

template <typename T>
int CurrentSize(MyStack<T>& s) {
    return s.top + 1;
}

template <typename T>
bool IsEmpty(MyStack<T>& s) {
    return s.top == -1;
}


int main()
{
    int isWhat = 0;
    std::cout << "1. Int\n2. Short\n3. Float\n4. Double\n5. Structure\nInput: ";
    std::cin >> isWhat;

    if(isWhat == 1){
        MyStack<int> s1;
            int n = 0;
            std::cout << "Enter the size of the stack: ";
            std::cin >> n;

        Initialize(s1, n);
        int input = 1;

        while(input){

            std::cout << "Enter Input accordingly:\n1. Push\n2. Pop\n3. Get max size.\n4. Current Size.\n5. Is Empty.\n0. Close\nInput: ";
            std::cin >> input;

            if(input == 1){
                int element = 0;
                std::cout << "Enter element: ";
                std::cin >> element;
                Push(s1, element);
            }

            else if(input == 2){
                Pop(s1);
            }

            else if(input == 3){
                std::cout << "Max size of stack 1: " << GetMaxSize(s1) << std::endl;
            }

            else if(input == 4){
                std::cout << "Current size of stack 1: " << CurrentSize(s1) << std::endl;
            }

            else if(input == 5){
                std:: cout << (IsEmpty(s1) ? "Yes" : "No") << std::endl;
            }
        }
    }

    else if(isWhat == 2){
        int input = 1;
        MyStack<short> s1;
        int n = 0;
        std::cout << "Enter the size of the stack: ";
        std::cin >> n;

        Initialize(s1, n);

        while(input){

            std::cout << "Enter Input accordingly:\n1. Push\n2. Pop\n3. Get max size.\n4. Current Size.\n5. Is Empty.\n0. Close\nInput: ";
            std::cin >> input;

            if(input == 1){
                short element = 0;
                std::cout << "Enter element: ";
                std::cin >> element;
                Push(s1, element);
            }

            else if(input == 2){
                Pop(s1);
            }

            else if(input == 3){
                std::cout << "Max size of stack 1: " << GetMaxSize(s1) << std::endl;
            }

            else if(input == 4){
                std::cout << "Current size of stack 1: " << CurrentSize(s1) << std::endl;
            }

            else if(input == 5){
                std:: cout << (IsEmpty(s1) ? "Yes" : "No") << std::endl;
            }
        }
    }

    else if(isWhat == 3){
        int input = 1;
        MyStack<float> s1;
        int n = 0;
        std::cout << "Enter the size of the stack: ";
        std::cin >> n;

        Initialize(s1, n);
        
        while(input){
            std::cout << "Enter Input accordingly:\n1. Push\n2. Pop\n3. Get max size.\n4. Current Size.\n5. Is Empty.\n0. Close\nInput: ";
            std::cin >> input;

            if(input == 1){
                float element = 0;
                std::cout << "Enter element: ";
                std::cin >> element;
                Push(s1, element);
            }

            else if(input == 2){
                Pop(s1);
            }

            else if(input == 3){
                std::cout << "Max size of stack 1: " << GetMaxSize(s1) << std::endl;
            }

            else if(input == 4){
                std::cout << "Current size of stack 1: " << CurrentSize(s1) << std::endl;
            }

            else if(input == 5){
                std:: cout << (IsEmpty(s1) ? "Yes" : "No") << std::endl;
            }
        }
    }

    else if(isWhat == 4){

        int input = 1;
        MyStack<double> s1;
        int n = 0;
        std::cout << "Enter the size of the stack: ";
        std::cin >> n;

        Initialize(s1, n);

        while(input){
            std::cout << "Enter Input accordingly:\n1. Push\n2. Pop\n3. Get max size.\n4. Current Size.\n5. Is Empty.\n0. Close\nInput: ";
            std::cin >> input;

            if(input == 1){
                double element = 0;
                std::cout << "Enter element: ";
                std::cin >> element;
                Push(s1, element);
            }

            else if(input == 2){
                Pop(s1);
            }

            else if(input == 3){
                std::cout << "Max size of stack 1: " << GetMaxSize(s1) << std::endl;
            }

            else if(input == 4){
                std::cout << "Current size of stack 1: " << CurrentSize(s1) << std::endl;
            }

            else if(input == 5){
                std:: cout << (IsEmpty(s1) ? "Yes" : "No") << std::endl;
            }
        }
    }

    else if(isWhat == 5){
        int input = 1;
        MyStack<NewStruct> s1;
        int n = 0;
        std::cout << "Enter the size of the stack: ";
        std::cin >> n;

        Initialize(s1, n);

        while(input){
            std::cout << "Enter Input accordingly:\n1. Push\n2. Pop\n3. Get max size.\n4. Current Size.\n5. Is Empty.\n0. Close\nInput: ";
            std::cin >> input;

            if(input == 1){
                int element = 0;
                std::cout << "Enter element: ";
                std::cin >> element;
                NewStruct s;
                s.data = element;
                Push(s1, s);
            }

            else if(input == 2){
                Pop(s1);
            }

            else if(input == 3){
                std::cout << "Max size of stack 1: " << GetMaxSize(s1) << std::endl;
            }

            else if(input == 4){
                std::cout << "Current size of stack 1: " << CurrentSize(s1) << std::endl;
            }

            else if(input == 5){
                std:: cout << (IsEmpty(s1) ? "Yes" : "No") << std::endl;
            }
        }
    }
}