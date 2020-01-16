//
//  ResponseGetHomePageInfo.h
//  CarBaDa
//
//  Created by 丁健 on 2019/6/13.
//  Copyright © 2019年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface homepageBody : NSObject
@property (nonatomic, copy) NSString *templateName;//模板名称
@property (nonatomic, copy) NSString *homepageType;//首页类型
@property (nonatomic, copy) NSArray *menuList;//皮肤信息
@property (nonatomic, copy) NSArray *mainCells;//
@property (nonatomic, copy) NSArray *subCells;//
@property (nonatomic, copy) NSArray *activityCells;//

@property (nonatomic, copy) NSString *localData;//非接口给（1则是本地数据）
@end


@interface ResponseGetHomePageInfo : NSObject
@property (nonatomic, strong) homepageBody *homepageBody;
@end

@interface mainCells : NSObject
@property (nonatomic, copy) NSString *cellIcon;//
@property (nonatomic, copy) NSString *cellIndex;//
@property (nonatomic, copy) NSString *cellType;//
@property (nonatomic, copy) NSString *templateName;//
@property (nonatomic, copy) NSString *cellValue;//
@property (nonatomic, copy) NSString *homepageType;//
@property (nonatomic, copy) NSString *cellTitle;//
@property (nonatomic, copy) NSString *cellSubTitle;//

@end

@interface subCells : mainCells

@end

@interface activityCells : mainCells

@end
