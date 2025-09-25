#include <iostream>

int Calculatee(int amounts,int T);

int main(){
    int amounts;
    std::cout << "Type amounts:";
    std::cin >> amounts;
    int stely = Calculatee(amounts,5);
    std::cout << "stely:" << stely << std::endl;
    std::cin >> amounts;
}

//计算将某金额换成50,20.10,5,1种面额的方法的数目(枚举树,复杂度指数级别)
int Calculatee(int amounts,int T){
    //实现对金额与面额种数的递减,并且迭代出stely的数目
    int stely = 0;
    if ( amounts<0 )
    {
        //因为金额小于零,记作0种
        return stely;
    }
    if ( amounts==0 || T==1 )
    {
        //因为金额等于零,应当记作1种
        return stely += 1;
    }
    
    int TOcoin(int n);
    //递归开始
    stely += Calculatee(amounts-TOcoin(T)/*获取面额大小*/,T);//进行总金额(amounts)减少
    stely += Calculatee(amounts,T-1);//进行面额种(Type Of Coin)减少
    
    return stely;
} 

//定义50,20.10,5,1面额
int TOcoin(int n){
    int TYPE[] = {1,5,10,20,50};
    return TYPE[n-1];
}
