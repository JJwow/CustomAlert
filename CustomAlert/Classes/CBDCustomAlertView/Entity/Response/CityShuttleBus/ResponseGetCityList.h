//
//  ResponseGetCityList.h
//  CarBaDa
//
//  Created by LZQ on 15/12/31.
//  Copyright © 2015年 wyj. All rights reserved.
//

#import "TCTResponseObject.h"
#import "ResponseGetBusDepartures.h"
#import "ResponseCarGetCity.h"
/**
 *  body :
 cityList :
      prefix : S
      cities :
          name : 苏州
          enName : SU ZHOU
          shortEnName : SZ
          prefixLetter : S
 isSuccess : 1
 */

//@interface cities : NSObject
//
//@property(nonatomic, strong)NSString *name;//城市名称
//@property(nonatomic, strong)NSString *enName;//拼音
//@property(nonatomic, strong)NSString *shortEnName;//简拼
//@property(nonatomic, strong)NSString *prefixLetter;//首字母
//
//@end

//@interface cityList : NSObject
//
//@property(nonatomic, strong)NSString *prefix;//首字母
//@property(nonatomic, strong)cities *cities;//相同首字母城市集合
//
//@end

@interface ResponseGetCityList : TCTResponseObject

@property(nonatomic, strong)NSArray * cities;//城市列表
@property(nonatomic, strong)NSString *isSuccess;

@end