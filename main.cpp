#include <iostream>
#include <vector>

std::vector<int> v;

void findPrime(int x){
    for(int i=2;i<=x;i++){
        if(i==2){
            v.push_back(2);
        }
        else{
            int b = 0;
            for(int j=2;j<i;j++){
                if(i%j == 0 ){
                    b = 1;
                }
            }
            if(b == 0){
                v.push_back(i);
            }
        }
    }
    if(v.size() == 0){
        std::cout<<"No prime found";
    }
    int count =0;
    for(int n: v){
        count++;
        if(count>=15){
            std::cout<<"\n";
            count=0;
        }
        std::cout<<n<<",";
    }

}

int main() {
    int choice;
    std::cout << "Enter a number" << std::endl;
    std::cin >> choice;
    findPrime(choice);

    return 0;
}