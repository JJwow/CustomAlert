//
//  ResponseBookValidate.h
//  CarBaDa
//
//  Created by zhaitong on 17/4/25.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
@interface specials : NSObject
@property (nonatomic, copy) NSString *name;//特殊偏好分类名称
@property (nonatomic, copy) NSString *code;//特殊偏好编码
@property (nonatomic, copy) NSString *context;//特殊偏好内容
@end

@interface ResponseBookValidate : NSObject
@property (nonatomic, copy) NSString *canBooking;//是否可订1-可订；0-不可订
@property (nonatomic, copy) NSString *ErrorMessage;//可订检查错误消息
@property (nonatomic, copy) NSString *guaranteeRate;//担保金额(如果是担保订单才有这个值)
@property (nonatomic, copy) NSString *currencyCode;//担保金额的货币类型
@property (nonatomic, copy) NSString *cancelTime;//最晚取消时间(担保订单可取消的时间，如果返回的时间小于当前时间，则代表此订单不可变更取消)
@property (nonatomic, copy) NSString *freeCancelTime;//免费取消时间
@property (nonatomic, copy) NSString *penaltyAmount;//罚金金额(只代表取消时间处于免费取消时间跟最晚取消时间之间产生的罚金金额，早于免费取消时间不收罚金，晚于最晚取消100%罚金)

//@property (nonatomic, copy) NSArray *specials;//特殊偏好（下线）
@end
