//
//  Responsegettrainstations.h
//  CarBaDa
//
//  Created by 丁健 on 15/11/20.
//  Copyright © 2015年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ResponseGetTrainStations : NSObject
@property (nonatomic,strong) NSMutableArray *deleteStations;//删除车站 ~262
@property (nonatomic,strong) NSMutableArray *updateStations;//更新车站 ~262
@property (nonatomic,strong) NSString *lastTime;//最后更新时间 ~262
//待删
@property (nonatomic,strong) NSMutableArray *stationList;
@property (nonatomic,strong) NSString *versionNum;
-(instancetype)initWithCash;

@end
@interface stationList : NSObject
@property (nonatomic,strong) NSString *prefix;
@property (nonatomic,strong) NSMutableArray *trainstations;

//汽车城市列表
@property (nonatomic,strong) NSString *cityName;//    车站所属区县，对应的是cities里面的name，可以为区县
@property (nonatomic,strong) NSString *stationName;//车站名称
@property (nonatomic,strong) NSString *province;//接口未返回，是从对应city手动置顶,下单用
@property (nonatomic,strong) NSString *city;//接口未返回，是从对应city手动置顶,下单用，对应的是cities里面的city

@end

@interface trainstations : NSObject
@property (nonatomic,copy) NSString *name;//车站名称
@property (nonatomic, copy) NSString *type;//类型（1:火车站，2:城市）
@property (nonatomic,copy) NSString *enName;              //全拼
@property (nonatomic,copy) NSString *isHot;               //是否热门    0否1是
@property (nonatomic,copy) NSString *prefixLetter;        //首字母
@property (nonatomic,copy) NSString *shortEnName;         //简拼
@property (nonatomic,copy) NSString *searchName;          //搜索
@property (nonatomic,copy) NSString *stationCode;
@property (nonatomic,copy) NSString *cutSortEnName;//eg：shang-hai-hong-qiao 上海虹桥
@property (nonatomic,copy) NSString *firstHanziPinyin;//第一个汉字的拼音
@property (nonatomic,copy) NSString *secondHanziPinyin;//第二个汉字的拼音
@property (nonatomic, copy) NSString *region;//车站所在区域
@property (nonatomic, copy) NSString *distance;//距离
@property (nonatomic, copy) NSString *showCity; //括号里显示的城市名
@property (nullable, nonatomic, copy) NSDate *date;//存入数据库时间（非接口）
@property (nullable, nonatomic, copy) NSString *cityName;//城市名称，用于VC间传递用（非接口）
@property (nullable, nonatomic, copy) NSNumber *isDepart;//是否为出发城市（非接口）
@end

