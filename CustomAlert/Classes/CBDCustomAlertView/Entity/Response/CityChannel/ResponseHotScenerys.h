//
//  ResponseHotScenerys.h
//  CarBaDa
//
//  Created by admin on 16/7/1.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ResponseHotScenerys : NSObject

@property (nonatomic,strong) NSString* sceneryUrl;
@property (nonatomic,strong) NSMutableArray *sceneryList;//景点列表

@end

@interface sceneryList : NSObject

@property (nonatomic,strong) NSString *picPath;//图片地址
@property (nonatomic,strong) NSString *price;//价格
@property (nonatomic,strong) NSString *projectType;//项目类型
@property (nonatomic,strong) NSString *sceneryId;//景点id
@property (nonatomic,strong) NSString *subTitle;//景点描述
@property (nonatomic,strong) NSString *title;//	景点名称
@property (nonatomic, strong) NSString *city;//景点所在地
@property (nonatomic, strong) NSString *bookingUrl;//预定的跳转地址
@property (nonatomic, strong) NSString *grade;//景点星级
@end
