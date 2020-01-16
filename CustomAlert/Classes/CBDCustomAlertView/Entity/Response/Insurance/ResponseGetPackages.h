//
//  ResponseGetPackages.h
//  CarBaDa
//
//  Created by Vic_Li on 16/9/5.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface packageList : NSObject
@property (nonatomic, copy) NSString *desp;//套餐说明
@property (nonatomic, copy) NSString *isDefault;//是否默认选中
@property (nonatomic, copy) NSString *name;//套餐名称
@property (nonatomic, copy) NSString *pId;//套餐ID
@property (nonatomic, copy) NSString *price;//套餐单价
@property (nonatomic, copy) NSString *selectedTitle;//选中标题
@property (nonatomic, copy) NSArray *tagList;//标签
@property (nonatomic, copy) NSArray *title;//套餐副标题
@property (nonatomic, copy) NSString *sort;//优先级
@property (nonatomic, copy) NSString *buyPackageType;//0-未购买保险；1-默认保险；2-手动选择保险；3-外显保险（非接口给）

@property (nonatomic, copy) NSString *insCode;//保险code
@end

@interface weatherDetail : NSObject
@property (nonatomic, copy) NSString *mainInfo;//天气
@property (nonatomic, copy) NSString *weatherIcon;// 天气图标
@property (nonatomic, copy) NSString *tips;//提醒文案
@end

@interface ResponseGetPackages : NSObject
@property (nonatomic, copy) NSString *isMail;//是否邮寄
@property (nonatomic, strong) NSArray *packageList;//套餐列表
@property (nonatomic, copy) NSString *noBuyPackageDesp;//不购买套餐说明
@property (nonatomic, strong) weatherDetail *weatherDetail;
@property (nonatomic, copy) NSString *isShow;//是否外显套餐
@property (nonatomic, copy) NSString *isAutoDefault;//是否开始自动默认 如果值等于“1”则表示需要展示“开通自动勾选保险”cell，返回参数isAutoDefault=1；否则isAutoDefault=0

@end

