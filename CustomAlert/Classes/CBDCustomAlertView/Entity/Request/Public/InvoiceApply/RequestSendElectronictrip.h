//
//  RequestSendElectronictrip.h
//  CarBaDa
//
//  Created by zjb on 2019/4/8.
//  Copyright © 2019年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestSendElectronictrip : TCTRequestObject
@property (nonatomic, copy) NSString *projectType;//项目类型
@property (nonatomic, copy) NSString *invoiceSerialId;//电子发票流水号
@property (nonatomic, copy) NSString *memberId;//会员id
@property (nonatomic, copy) NSString *toMail;//邮箱地址
@property (nonatomic, copy) NSString *sendType;//sendType  空 或者1 电子发票和行程单，2行程单
@end

NS_ASSUME_NONNULL_END
