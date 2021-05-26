
// 是否熟练使用 中的一个标志就是：看看是否用的熟练使用快捷键

// 创建一个排序类
#include <iostream>
using namespace std;


class sort{
    public:
        // 构造函数,对私有变量进行初始化
        sort(int arr[10]){
            for(int i=0;i<10;i++){
                array[i]=arr[i];
                cout<<arr[i]<<" ";
            }
            cout<<endl;

        }

        

        // 冒泡排序：交换排序；持续比较相邻的元素。如果第一个比第二个大，就交换他们两个。直到没有任何一对数字需要比较。
        // 最坏时间复杂度：O(n^2);   适用于少量数据的排序，是稳定的排序方法

        /**
        void bubbleSort(){   // 传递形式参数
            int temp;   // 中间变量值
            bool flag=false;    //标志：是否发生交换
            // 外层循环控制范围，内层循环两两比较 把最大值移到最右边
            
            for(int i=9;i>0;i--){
                // 内层循环：进行相邻比较，把最大值逐渐右移
                for(int j=0;j<i;j++){
                    // 相邻两值比较，大值交换到右边
                    if(array[j]>array[j+1]){
                        temp=array[j];
                        array[j]=array[j+1];
                        array[j+1]=temp;
                        flag=true;
                    }

                   
                }

                if(!flag){
                        break;  // 这说明直接顺序好的
                }

            }
        }

        */
        void quickSort(int A[],int low, int high){
            if(low<high){
                int pivot = Paritition(A)
            }
        }
        // 快速排序
        // 先定义分区函数 ，实现三数中指分隔法
        Paritition(int A[],int low,int high){
            // low 和high 是指针
            int pivot = A[low]; // 选择基准值
            
            while(low < high){
                // 将比基准值小的交换到低端
                while(low < high && A[high]>= pivot){
                    high--;
                }

                 // 采用替换而不是交换的方式操作
                A[low] = A[high];
            // 将比基准值大的交换到高端
                while (low < high && a[low] <= pivot){
                    low++;
                }

                a[high]=a[low];     
            }   
            
            // 基准值所在位置赋值
            a[low]=pivot;
            // 返回到基准值所在的位置
            return low;

        }

        
        void arrOut(){
            for(int i=0;i<10;i++){
                
                cout<<array[i]<<" ";
            }
            cout<<endl;
        }

    private:
        int array[10]={0};

};

// 测试用例
int main(){
    // 测试数组
    int arr[10]={0,9,4,7,3,6,2,8,1,5};
    sort bubble(arr);
    cout<<"after sort"<<endl;
    bubble.bubbleSort();

    bubble.arrOut();

    return 0;

}
