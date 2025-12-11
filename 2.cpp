/*类的封装   继承和派生   多态*/
/*
类
    1行为：函数表示  属性：变量表示
    2格式： class 类别
            {
                成员函数
                成员变量        //对象的本质就是变量
                                //调用成员函数,需要通过对象来调用
                                    格式：c1.catch();
                                }；
    3、类中的成员权限
        权限修饰符：
            public共有 ：对外开放
            privata私有：不对外开放
        1）定义一个类，不屑任何权限修饰词，整个类里的变量全部都是私有的
*/

//练习1：封装一个point 类，有xy坐标，求两点之间距离
//练习2：封装一个alipay类，有账号密码，私有；提供设置账号密码的方法


/*
类创建对象的两种写法  堆和栈
    1、Point *p1;   //栈空间
       p1.setPos(10,34);

        1）写在里面/外面:需要添加::类名限定
        外面：Point::getGer

    2、Point *p2 = new Point;   //堆空间
       p2->setPos(34,23);
       delete p2;

*/

/*
类的大小
    1、规则：有成员变量属性大小决定(与成员函数无关)
    2、需要满足字节/结构体对齐

*/



/*
this指针
     1、用来存当前对象地址的
*/













/*
struct用来定义结构图
class用来定义类

struct   class定义类的区别
    struct定义类，不屑权限修饰符-->>默认否是公有的
    class定义类，不写权限修饰符-->>默认是私有的
*/

//练习：猫类  比较两只猫的年龄 返回年龄比较大的猫对象，如果一样大，属于便返回一只

#include <iostream>
using namespace std;

// class Cat
// {
// public:
//     // 构造函数
//     Cat(int age, string name)
//     {
//         this->age = age;
//         this->name = name;
//     }

//     // 比较两只猫年龄，返回年龄大的猫
//     Cat compare(Cat &other)
//     {
//         if(this->age > other.age)
//         {
//             return *this;   // 返回当前对象
//         }
//         else if(this->age < other.age)
//         {
//             return other;   // 返回对方
//         }
//         else
//         {
//             return *this;   // 年龄相同，返回任意一只（这里返回当前对象）
//         }
//     }

//     void show()
//     {
//         cout << "Cat name: " << name << ", age: " << age << endl;
//     }

// public:
//     int age;
//     string name;
// };

// int main()
// {
//     Cat c1(3, "Kitty");
//     Cat c2(5, "Tom");

//     Cat older = c1.compare(c2);

//     cout << "年龄更大的猫是：" << endl;
//     older.show();

//     return 0;
// }


/*
string      //有限使用
    好处1、不需要担心越界
        2提供大量的成员函数
            apprnd asssing at copy erase find insert size 

*/


/*
构造/析构

*/

class Rect
{
public:
    // 带参构造函数
    Rect(int w, int h)
    {
        width = w;
        height = h;
    }

    void show()
    {
        cout << "width = " << width << ", height = " << height << endl;
    }

private:
    int width;
    int height;
};
