//
//  RequestCreateFlightOrder.h
//  CarBaDa
//
//  Created by lkk42286 on 2019/4/25.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTRequestObject.h"
#import "RequestVertifyPassenger.h"
#import "ResponseGetTrainOrderInfo.h"

@interface RequestCreateFlightOrder : TCTRequestObject

@property (nonatomic, strong) NSString *cabinKey;//航班查询的舱位 Key 值
@property (nonatomic, strong) NSString *memberId;//会员ID
@property (nonatomic, strong) NSString *linkMan;//联系人姓名

@property (nonatomic, strong) NSString *linkPhone;//联系人号码
@property (nonatomic, strong) NSString *accidentInsCode;//意外险保险代码code
@property (nonatomic, strong) NSString *delayInsCode;//购买延误险保险代码
@property (nonatomic, strong) NSString *packInsCode;//购买组合险保险代码
@property (nonatomic, strong) NSString *couponCode;//红包code-V494
@property (nonatomic, strong) NSString *couponAmount;//红包金额--V494
@property (nonatomic, strong) NSString *email;// 邮箱

@property (nonatomic, strong) NSString *mergeMailSerialid;// 合并邮寄流水号
@property (nonatomic, strong) NSString *marketingId;// 营销ID

@property (nonatomic, strong) postInfo *postInfo;

@property (nonatomic, strong) NSMutableArray *passengers;//

@end
