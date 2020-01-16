//
//  ResponseUrgentContactInfo.h
//  CarBaDa
//
//  Created by 丁健 on 2018/10/30.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ResponseUrgentContactInfo : NSObject
@property (nonatomic, copy) NSString *isAuto;//是否自动分享行程（0：不自动；1：自动）
@property (nonatomic, copy) NSString *beginTime;//分享开始时间（格式HH：MM）
@property (nonatomic, copy) NSString *endTime;//分享结束时间（格式HH：MM）
@property (nonatomic, copy) NSString *errorCode;//异常码
@property (nonatomic, copy) NSString *errorMsg;//异常消息
@property (nonatomic, strong) NSMutableArray *urgentContactInfo;
@end

@interface urgentContactInfo : NSObject
@property (nonatomic, copy) NSString *contactId;//
@property (nonatomic, copy) NSString *contactName;//
@property (nonatomic, copy) NSString *contactPhone;//
@end

NS_ASSUME_NONNULL_END
