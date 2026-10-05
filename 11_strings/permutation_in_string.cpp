#include<iostream>
#include<string>

bool isPermutation(int freq[],int windfreq[]){
    for(int i=0;i<26;i++){
        if(freq[i]!=windfreq[i]){
            return false;
        }
    }
    return true;
}

int main(){
   
        std::string str;
    std::cout<< "Enter a string: ";
    std::getline(std::cin,str);

    std::cout<<"enter the string to check for permutation: ";
    std::string substr;

    int freq[26]={0};
    std::getline(std::cin,substr);
        for(int i=0;i<substr.length();i++)
        {
            freq[substr[i]-'a']++;
        }

    int windowSize=substr.length();

         for(int i=0;i<str.length();i++){
            int windowidx=0;
            int indx=i;
            int windfreq[26]={0};
                while(windowidx<windowSize && indx<str.length())
                {
                         windfreq[str[indx]-'a']++;  
                         windowidx++;
                         indx++;
                }
         if(isPermutation(freq, windfreq))
             {
                std::cout<<"Permutation found!"<<std::endl;
            
            }
    }
    return 0;
}
