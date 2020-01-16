//
//  Responsegetbusadvpicture.h
//  CarBaDa
//
//  Created by Alex on 15/7/1.
//  Copyright (c) 2015年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface adPictureList : NSObject
@property (nonatomic, copy) NSString *adPictureId;
@property (nonatomic,copy) NSString *picTitle; //图片标题
@property (nonatomic,copy) NSString *picUrl; //图片链接的地址
@property (nonatomic,copy) NSString *picPath; //图片存储地址
@property (nonatomic,copy) NSString *picContent;
@property (nonatomic,copy) NSString *projectType; //项目类型
@property (nonatomic,copy) NSString *isCanShare;
@property (nonatomic,copy) NSString *cities; //城市
@property (nonatomic,copy) NSString *endTime; //有效期结束时间
@property (nonatomic,copy) NSString *picType; //图片类型
@property (nonatomic,copy) NSString *shareImageUrl;
@property (nonatomic,copy) NSString *startTime; //有效期开始时间
@property (nonatomic, copy) NSString *jsonFile;
@property (nonatomic, copy) NSString *iPhoneXPath;


@property (nonatomic, copy) NSString *showMainTitle; //标题
@property (nonatomic, copy) NSString *showSubTitle; //fu标题
@end

@interface Responsegetbusadvpicture : NSObject
@property (nonatomic,strong) NSMutableArray *adPictureList;
@end
