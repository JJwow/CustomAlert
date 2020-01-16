//
//  ResponseGetCommodityList.h
//  CarBaDa
//
//  Created by Vic_Li on 2018/3/1.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ResponseGetCityIntMaillList.h"
@interface brandList : NSObject
@property (nonatomic, copy) NSString *brandId;//品牌id
@property (nonatomic, copy) NSString *brandImg;//品牌图片
@property (nonatomic, copy) NSString *brandName;//品牌名

@end


@interface classifyList : NSObject
@property (nonatomic, copy) NSString *backColor;
@property (nonatomic, copy) NSString *classifyName;//分类名称
@property (nonatomic, copy) NSString *showType;
@property (nonatomic, strong) NSArray *singleProductList;
@end

@interface ResponseGetCommodityList : NSObject
@property (nonatomic, strong)NSArray *brandList;
@property (nonatomic, strong)NSArray *classifyList;//分类列表
@property (nonatomic, copy) NSString *cooperationMethod;//合作方式
@end
