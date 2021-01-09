

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include <time.h>

typedef enum _sex_type_t {
    boy,
    girl,
    unkonw,
}sex_type_t;

typedef struct _student_type_t{

    char name[20];
    char address[100];
    char phoneNum[15];
    char Class;
    sex_type_t sex;
    char age;
    float height;
    float weight;

} student_type_t;


static char nameTable[] = "梦一场初遇见千纸鹤带着心事甜度酒窝不念昔冷无情偷走你满目温柔错位梦寐没有誰只有你今生不惜一场梦逃避全世界玫\
瑰色的你那年夏天喧嚣的夜花藻与春风夏水流萤暮雨醉花季节温暖眼瞳森林屿麓忧夏伊人恋花紫璇幽梦沐若清辰守望距离一把纸伞碎江南雪紫冰雨";

static char * addrNmae[] = {
"中国京杭大运河博物馆 拱墅区运河广场1号",
"中国体育博物馆杭州分馆 体育场路210号",
"中国茶叶博物馆 龙井路88号",
"中国杭州西湖博览会博物馆 北山路40",
"中国印学博物馆 孤山后山路10号",
"杭州历史博物馆 粮道山18号",
"杭州西湖博物馆 南山路89号",
"南宋官窑博物馆 玉皇山南施家山42号",
"杭州都锦生织锦博物馆 凤起路519号",
"胡庆余堂中药博物馆 大井巷95号",
"中国江南水乡文化博物馆 余杭区临平人民广场",
"中国良渚文化博物馆 余杭区良渚镇良博路164号",
};

static char *PhoneNum = "0123456789";


static char * makePhoneNum(char *numBuff)
{
    numBuff[0] = '1';
    int i = 0, index = 0;
    srand((unsigned int)time(NULL));
    for(i = 1; i < 10; i++)
    {
        index  = rand() % 10;
        numBuff[i] = PhoneNum + index;
    }
    numBuff[11] = 0;
    printf(" the phone num is %s \n", numBuff);
    return numBuff;
}

static char *nameCreat(char *nameBuff)
{
    int nameTableLength = strlen(nameTable) / 3;
    
    srand((unsigned int)time(NULL));
    unsigned int ranNum;
    
    int i = 0;
    for (i = 0; i < 3; i++)
    {
        ranNum = rand() % nameTableLength;
        memcpy(nameBuff + i * 3, nameTable + ranNum*3, 3);  
    }
    nameBuff[9] = '\0';
    return nameBuff;
}

void makeDateFile(int num, char *fileName)
{
    printf("debug file %s function %s line %d \n", __FILE__, __FUNCTION__, __LINE__);
    

    int i;
    char nameBuff[20][10];
    char nameBuffTemp[10];
    for (i = 0; i < 20; i++)
    {
        nameCreat(nameBuffTemp);
        printf("00000000\n");
        memcpy(nameBuff[i], nameBuffTemp, 10);
        printf(" %s \n", nameBuffTemp);
        //sleep(1);
    }
    

    //printf("debug file %s function %s line %d \n", __FILE__, __FUNCTION__, __LINE__);
}